#pragma once

#include <iostream>
#include <cassert>
#include <utility>

#include "state.h"

class Cell {
  private:
  State state;
  char form;
  int XPosition;
  int YPosition;
  //std::pair<int,int> position;

  public:
  Cell();
  Cell(State new_state);

  void setState(State new_state);
  void setForm(char new_form);
  void setXPosition(int newXPos);
  void setYPosition(int newYPos);

  Cell getState();
  char getForm();
  int getXPosition();
  int getYPosition();

  void updateCell();
  friend std::ostream& operator<<(std::ostream &os, Cell ext_cell);
  //void setPosition(std::pair<int,int> newPos);  
  //std::pair<int,int> getPosition();

};