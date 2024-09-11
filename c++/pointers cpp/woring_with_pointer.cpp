#include<iostream>
int main (){
    int a=10;
    int *p;
     std::cout<<p<<"\n"; // print the address of pointer p 
     std::cout<<*p<<"\n";// Garbage value dur to no value assign to P
     p=&a;
    std::cout<<a<<"\n"; //Print the value of a which is 10
     std::cout<<&a<<"\n";//Print the adddress of a whic is also same as line 9
      std::cout<<p<<"\n";  //print same as line 8 
       std::cout<<(p+1)<<"\n"; // print the address of a+4 bytes 
        std::cout<<*(p+1)<<"\n"; // garabge value 
        return 0;
}