// Autogenerated Scheme to C++ Code
// File: ./tests/test8.cpp

#include <iostream>
#include "Object.h"
using namespace std;


Object insert_last(Object ls, Object v)
{
Object __RetVal;
if (listp(ls))
{
if (nullp(ls))
{
__RetVal = cons ( v), Object ("()")) );
}
else
{
__RetVal = cons ( listop ("car", ls), insert_last(listop ("cdr", ls, v)) );
}
}
else
{
__RetVal = Object ("first_argument_of_insert_last_must_be_a_list");
}
return __RetVal;
}

Object list_reverse(Object ls)
{
Object __RetVal;
if (listp(ls))
{
if (nullp(ls))
{
__RetVal = Object ("()");
}
else
{
insert_last(__RetVal = list_reverse(listop ("cdr", ls), listop ("car", ls);
}
}
else
{
__RetVal = Object ("list_reverse_requires_a_list_argument");
}
return __RetVal;
}


int main()
{
Object __RetVal;
cout << list_reverse(Object ("(indentifier numeric literal   cout << 	cout << endl;
  && || !      NULL %  + - / * == > < >= <= anything 1 1.01 "HelloWorld" )")) ;
cout << endl;
cout << cons ( Object ("a")), Object ("b")) ) ;
cout << endl;
return 0;
}