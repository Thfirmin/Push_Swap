#!/bin/bash

ARGS=$(cat data.db)

let ARG

echo "ARGS = ${ARGS}"

for arg in ${ARGS};do
	for (( i = 0; 1; i ++)); do
		if [[ ${arg:${i}:1} ]]; then
			echo "letter[${i}]: ${arg:${i}:1}"
		else
			break
		fi
	done
	echo "new arg"
done
