#!/bin/bash

read sec

for ((i=1; i<=10; i++))
do
	echo $sec
	sec=$[sec+1]

done

echo "END"


