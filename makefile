
.PHONY:clean build run
# Output directory
BUILD = build
NAME= test

INC=-Iinc

SRC= src/mystring.c\
src/myutils.c\
src/bitmask.c\
src/test.c
all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out -lm
build1:
	gcc $(SRC) $(INC) -o $(NAME).out
	

run:
	./$(NAME).out
clean:
	rm*.out
$(BUILD):
	mkdir build	
