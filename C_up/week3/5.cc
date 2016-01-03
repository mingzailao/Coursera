#include<iostream>
using namespace std;
void move(int n,char start,char tmp,char end){
    if(n==1){
        cout<<"move one dish from "<<start<<" to "<<end<<endl;
    }
    else{
        move(n-1,start,end,tmp);
        cout<<"move one dish from "<<start<<" to "<<end<<endl;
        move(n-1,tmp,start,end);
    }
}
int main(){
    move(4,'A','B','C');
    return 0;
}
