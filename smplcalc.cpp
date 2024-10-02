#include<iostream>
int main(){

float a,b;
int c;
std:: cout<<"ENTER THE FIRST NUMBER: ";
std:: cin>> a;
std:: cout<<"ENTER THE SECOND NUMBER: ";
std:: cin>> b;
std:: cout<<"CHOOSE AN OPERATOR \n" <<"1- ADDITION\n"<<"2- SUBTRACTION\n"<<"3- MULTIPLICATION\n"<<"4- DIVISION\n";
std:: cin>> c;
if(c==1){std::cout<<"SUM = " <<a+b;}
else if(c==2){std::cout<<"DIFFERENCE = "<< a-b;}
else if(c==3){std::cout<<"MULTIPLICATION = " <<a*b;}
else if(c==4){std::cout<<"DIVISION = "<< a/b;}
else{std::cout<<"INVALID INPUT"; }







    return 0;
}