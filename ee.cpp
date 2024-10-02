 #include <iostream>
 #include <cmath>
 //Simple multimeter//
 int main(){

float c, r, t;


std:: cout<< "Enter Current value: ";
std:: cin>> c;
std:: cout<< "Enter Resistance Value: ";
std:: cin>> r;
std:: cout<< "Enter Time Value: " ;
std:: cin>> t;

float Voltage = c*r;
float Power = c*c*r;
float Workdone = c*c*r*t;

std:: cout<<"Voltage = " <<Voltage <<"volts\n"  <<"Power = " <<Power <<"watt\n" <<"Workdone = "<<Workdone <<"joules";

    return 0;
 }