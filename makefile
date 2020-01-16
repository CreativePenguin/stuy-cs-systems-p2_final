

all:
	echo "oh no, it's the mafia"
	echo "time to use my PG-13 family friendly GUN"

clean:
	rm *.o *.out *.gch *~

memtest:
	valgrind --leak-check=yes ./program
