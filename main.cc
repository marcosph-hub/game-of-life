#include <iostream>

#include "cell.h"
#include "grid.h"
//#include "state.h"

int main () {
  int alive = 1;
  //int dead = 0;
  Grid gamegrid;
  gamegrid.InitGrid();
  gamegrid.PrintGrid();
  State  st1;
  State st2(alive);
  Cell c1;
  Cell c2(st2);
  //c2.getState()
  //std::cout << "Printing Cells State : " << st1.getValue() << "\n" << st2.getValue() << std::endl;
  std::cout << "Printing Cells:\n" << c1 << "\n" << c2 << std::endl;


}

  /**
  int st = 1;
  Cell a_cell;
  Cell b_cell(st);
  std::cout << "Printing Cells:\n" << a_cell.getState() << "\n" << b_cell.getState() << std::endl;
  int ast = 1;
  a_cell.setState(ast);
  std::cout << "Printing Cells:\n" << a_cell.getState() << "\n" << b_cell.getState() << std::endl;
  **/
