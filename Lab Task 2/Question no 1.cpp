//Write a program that asks the user to enter two integers and then displays their sum, difference, product, and quotient.
#include <iostream>
using namespace std;
int main () 
{int num1;
int num2;
int add=0;
int sub=0;
int multiply=0;
int divide=0;
cout<<"enter first number: ";
cin>>num1;
cout<<endl<<"enter second number:";
cin>>num2;
add=num1+num2;
sub=num1-num2;
multiply=num1*num2;
divide=num1/num2;
cout<<endl<<"Add is:"<<add;
cout<<endl<<"Subtract is:"<<sub;
cout<<endl<<"Multiply is:"<<multiply;
cout<<endl<<"divide is:"<<divide;

}

