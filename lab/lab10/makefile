#make conversion

conversion: printArray.c conversion.c main.c initArray.c
	gcc -Wall printArray.c conversion.c main.c initArray.c -lm -o conversion

run: conversion
	./conversion

clean: conversion 
	rm conversion
