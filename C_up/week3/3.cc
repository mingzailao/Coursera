#include<iostream>
using namespace std;

int f(int n){
    if(n==1||n==2){
        return 1;
    }
    else{
        return f(n-1)+f(n-2);
    }
}
int main(){
    cout<<f(10)<<endl;
}
