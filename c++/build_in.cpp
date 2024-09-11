#include<iostream>
int c = 40;
int main(){
    int a=10;
    int b=20;
    int c=a+b;
std:: cout<<"The sum in local c is "<<c<<"\n"<<"The sum global C is "<<::c; // to run global varriable put ::
// @@@@@@@@@@@@@@@@@@  Buildin Data Types   @@@@@@@@@@@@@@@@@@@@@
float f=3.14f;
long double d=3.14l;
std::cout<<"The size of 3.14 is"<<sizeof(3.14)<<"\n"; 
std::cout<<"The size of 3.14f is"<<sizeof(3.14f)<<"\n";
std::cout<<"The size of 3.14d is"<<sizeof(3.14l)<<"\n";
return 0;
} 