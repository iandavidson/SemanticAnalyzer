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
	void WriteCode (int tabs, string code);
	void StartFunction(string functionName);
	void FunctionParameters(string functionName);
	void EndFunction();
	void ParameterEnd();
	void AddComma();
	void NewLineFunction();

    private:
	LexicalAnalyzer * lex;
	ofstream cpp;





	/*
	other data structures
	container for prototypes


	*/
};

#endif
