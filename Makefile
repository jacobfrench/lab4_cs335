# cs335 lab1
# to compile your project, type make and press enter

all: lab41 lab42 lab43 lab44 lab45

lab41: lab41.cpp
	g++ lab41.cpp -Wall -o lab41
lab42: lab41.cpp
	g++ lab42.cpp -Wall -o lab42
lab43: lab41.cpp
	g++ lab43.cpp -Wall -o lab43
lab44: lab41.cpp
	g++ lab44.cpp -Wall -o lab44
lab45: lab41.cpp
	g++ lab45.cpp -Wall -o lab45
clean:
	rm -f *.o

