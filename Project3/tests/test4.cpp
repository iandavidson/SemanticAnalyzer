// Autogenerated Scheme to C++ Code
// File: ./tests/test4.cpp

#include <iostream>
#include "Object.h"
using namespace std;


Object abs1(Object v)
{
Object __RetVal;
if ((v > Object(0)))
{
__RetVal = Object(v);
}else
{
__RetVal = (Object(0) - v);
}
return __RetVal;
}

Object abs2(Object v)
{
Object __RetVal;
if (numberp(v))
{
if ((v > Object(0)))
{
__RetVal = Object(v);
}else
{
__RetVal = (Object(0) - v);
}
}else
{
__RetVal = Object ("NotNumeric");
}
return __RetVal;
}


int main()
{
Object __RetVal;
cout << abs1(Object(-5)) ;
cout << endl;
cout << abs1(Object(5)) ;
cout << endl;
cout << abs2(Object(-5)) ;
cout << endl;
cout << abs2(Object(5)) ;
cout << endl;
cout << abs2(Object ("x")) ;
cout << endl;
return 0;
}
