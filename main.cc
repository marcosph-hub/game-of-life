#include <iostream>

#include "cell.h"
#include "grid.h"
//#include "state.h"

int main () {

  int option;
  int user_row;
  int user_col;

  do {
    std::cout << "\n\nWelcome to the Game Of Live by Conway.\nLet's begin.\n" << std::endl;
    std::cout << "Number of rows of the grid: ";
    std::cin >> user_row;
    std::cout << "Number of columns of the grid: ";
    std::cin >> user_col;
    std::cout << "Which fill method of the grid you prefer? " << std::endl;
    std::cout << "[1] - Random Fill." << std::endl;
    std::cout << "[2] - Fill by File." << std::endl;
    std::cout << "[3] - Manual Fill." << std::endl;
    std::cin >> option;

    switch(option) {
      case 1: {
                std::cout << "\nRandom Fill." << std::endl;
                Grid gamegrid(user_row, user_col);
                gamegrid.InitGrid();
                gamegrid.PrintGrid();
                break;
              }

      case 2: {
              std::cout << "\nFill by File." << std::endl;
              break;
              }

      case 3: {
              std::cout << "\nManual Fill." << std::endl;
              break;
              }   

      case 0: std::cout << "\nFinished Program." << std::endl;
              break;
        
      default:  std::cout << "\nInvalid Option." << std::endl;
                break;

    }
  } while (option != 0);

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
 
   /*
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
*/