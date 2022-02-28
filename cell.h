#pragma once

#include <iostream>
#include <cassert>

#include "state.h"

class Cell {
  private:
  State state;
  char form;

  public:
  Cell();
  Cell(State new_state);

  void setState(State new_state);
  void setForm(char new_form);
  Cell getState();
  char getForm();
  

  friend std::ostream& operator<<(std::ostream &os, Cell ext_cell);
};