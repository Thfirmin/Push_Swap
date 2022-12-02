#!/bin/bash

echo -n "Put some sequences: "
read ARGS

echo "Checker binary file name: "
read CHCK_NAME

PS_BIN=push_swap

if [[ !(-f ${PS_BIN}) ]]; then
	make
fi
if [[ -f ${PS_BIN} ]]; then
	echo "-----| Moves |-----"
	./${PS_BIN} ${ARGS}
	echo "-------------------"
	echo "Moves: $(./${PS_BIN} ${ARGS} | wc -l)"
	if [[ -f ${CHCK_NAME} ]];then
		if [[ $(echo $(./${CHCK_NAME} 0 2> /dev/null)) != "" ]];then
			echo "Solved: $(./${PS_BIN} ${ARGS} | ./${CHCK_NAME} ${ARGS})"
		fi
	fi
else
	echo "Something's got wrong"
	exit 2
fi
