#include "Peg.h"

#include <iostream>

using namespace std;

void Peg::changePeg() { // if has peg is true change to false adn vis-versa
  this.hasPeg = 0 - (hasPeg - 1);
}

bool Peg::getPeg() {
  return this.hasPeg;
}
