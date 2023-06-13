
//Write a program that asks the user to enter two numbers, and then swaps their values and displays them.
#include <iostream>
using namespace std;
int main () {
int num1;
int num2;
int num3;
num1=0;
num2=0;
num3=0;
cout<<"Enter first number: ";
cin>>num1;
cout<<"Enter second number: ";
cin>>num2;
cout<<"Enter third number: ";
cin>>num3;
num3=num1;
num1=num2;
num2=num3;
cout<<endl<<"num1: "<<num1;
cout<<endl<<"num2: "<<num2;
}

