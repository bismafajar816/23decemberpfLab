#include <iostream>
using namespace std;
main ()
{
int number;	
int a;
int b;
int c;
int d;
int modulus;
cout <<"enter 4 digit number: ";
cin >> number;
a=number/1000;
b=number/100%10;
c=number/10%10;
d=number%10 ;
modulus = a+b+c+d;
cout <<"modulus: " <<modulus;













}
