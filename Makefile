all:
	gcc *.c *.h
clean:
	rm -f a.out &
	rm -f *.gch
