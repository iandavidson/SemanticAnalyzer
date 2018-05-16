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

for p3file in ./tests/*.cpp
do
    name=${p3file%.*}
    varx=".x"
    xname=$name$varx
    varcpp=".cpp"
    cppname=$name$varcpp
    varo=".o"
    oname=$name$varo
    g++ "$cppname" Object.cpp Object.h
    ./tests/a.out




done


echo "shizenburger"

