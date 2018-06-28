CXX = g++
CXXFLAGS = -Wall -std=c++11
CC = g++

WD = $(CURDIR)
EXE = $(WD)/fd
SYS = /usr/local/bin/fd

all: main.o factorial.o
	$(CXX) $(CXXFLAGS) main.o factorial.o -o fd

main.o: main.cpp

factorial.o: factorial.cpp factorial.hpp

clean: uninstall
	rm -f *.o
	rm -f fd

install: all
	sudo ln -s $(EXE) $(SYS)
	sudo chown colbertz $(SYS)

uninstall:
	sudo rm -f $(SYS)
