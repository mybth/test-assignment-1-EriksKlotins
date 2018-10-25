#!/bin/bash

# echo "Welcome to the runner!"



make main

passed=0
failed=0
for filename in ./tests/*.in; do
	
	# echo "$filename"

	expected=(`cat "${filename%.*}.out"`)
	received=(`./main "$filename"`)

	r="$filename\t\tExpected: $expected,\treceived: $received"

	if [ "$expected" = "$received" ]; then
		echo -e "$r\tPass"
		passed=$(($passed+1))
	else
		echo -e "$r\tFail"
		failed=$(($failed+1))
	fi
done


echo "$failed tests failed"
echo "$passed tests passed"

if [ "$failed" = 0 ]; then
   exit 0
else

   exit 1
fi

	# echo $(basename "$filename")

	# echo "${filename%.*}.out"
	
	


	# tail output.txt


