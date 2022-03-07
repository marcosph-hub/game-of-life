#pragma once

#include <iostream>
#include <cassert>



class State {
  private:
  int value;

  public:
  State();
  State(int new_value);
  
  void setValue(int new_value);
  int getValue ();
  friend std::ostream& operator<<(std::ostream &os, State ext_state);
};