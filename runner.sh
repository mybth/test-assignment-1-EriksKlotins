#!/usr/bin/env bash

echo "Welcome to the runner!\n"

make main

for filename in ./tests/*.*; do
	
	echo "$filename"
	./main "$filename"
	tail output.txt


done