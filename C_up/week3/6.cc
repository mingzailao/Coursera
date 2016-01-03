#include<iostream>
using namespace std;
int f(int m,int n){
    if(m<=1||n<=0){
        return 1;
    }
    if(n>m){
        return f(m,m);
    }
    else{
        return f(m,n-1)+f(m-n,n);
    }
}

int main(){
    int apples,plates;
    cin>>apples>>plates;
    cout<<f(apples,plates)<<endl;
    return 0;
}
