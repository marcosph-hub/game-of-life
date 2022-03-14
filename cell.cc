#include "cell.h"
#include "grid.h"
#define RR "\e[1;31m"
#define NC "\e[0m"
#define GRN "\e[0;92m"
#define BLK "\e[40m"

Cell::Cell() {
  int deadState = 0;
  State defaultState(deadState);
  XPosition = 0;
  YPosition = 0;
  aliveNeighbors = 0;
}

Cell::Cell(State new_state, int XPos, int YPos) {
  state = new_state;
  XPosition = XPos;
  YPosition = YPosition;
}

void Cell::setState(State new_state) {
  state = new_state;
}

void Cell::setForm(char new_form) {
  form = new_form;
}

void Cell::setXPosition(int newXPos) {
  XPosition = newXPos;
}

void Cell::setYPosition(int newYPos) {
  YPosition = newYPos;
}

void Cell::setAliveNeighbors(int extAliveNeighbors) {
  aliveNeighbors = extAliveNeighbors;
}

int Cell::getXPosition() {
  return XPosition;
}

int Cell::getYPosition() {
  return YPosition;
}

State Cell::getState() {
  return state;
}

char Cell::getForm() {
  return form;
}

int Cell::getAliveNeighbors() {
  return aliveNeighbors;
}

void Cell::updateCell() {
  if(state.getValue() == 0 && getAliveNeighbors() == 3) {
    State currentState(1);
    state = currentState;
  } else if ( state.getValue() == 1 && (getAliveNeighbors() != 2 && getAliveNeighbors() != 3)) {
    State currentState(0);
    state = currentState;
  }
}

int Cell::neighbours(const Grid& gamegrid) {
  int auxAliveNeighbours = 0;
  if (gamegrid.getCell(XPosition - 1, YPosition - 1).getState().getValue() == 1) auxAliveNeighbours++;
  if (gamegrid.getCell(XPosition - 1, YPosition).getState().getValue() == 1) auxAliveNeighbours++;
  if (gamegrid.getCell(XPosition, YPosition - 1).getState().getValue() == 1) auxAliveNeighbours++;
  if (gamegrid.getCell(XPosition , YPosition + 1).getState().getValue() == 1) auxAliveNeighbours++;
  if (gamegrid.getCell(XPosition + 1, YPosition - 1).getState().getValue() == 1) auxAliveNeighbours++;
  if (gamegrid.getCell(XPosition + 1, YPosition).getState().getValue() == 1) auxAliveNeighbours++;
  if (gamegrid.getCell(XPosition + 1, YPosition + 1).getState().getValue() == 1) auxAliveNeighbours++;
  if (gamegrid.getCell(XPosition - 1, YPosition + 1).getState().getValue() == 1) auxAliveNeighbours++;
  return auxAliveNeighbours;
}

std::ostream&operator<<(std::ostream &os, Cell ext_cell) {
  if (ext_cell.getState().getValue() == 2) {
    std::cout << BLK << "▓" << NC;
  } else if (ext_cell.getState().getValue() == 1) {
    std::cout << GRN << "0" << NC;
  } else {
    std::cout << " ";
  }
  return os;
}
