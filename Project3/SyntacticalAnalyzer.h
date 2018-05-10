/*******************************************************************************
* Assignment: Project 2 - Syntactic Analyzer for Scheme to C++ Translator      *
* Author:                                                                      *
* Date: Spring 2018                                                            *
* File: SyntacticalAnalyzer.h                                                  *
*                                                                              *
* Description: This file contains the                                          *
*******************************************************************************/

#ifndef SYN_H
#define SYN_H

#include <iostream>
#include <fstream>
#include <set>
#include "LexicalAnalyzer.h"
#include "CodeGenerator.h"

using namespace std;


/*******************************************************************************
* Type: token_type                                                             *
*                                                                              *
* Description: The token_type enumerated type is used to identify the tokens   *
*              associated with the lexemes scanned from an input file.         *
*******************************************************************************/

/*
enum token_type {NONE = -1, LAMBDA, IDENT_T, NUMLIT_T, STRLIT_T, CONS_T, IF_T,
		 COND_T, DISPLAY_T, NEWLINE_T, LISTOP_T, AND_T, OR_T, NOT_T,
		 DEFINE_T, NUMBERP_T, SYMBOLP_T, LISTP_T, ZEROP_T, NULLP_T,
		 STRINGP_T, MODULO_T, ELSE_T, PLUS_T, MINUS_T, DIV_T, MULT_T,
		 EQUALTO_T, GT_T, LT_T, GTE_T, LTE_T, LPAREN_T, RPAREN_T, QUOTE_T,
		 ERROR_T, EOF_T, MAX_TOKENS};


*/

class SyntacticalAnalyzer 
{
    public:
	SyntacticalAnalyzer (char * filename);
	~SyntacticalAnalyzer ();
    private:
	LexicalAnalyzer * lex;
	ofstream p2file;
	token_type token;
	int Program ();
	int define();
	int more_defines();
	int stmt_list();
	int stmt();
	int literal();
	int quoted_lit();
	int more_tokens();
	int param_list();
	int else_part();
	int stmt_pair();
	int stmt_pair_body();
	int action();
	int any_other_token();

	CodeGen * codeGen;

	bool firstParam;

};
	
#endif
