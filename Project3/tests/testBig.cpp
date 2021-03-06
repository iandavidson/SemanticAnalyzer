// Autogenerated Scheme to C++ Code
// File: ./tests/testBig.cpp

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

Object arithmetic1(Object a, Object b, Object c, Object d, Object e)
{
Object __RetVal;
(__RetVal = ((a + b + c) * (b - d)) + ((c * d * e) - (a / e)));
return __RetVal;
}

Object square(Object n)
{
Object __RetVal;
if (numberp(n))
{
(__RetVal = n * n);
}else
{
__RetVal = Object ("invalid_parameter");
}
return __RetVal;
}

Object babylonian(Object s, Object x)
{
Object __RetVal;
if (((square(x) - s) < Object(0.0000000001)))
{
__RetVal = Object(x);
}else
{
babylonian(__RetVal = s, ((x + (s / x)) / Object(2.0)));
}
return __RetVal;
}

Object sqrt(Object v)
{
Object __RetVal;
if ((v < Object(4)))
{
babylonian(__RetVal = v, v);
}else
{
babylonian(__RetVal = v, (v / Object(2.0)));
}
return __RetVal;
}

Object predicates(Object x)
{
Object __RetVal;
if (stringp(x))
{
__RetVal = Object("Is a string");
}else
{
if (nullp(x))
{
__RetVal = Object("Is null");
}else
{
if (symbolp(x))
{
__RetVal = Object("Is a symbol");
}else
{
if (listp(x))
{
__RetVal = Object("Is a list");
}else
{
if (zerop(x))
{
__RetVal = Object("Is zero");
}else
{
if (numberp(x))
{
__RetVal = Object("Is a number");
}else
{
__RetVal = Object("Is a USO");
}
}
}
}
}
}
return __RetVal;
}

Object iftest(Object a, Object b, Object c)
{
Object __RetVal;
if (((a == b) && (b == c)))
{
__RetVal = Object ("all_the_same");
}else
{
if (!(((a > b) || (b > c))))
{
__RetVal = Object ("in_ascending_order");
}else
{
if (!((a < c)))
{
__RetVal = Object ("in_decscending_order");
}else
{
__RetVal = Object ("three_values_passed");
}
}
}
return __RetVal;
}

Object insert_last(Object ls, Object v)
{
Object __RetVal;
if (listp(ls))
{
if (nullp(ls))
{
__RetVal = cons ( v, Object ("()"));
}else
{
__RetVal = cons ( listop ("car", ls), insert_last(listop ("cdr", ls), v));
}
}else
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
}else
{
insert_last(__RetVal = list_reverse(listop ("cdr", ls)), listop ("car", ls));
}
}else
{
__RetVal = Object ("list_reverse_requires_a_list_argument");
}
return __RetVal;
}

Object listop_ex1()
{
Object __RetVal;
__RetVal = cons ( listop ("car", Object ("(a b c )")), listop ("cdr", Object ("(d e f )")));
return __RetVal;
}

Object listop_ex2()
{
Object __RetVal;
__RetVal = cons ( listop ("cadr", Object ("(a b c )")), listop ("cddr", Object ("(d e f )")));
return __RetVal;
}

Object cond_ex_1(Object choice, Object value)
{
Object __RetVal;
if ((choice == Object(1))value(choice == Object(2))(value * value)(choice == Object(3))if ((value == Object(0)))
{
__RetVal = Object("Division by 0 not defined");
}else
{
__RetVal = (Object(1) / value);
}
Object(0))
{
return __RetVal;
}

Object reciprocal(Object n)
{
Object __RetVal;
if ((numberp(n) && !((n == Object(0)))))
{
__RetVal = (Object(1) / n);
}else
{
__RetVal = Object ("invalid_parameter");
}
return __RetVal;
}

Object cond_ex_2(Object choice, Object value)
{
Object __RetVal;
if ((choice == Object(1))value(choice == Object(2))square(value)(choice == Object(3))reciprocal(value)Object(0))
{
return __RetVal;
}


int main()
{
Object __RetVal;
cout << ((Object(1.2) * (Object(2) - (Object(1) / Object(3.1)))) + Object(-8.7)) ;
cout << endl;
cout << (((Object(2) / Object(3.2)) + (Object(2.3) / Object(9))) / ((Object(5) / Object(1.4)) - (Object(2) / Object(3.5)))) ;
cout << endl;
cout << (Object(1) + (Object(1) / (Object(2) + (Object(1) / (Object(1) + (Object(1) / Object(2.6))))))) ;
cout << endl;
cout << (Object(1) * Object(-2) * Object(3) * Object(-2) * Object(5) * Object(-6) * Object(7)) ;
cout << endl;
cout << ((Object(10) % Object(3)) * (Object(3) % Object(7))) ;
cout << endl;
cout << abs1(Object(5)) ;
cout << endl;
cout << abs2(Object(-5)) ;
cout << endl;
cout << arithmetic1(Object(1), Object(2), Object(4), Object(8), Object(16)) ;
cout << endl;
cout << square(Object(25)) ;
cout << endl;
cout << sqrt(Object(4)) ;
cout << endl;
cout << listop_ex1() ;
cout << endl;
cout << listop_ex2() ;
cout << endl;
cout << list_reverse(Object ("(indentifier numeric literal   cout << 	cout << endl;
  && || !      NULL %  + - / * == > < >= <= anything 1 1.01 "HelloWorld" )")) ;
cout << endl;
cout << predicates(Object(0)) ;
cout << endl;
cout << predicates((Object(5) + Object(6))) ;
cout << endl;
cout << predicates(Object ("hello")) ;
cout << endl;
cout << predicates(Object ("(a b c )")) ;
cout << endl;
cout << predicates(Object ("()")) ;
cout << endl;
cout << predicates(Object("hello world")) ;
cout << endl;
cout << iftest(Object(10), Object(15), Object(20)) ;
cout << endl;
cout << cond_ex_1(Object(1), Object(5.0)) ;
cout << endl;
cout << cond_ex_2(Object(1), Object(5.0)) ;
cout << endl;
cout << cons ( Object ("a"), Object ("b")) ;
cout << endl;
return 0;
}
