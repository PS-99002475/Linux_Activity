.PHONY:clean build run
NAME= test

INC=-Iinc

SRC= src/mystring.c\
src/myutils.c\
src/bitmask.c\
src/test.c

build:
	gcc $(SRC) $(INC) -o $(NAME).out

run:
	./$(NAME).out
clean:
	rm*.out
	
