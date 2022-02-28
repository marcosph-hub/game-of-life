main: main.cc
	g++ -std=c++14 -g -Wall -o game_of_life main.cc grid.cc cell.cc state.cc
grid.o: grid.cc
	g++ -std=c++14 -g -Wall -o grid grid.cc
cell.o: cell.cc	
	g++ -std=c++14 -g -Wall -o cell cell.cc
state.o: state.cc
	g++ -std=c++14 -g -Wall -o state state.cc
clean: 
	rm -f game_of_life
