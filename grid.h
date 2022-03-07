#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>

#include "cell.h"

class Grid {
  private:
  Cell **gamegrid;
  int row;
  int col;
  int generations;
  int currentGeneration;

  public:
  Grid();
  Grid(int extRow, int extCol, int extGenerations);

  int getRow();
  int getColumn();
  int getGenerations();
  int getCurrentGeneration();

  void setCurrentGeneration(int newGeneration);

  void nextGeneration();
  void theLifeGame();
  void PrintGrid();
  void InitGrid();
  void RandomGrid(int aliveCells);
  Cell& getCell(int extRow, int extCol) const;
};
