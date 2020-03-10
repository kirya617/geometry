Geometry: main.o func.o
	gcc -Wall -o Geometry main.o func.o

main.o: main.c 
	gcc -c main.c 

func.o: func.c
	gcc -c func.c

