// Autogenerated Scheme to C++ Code
// File: ./tests/test3.cpp

#include <iostream>
#include "Object.h"
using namespace std;


Object listop_ex1()
{
Object __RetVal;
__RetVal = cons ( listop ("car", Object ("(a b c )")), listop ("cdr", Object ("(d e f )")) );
return __RetVal;
}

Object listop_ex2()
{
Object __RetVal;
__RetVal = cons ( listop ("cadr", Object ("(a b c )")), listop ("cddr", Object ("(d e f )")) );
return __RetVal;
}


int main()
{
Object __RetVal;
cout << listop_ex1() ;
cout << endl;
cout << listop_ex2() ;
cout << endl;
return 0;
}