#include "Ambulance.h"
#include "../utils/Physics.h"

Ambulance::Ambulance() { }

int8_t Ambulance::getX() {

  return this->x;

}

uint8_t Ambulance::getY() {

  return this->y;

}

uint8_t Ambulance::getPuffIndex(Direction direction) {

  return this->puffIndex[static_cast<uint8_t>(direction)];

}

Direction Ambulance::getDirection() {

  return this->direction;

}

void Ambulance::setX(int8_t value) {

  this->x = value;

}

void Ambulance::setY(uint8_t value) {

  this->y = value;

}

void Ambulance::setPuffIndex(Direction direction, uint8_t value) {

  this->puffIndex[static_cast<uint8_t>(direction)] = value;

}

void Ambulance::setDirection(Direction value) {

  this->direction = value;

}

void Ambulance::incX() {

  this->x++;

}

void Ambulance::decX() {

  this->x--;

}

void Ambulance::incY() {

  this->y++;
  this->direction = Direction::Down;

}

void Ambulance::decY() {

  this->y--;
  this->direction = Direction::Up;

}

void Ambulance::incPuffIndex(Direction direction) {

  this->puffIndex[static_cast<uint8_t>(direction)]++;
  if (this->puffIndex[static_cast<uint8_t>(direction)] == 6) this->puffIndex[static_cast<uint8_t>(direction)] = 0;

}

void Ambulance::incPuffIndexes() {

  for (uint8_t direction = 0; direction < 4; direction++) {

    if (this->puffIndex[static_cast<uint8_t>(direction)] > 0) {
      this->puffIndex[static_cast<uint8_t>(direction)]++;
      if (this->puffIndex[static_cast<uint8_t>(direction)] == 6) this->puffIndex[static_cast<uint8_t>(direction)] = 0;
    }

  }

}

void Ambulance::incPuffIndexIfZero(Direction direction) {

  if (this->puffIndex[static_cast<uint8_t>(direction)] == 0) this->puffIndex[static_cast<uint8_t>(direction)]++;

}
