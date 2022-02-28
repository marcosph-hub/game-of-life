#include "cell.h"

Cell::Cell() {

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

Cell Cell::getState() {
  return state;
}

char Cell::getForm() {
  return form;
}

std::ostream&operator<<(std::ostream &os, Cell ext_cell) {
  os << ext_cell.getForm();
  return os;
}