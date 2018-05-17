#!/bin/bash

#!!!PREREQUISITES!!
# 1)must have folder called 'tests' containing EVERYTHING downloaded from Tia's 'P2Tests' folder in the pickup
# 2)must have folder called 'input' containing ALL the .ss you would like to run on the program
# 3)must have empty folder called 'output'.
# 4) a makefile that contains the following;
    #   make script :
    # 	    make clean
    #  	    make
    #  	    ./TestScript.sh


# for each .ss file in the 'input' folder
for file in ./tests/*.ss
do
    # run the program with the file
    ./P3.out "$file"
done

#rm ./tests/*.dbg
#rm ./tests/*.p1
#rm ./tests/*.p2
#rm ./tests/*.lst

./tests/makefile

echo "test1:"
./tests/test1.x
echo

echo "test2:"
./tests/test2.x
echo

echo "test3:"
./tests/test3.x
echo

echo "test4:"
./tests/test4.x
echo

echo "test5:"
./tests/test5.x
echo

echo "test6:"
./tests/test6.x
echo

echo "test7:"
./tests/test7.x
echo

echo "test8:"
./tests/test8.x
echo

echo "shizenburger"

