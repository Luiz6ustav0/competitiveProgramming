CC=clang++
FILE=workingOn.cpp
INCLUDE=

FLAGS=-fsanitize=address,undefined -O1 -fno-omit-frame-pointer -g -Wall -Wshadow -std=c++17 -Wno-unused-result 
FLAGS1=-Wno-sign-compare -Wno-char-subscripts

build: main 
	@echo "Compiled"

main: $(FILE)
	@$(CC) $(FLAGS) $(FLAGS1) $^ $(INCLUDE) -o main.out

clean:
	@rm *.out
	@echo "Cleaned up successfully :)"

run:
	@./main.out