#!/bin/bash

declare -A mp
RESFILE="countSolve.txt"

load(){	
	page=($(echo $1))
	link="https://www.e-olymp.com/ru/problems?page=$page"	
	html=$(curl -s "$link")
	array=($(echo $html \
		| grep -Po '<a href="/ru/problems/([0-9]*)">[a-zA-Z0-9 а-яА-Я_ё\-\-?+*&*!#$@%()№:=]*</a></div><div class="eo-problem-row__complexity"><div>([0-9]*) / ([0-9]*)</div>' \
		| sed -r '/^<a href="\/ru\/problems\/([0-9]*)">.*<\/a><\/div><div class="eo-problem-row__complexity"><div>([0-9]*) \/ ([0-9]*)<\/div>$/ s//\1 \2/' ))

	for ((i=0; i<${#array[@]}; i+=2)); do
	  echo "${array[i]} ${array[i+1]}" >> $RESFILE  
	done
}

for ((j=0; j<308; j+=1)); do
  echo "load page $j"
  load $j  
done

exit 0
