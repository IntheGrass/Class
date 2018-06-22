#include "number.h"
#include <iostream>
using namespace std;

int main()
{
 RealNumber rtext1(5.0);
 RealNumber rtext2(4.0);
 rtext1.add(rtext2).print();
 rtext1.mul(rtext2).print();
 IntegerNumber Itext1(5);
 IntegerNumber Itext2(4);
 Itext1.add(Itext2).print();
 Itext1.mul(Itext2).print();
 ComplexNumber Ctext1(1.0,2.0);
 ComplexNumber Ctext2(1.0,2.0);
 Ctext1.add(Ctext2).print();
 Ctext1.mul(Ctext2).print();
 Number* text1;
 Number* text2;
 text1 = &rtext1;
 text2 = &rtext2;
 text1->add(*text2).print(); 
 return 0;
}
