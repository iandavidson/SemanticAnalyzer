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

CodeGenerator.o : CodeGenerator.cpp CodeGenerator.h LexicalAnalyzer.h
	g++ -g -c -std=c++11 CodeGenerator.cpp

SyntacticalAnalyzer.o : SyntacticalAnalyzer.cpp SyntacticalAnalyzer.h LexicalAnalyzer.h Object.h CodeGenerator.h
	g++ -g -c -std=c++11 SyntacticalAnalyzer.cpp

clean :
	rm -rf *.o P3.out *.gch

run :
	make clean
	make
	./P3.out ./test.ss


submit : Project3.cpp LexicalAnalyzer.h LexicalAnalyzer.cpp SyntacticalAnalyzer.h SyntacticalAnalyzer.cpp makefile README.txt
	rm -rf TeamTP2
	mkdir TeamTP2
	cp Project3.cpp TeamTP2
	cp LexicalAnalyzer.h TeamTP2
	cp LexicalAnalyzer.cpp TeamTP2
	cp SyntacticalAnalyzer.h TeamTP2
	cp SyntacticalAnalyzer.cpp TeamTP2
	cp makefile TeamTP2
	cp README.txt TeamTP2
	tar cfvz TeamTP2.tgz TeamTP2
	cp TeamTP2.tgz ~tiawatts/cs460drop
