#include<iostream>
using namespace std;


void f(int n){
    if(n==1){
        cout<<"End";
    }
    else if(n%2==1){
        cout<<n<<"*3+1="<<n*3+1<<endl;
        f(n*3+1);
    }
    else{
        cout<<n<<"/2="<<n/2<<endl;
        f(n/2);
    }
}
int main(){
    int num;
    cin>>num;
    f(num);
}
