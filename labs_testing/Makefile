CXXFLAGS=-std=c++11
pig.o: pig.cpp pig.h
	g++ $(CXXFLAGS) -c pig.cpp

tests: tests.o pig.o
	g++ -o tests tests.o pig.o
        
tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp

clean:
	rm -f pig.o tests.o