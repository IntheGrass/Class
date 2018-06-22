#ifndef ABSTRACTNUMBER_H
#define ABSTRACTNUMBER_H
#include <iostream>
using namespace std;

class Number
{
 public:
 virtual void print(){}
 virtual Number add(const Number&)
{
 return *this;
}
 virtual Number mul(const Number&)
{
 return *this;
}
};
#endif

class RealNumber :public Number
{
 public:
 RealNumber(double =0.0);
 virtual RealNumber add(const RealNumber&);
 virtual RealNumber mul(const RealNumber&);
 virtual void print();
 private:
 double a;
};

class IntegerNumber:public RealNumber
{
 public:
 IntegerNumber(int =0);
 virtual IntegerNumber add(const IntegerNumber&);
 virtual IntegerNumber mul(const IntegerNumber&);
 virtual void print();
 private:
 int a;
};

class ComplexNumber: public Number
{
 public:
 ComplexNumber(double =0.0,double =0.0 );
 virtual ComplexNumber add (const ComplexNumber&);
 virtual ComplexNumber mul (const ComplexNumber&);
 virtual void print();
 private:
 double s;
 double xv;
};
