//Write a program that asks the user to enter a temperature in Celsius and then display it in Fahrenheit.
#include <iostream>
using namespace std;
int main () 
{int TempCelsius,TempFarenheit;
cout<<"Enter Temperature in Celcius: ";
cin>>TempCelsius;
TempFarenheit=(9/5*TempCelsius)+32;
cout<<endl<<"Temperature in Fahrenheit: "<<TempFarenheit;
}

