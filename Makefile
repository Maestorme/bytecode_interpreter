# Makefile for ECE 30862 Fall 2019 Interpreter Project

# Targets
	
interpreter:
	@g++ ./src/*.cpp ./src/bytecodes/*.cpp -o ./bin/interpreter
	
clean:
	@rm -f ./bin/*
	@touch ./bin/readme.md
