#include "number.h"
#include <iostream>
using namespace std;

RealNumber::RealNumber(double tem)
:a(tem)
{
}
RealNumber RealNumber::add(const RealNumber &other)
{
  RealNumber tem;
  tem.a=a+other.a;
  return tem;
}
RealNumber RealNumber::mul(const RealNumber &other)
{
  RealNumber tem;
  tem.a=a*other.a;
  return tem;
}
void RealNumber::print()
{
  cout << a<< endl;
}

IntegerNumber::IntegerNumber(int tem)
:a(tem)
{}
IntegerNumber IntegerNumber::add(const IntegerNumber &other)
{
 IntegerNumber tem;
 tem.a = a+other.a;
 return tem;
}

IntegerNumber IntegerNumber::mul(const IntegerNumber &other)
{
 IntegerNumber tem;
 tem.a =a*other.a;
 return tem;
} 

void IntegerNumber::print()
{
 cout << a<<endl;
}

ComplexNumber::ComplexNumber(double stem,double xvtem)
:s(stem),xv(xvtem)
{

}
ComplexNumber ComplexNumber::add(const ComplexNumber&other)
{
 ComplexNumber tem;
 tem.s=s+other.s;
 tem.xv=xv+other.xv;
 return tem;
}
ComplexNumber ComplexNumber::mul(const ComplexNumber&other)
{
 ComplexNumber tem;
 tem.s=s*other.s-xv*other.xv;
 tem.xv=xv*other.s+s*other.xv;
 return tem;
} 

void ComplexNumber::print()
{
 cout << s<<" + "<<xv<<"i"<<endl;
}
