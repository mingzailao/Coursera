#include<iostream>
using namespace std;
int main(){
    int L,M;
    cin>>L>>M;
    int a[L+1];
    for(int i=0;i<L+1;i++){
        a[i]=1;
    }
    for(int j=0;j<M;j++){
        int left,right;
        cin>>left>>right;
        for(int i=left;i<=right;i++){
            a[i]=0;
        }
    }
    
    int count=0;
    for(int i=0;i<L+1;i++){
        if(a[i]){
            count++;
        }
    }
    cout<<count;
}
