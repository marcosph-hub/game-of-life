#include "state.h"

State::State() {
  value = 0;
}

State::State(int new_value) {
  assert((new_value >= 0 && new_value < 2) && "ERROR: Invalid State state value. Type 0 for dead, 1 for alive");
  value = new_value;
}

void State::setValue(int new_value) {
  assert((new_value >= 0 && new_value < 2) && "ERROR: Invalid State state value. Type 0 for dead, 1 for alive");
  value = new_value;
}

int State::getValue() {
  return value;
}

std::ostream& operator<<(std::ostream &os, State ext_state) {
  os << ext_state.getValue();
  return os;
}