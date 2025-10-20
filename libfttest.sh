#!/bin/bash

version=1.0
current=$(pwd)

echo "[ start libft_tester ]"

echo "please enter your libft path:  [exit/e -> exit shell.]"
read LIBFT_PATH

if [[ "$LIBFT_PATH" == "exit" || "$LIBFT_PATH" == "e" ]]; then
	return
fi

echo
LIBFT_PATH="${LIBFT_PATH/#\~/$HOME}"
echo "Your libft path is: $LIBFT_PATH"
if [[ ! -d "$LIBFT_PATH" ]]; then
    echo "Directory not found. "
	echo
	echo "[ libft_tester finished ]"
    return
fi

echo
echo "check latest version..."
cd $LIBFT_PATH && cd ../__libft_tester
git pull
echo
cat .version.txt
echo
echo

cd ../$LIBFT_PATH
echo "=== run test ===>"
echo "## make re"
make re

echo
echo "## do test"
gcc ../__libft_tester/.dummyfunc.c -c
ar rcs .libdummy.a .dummyfunc.o 
cc -Wall -Werror -Wextra -g -I. ../__libft_tester/.testmain.c -L. -lft .libdummy.a
rm .dummyfunc.o .libdummy.a

./a.out 2> .err.txt

cd $current

echo
echo "#"
echo "# - <no function> is invalid function name or non-existent function" 
echo "#"
echo
echo "[ libft_tester finished ]  otsukare sama desu!! :D"