P3.out : Project3.o SetLimits.o LexicalAnalyzer.o SyntacticalAnalyzer.o CodeGenerator.o Object.o
	g++ -std=c++11  -g -o P3.out Project3.o SetLimits.o LexicalAnalyzer.o SyntacticalAnalyzer.o CodeGenerator.o Object.o

Project3.o : Project3.cpp SyntacticalAnalyzer.h
	g++ -g -c -std=c++11 Project3.cpp

SetLimits.o : SetLimits.cpp SetLimits.h
	g++ -g -c -std=c++11 SetLimits.cpp

LexicalAnalyzer.o : LexicalAnalyzer.cpp LexicalAnalyzer.h
	g++ -g -c -std=c++11 LexicalAnalyzer.cpp

Object.o : Object.cpp Object.h
	g++ -g -c -std=c++11 Object.cpp

CodeGenerator.o : CodeGenerator.cpp CodeGenerator.h LexicalAnalyzer.h Object.h
	g++ -g -c -std=c++11 CodeGenerator.cpp

SyntacticalAnalyzer.o : SyntacticalAnalyzer.cpp SyntacticalAnalyzer.h LexicalAnalyzer.h Object.h CodeGenerator.h
	g++ -g -c -std=c++11 SyntacticalAnalyzer.cpp

Test.x : Test.o Object.o
	g++ -std=c++11  -g -o Test.x Test.o

Test.o : Test.cpp Object.h
	g++ -g -c -std=c++11 Test.cpp

clean :
	rm -rf *.o P3.out *.gch *.lst *.p1 *.p2 *.dbg test.cpp

run :
	make clean
	make
	./P3.out ./test.ss

runTest :
	make Test.x
	./Test.x

submit : Project3.cpp LexicalAnalyzer.h LexicalAnalyzer.cpp SyntacticalAnalyzer.h SyntacticalAnalyzer.cpp makefile README.txt
	rm -rf Team4P3
	mkdir Team4P3
	cp Project3.cpp Team4P3
	cp LexicalAnalyzer.h Team4P3
	cp LexicalAnalyzer.cpp Team4P3
	cp SyntacticalAnalyzer.h Team4P3
	cp SyntacticalAnalyzer.cpp Team4P3
	cp makefile Team4P3
	cp README.txt Team4P3
	tar cfvz Team4P3.tgz Team4P3
	cp Team4P3.tgz ~tiawatts/cs460drop
