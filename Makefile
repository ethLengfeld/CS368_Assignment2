# Ethan Lengfeld
# 9074020836
CXX=g++
CXXFLAGS = -Wall
EXE = DemoBookDB

all: demo.o BookDB.o
	$(CXX) $(CXXFLAGS) -o $(EXE) demo.o BookDB.o

BookDB.o: BookDB.cpp BookDB.h
	$(CXX) $(CXXFLAGS) -c BookDB.cpp

demo.o: demo.cpp BookDB.h
	$(CXX) $(CXXFLAGS) -c demo.cpp

clean:
	-rm BookDB.o
	-rm demo.o
	-rm DemoBookDB
