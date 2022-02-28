#include "cell.h"

Cell::Cell() {
  int deadState = 0;
  State defaultState(deadState);
  XPosition = 0;
  YPosition = 0;
}

Cell::Cell(State new_state) {
  state = new_state;
}

void Cell::setState(State new_state) {
  state = new_state;
}

void Cell::setForm(char new_form) {
  form = new_form;
}
/*
void Cell::setPosition(std::pair<int,int> newPos) {
  position = newPos;
}
*/
void Cell::setXPosition(int newXPos) {
  XPosition = newXPos;
}

void Cell::setYPosition(int newYPos) {
  YPosition = newYPos;
}
/*
std::pair<int,int> Cell::getPosition() {
  return position;
}
*/
int Cell::getXPosition() {
  return XPosition;
}

int Cell::getYPosition() {
  return YPosition;
}

Cell Cell::getState() {
  return state;
}

char Cell::getForm() {
  return form;
}

void Cell::updateCell() {
  
}

std::ostream&operator<<(std::ostream &os, Cell ext_cell) {
  os << ext_cell.getForm();
  return os;
}