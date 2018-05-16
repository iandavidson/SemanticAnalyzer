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

	void startIf();
	void endIf();

	void WriteCode (string code);
	void startObjectInt(int num);
	void startObjectStr(string str);
	void startObjectFlo(double num);

	void endObject();

	void returnedIdentifier(string returnedId);


private:
	LexicalAnalyzer * lex;
	ofstream cpp;





	/*
	other data structures
	container for prototypes


	*/
};

#endif
