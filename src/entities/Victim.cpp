#include "Victim.h"
#include "../utils/Physics.h"

Victim::Victim() { 

  this->enabled = false;
  this->posIndex = 0;
  this->alive = 0;
  this->x = pgm_read_byte(&Physics_Arc[this->posIndex * 2]);
  this->y = pgm_read_byte(&Physics_Arc[(this->posIndex * 2) + 1]);

}

uint8_t Victim::getX() {

  return this->x;

}

uint8_t Victim::getY() {

  return this->y;

}

uint8_t Victim::getRotation() {

  if (this->alive == 0) {
    return this->rotIndex;
  }
  else {
    return 4;
  }

}

uint8_t Victim::getEnabled() {

  return this->enabled;

}

uint8_t Victim::getHaloIndex() {

  return (this->alive / VICTIM_HALO_DELAY) % 3;

}

uint8_t Victim::getPuffIndex() {

  return this->puffIndex;

}

uint8_t Victim::getAlive() {

  return this->alive;

}

void Victim::setEnabled(bool value) {

  this->enabled = value;

}

void Victim::setAlive(uint8_t value) {

  this->alive = value;

}

void Victim::init() {

  this->enabled = true;
  this->posIndex = 0;  
  this->alive = 0;
  this->puffIndex = 0;

  if (this->posIndex > 67) this->posIndex = 0;

  this->x = pgm_read_byte(&Physics_Arc[this->posIndex * 2]);
  this->y = pgm_read_byte(&Physics_Arc[(this->posIndex * 2) + 1]);

}


void Victim::incPuffIndex() {

  this->puffIndex++;
  if (this->puffIndex == 6) this->enabled = false;

}

void Victim::move() {
  
  this->posIndex++;  

  if (this->posIndex == 76) {
    this->posIndex = 0;
    this->enabled = false;
    return;
  }

  switch (this->alive) {

    case 0: // alive
      this->x = pgm_read_byte(&Physics_Arc[this->posIndex * 2]);
      this->y = pgm_read_byte(&Physics_Arc[(this->posIndex * 2) + 1]);
      break;

    case 1: //
      this->x++;
      this->y = VICTIM_ON_GROUND_1;
      this->alive++;
      break;

    case 2: //
      this->x++;
      this->y = VICTIM_ON_GROUND_2;
      this->alive++;
      break;

    case 3 ... VICTIM_HALO_MAX: //
      this->alive++;
      break;

    default: 
      this->enabled = false;
      break;

  }

}

void Victim::rotate() {

  this->rotIndex++;
  if (this->rotIndex == 8) this->rotIndex = 0;

}