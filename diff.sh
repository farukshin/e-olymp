#!/bin/bash

first=$1
second=$2

declare -A mp
declare -A ans
declare -A cnt

array=($(cat countSolve.txt ))
for ((i=0; i<${#array[@]}; i+=2)); do
  cnt["${array[i]}"]=${array[i+1]}  
done

link="https://www.e-olymp.com/ru/users/$first/punchcard"
html=$(curl -s -k "$link")
array1=($(echo $html \
	| grep -Po '<a title="([a-zA-Z0-9 а-яА-Я_ё\-\-?+*&*!#$@%()№:=]*), 100%" href="/ru/problems/[0-9]*" class='  \
	| sed -r '/^<a title=".*, 100%" href="\/ru\/problems\/([0-9]*).*$/ s//\1/' \
	| awk '{print $0;}' ))
	
link="https://www.e-olymp.com/ru/users/$second/punchcard"
html=$(curl -s -k "$link")
array2=($(echo $html \
	| grep -Po '<a title="([a-zA-Z0-9 а-яА-Я_ё\-\-?+*&*!#$@%()№:=]*), 100%" href="/ru/problems/[0-9]*" class='  \
	| sed -r '/^<a title=".*, 100%" href="\/ru\/problems\/([0-9]*).*$/ s//\1/' \
	| awk '{print $0;}' ))	

for item  in ${array2[*]}
do
	mp[$item]=1;
done
for item  in ${array1[*]}
do
	if [[ mp[$item] -eq 1 ]]
	then
		mp[$item]=0	
	fi	
done

for key in "${!mp[@]}"; do
    if [[ ${mp[$key]} -eq 1 ]]
	then
		ans[$key]=${cnt[$key]}		
	fi
done

for key in "${!ans[@]}"; do
    echo "https://www.e-olymp.com/ru/problems/${key} - ${ans[$key]}"
done |
sort -rn -k3

echo "diff size = ${#ans[@]}"

exit 0