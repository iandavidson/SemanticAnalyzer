#ifndef CG_H
#define CG_H

#include <iostream>
#include <fstream>
#include "LexicalAnalyzer.h"
#include "Object.h"
#include <string>

using namespace std;

class CodeGen
{
    public:
	CodeGen (string filename, LexicalAnalyzer * L);
	~CodeGen ();

	void StartFunction(string functionName, bool inMain);
	void FunctionParameters(string functionName);
	void ParameterEnd();
	void EndFunction(bool inMain);

	void AddComma();
	void NewLineFunction();

	void startCondition();
	void endCondition();

	void WriteCode (string code);


private:
	LexicalAnalyzer * lex;
	ofstream cpp;





	/*
	other data structures
	container for prototypes


	*/
};

#endif
