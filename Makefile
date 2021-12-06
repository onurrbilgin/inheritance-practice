target:	run

run:	practice.o main.o
	g++ --std=c++11 practice.o main.o -o run

practice.o:	practice.cpp
	g++ --std=c++11 -c practice.cpp

main.o:	main.cpp
	g++ --std=c++11 -c main.cpp

clean:
	rm main.o practice.o run