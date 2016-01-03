#include<iostream>
using namespace std;
int q(int n){
    if(n==1){
        return 2;
    }
    else{
        return n+q(n-1);
    }
}
int main(){
    cout<<q(10)<<endl;
}
