counter: main.o counter.o
	g++ main.o counter.o -o counter

main.o: main.cpp
	g++ -c main.cpp

counter.o: counter.cpp
	g++ -c counter.cpp

clean:
	rm *.o counter
