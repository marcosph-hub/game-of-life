#pragma once

#include <iostream>
#include <string>

#include "cell.h"

class Grid {
  private:
  Cell **gamegrid;
  int row;
  int col;

  public:
  Grid();
  Grid(int p_row, int p_col);
  void PrintGrid();
  void InitGrid();
};
