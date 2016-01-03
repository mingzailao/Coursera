#include<iostream>
using namespace std;
//describe the pointer;

int main(){
    int c=76; //define a (variable)[int] c;
    int *pointer;//define a  (pointer variable) pointer ;in C++11 and after use "nullptr" 
    pointer=&c;//make (pointer variable)  pointer  ->  (variable) c
    cout<<*pointer<<endl;
    int *pointer2=&c;

}
