#include "grid.h"

Grid::Grid() {
  row = 28;
  col = 48;
  gamegrid = new Cell *[row];
  for (int row_iterator = 0; row_iterator < row; ++row_iterator){
    gamegrid[row_iterator] =  new Cell [col];
  }
}

Grid::Grid(int p_row, int p_col) {
  row =  p_row;
  col = p_col;
  gamegrid = new Cell *[row];
  for (int row_iterator = 0; row_iterator < row; ++row_iterator){
    gamegrid[row_iterator] =  new Cell [col];
  }
}

void Grid::InitGrid() {
  for (int row_iterator = 0; row_iterator < row; ++row_iterator) {
    for (int col_iterator = 0; col_iterator < col; ++col_iterator) {
      if((col_iterator == 0) || (col_iterator == col - 1)) {
        gamegrid[row_iterator][col_iterator].setForm('|') ;
      } else if ((row_iterator == 0) && (col_iterator != 0)) {
          gamegrid[row_iterator][col_iterator].setForm('_');
      } else if ((row_iterator == row - 1) && (col_iterator != col -1 )) {
          gamegrid[row_iterator][col_iterator].setForm('_');
      } else {
          gamegrid[row_iterator][col_iterator].setForm('o');
      }
    }
  }
} 

void Grid::PrintGrid() {
  for (int row_iterator = 0; row_iterator < row; ++row_iterator) {
    for (int col_iterator = 0; col_iterator < col; ++col_iterator) {
      std::cout << gamegrid[row_iterator][col_iterator];
    }
    std::cout << std::endl;
  }

}