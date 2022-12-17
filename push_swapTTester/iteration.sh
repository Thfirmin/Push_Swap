#!/bin/bash

let STRING=$1

for (( i = 0; 1; i++))
do
	if [[ ${STRING:${i}:1} ]]
	then
		echo ${SRING:${i}:1}
	fi
done
