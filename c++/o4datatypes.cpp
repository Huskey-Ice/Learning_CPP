#include<iostream>
int main(){
    float a=1.123456789;// This gives output 1.12346 because float can store upto 6-7 decimales 
    std :: cout<<a<<"\n";
double b=1.123456789123456789123456789;
std :: cout<<b<<"\n";
// scientific notations to decimals
double x=12e8;//basically it represent 12*10^12
std:: cout<<x;
    return 0;
}