#include <iostream>

#include "cell.h"
#include "grid.h"

int main () {

  int option;
  int user_row;
  int user_col;
  int aliveCells;
  int generations;

  do {
    std::cout << "\n\nWelcome to the Game Of Live by Conway.\nLet's begin.\n" << std::endl;
    std::cout << "Number of rows of the grid: ";
    std::cin >> user_row;
    std::cout << "Number of columns of the grid: ";
    std::cin >> user_col;
    std::cout << "Number of alive cells: ";
    std::cin >> aliveCells;
    std::cout << "Number of turns: ";
    std::cin >> generations;
    std::cout << "Which fill method of the grid you prefer? " << std::endl;
    std::cout << "[1] - Random Fill." << std::endl;
    std::cout << "[2] - Fill by File." << std::endl;
    std::cout << "[3] - Manual Fill." << std::endl;
    std::cin >> option;

    switch(option) {
      case 1: {
                Grid gamegrid(user_row, user_col,generations);
                gamegrid.InitGrid();
                gamegrid.RandomGrid(aliveCells);
                gamegrid.theLifeGame();
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
