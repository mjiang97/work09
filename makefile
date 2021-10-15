all: work09.o
	gcc -o program work09.c

work09.o:
	gcc -c work09.c

run:
	./program

clean:
	rm *.o