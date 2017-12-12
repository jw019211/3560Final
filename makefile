CC=g++
CFLAGS=-g -c
#compile with warnings and debug

count: main.o
	$(CC) -o game main.o

main.o: main.cc
	$(CC) $(CFLAGS) main.cc


#remove .o files and executable
clean:
	-rm *.o
	-rm count
	-rm .class
	-rm -rf html
	-rm -rf latex

doc: 
	@doxygen Doxyfile
