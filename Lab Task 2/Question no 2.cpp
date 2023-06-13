//Write a program that asks the user to enter the radius of a circle and then displays its diameter, circumference, and area.
#include <iostream>
using namespace std;
int main () 
{int radius;
float pi;
int area=0;
int circumference=0;
int diameter=0;
cout<<"Enter radius:";
cin>>radius;
cout<<"Enter the value pi:";
cin>>pi;
area=pi*radius*radius;
circumference= 2*pi*radius;
diameter=2*radius;
cout<<endl<<"Area is: "<<area;
cout<<endl<<"Circumference is: "<<circumference;
cout<<endl<<"Diameter is: "<<diameter;

}

