#include<iostream>
using namespace std;

bool detectfunction(int a[],int i){
    if(a[i]==i){
        return true;
    }
    else{
        return false;
    }
}
void getL(int a[],int L){
    for(int index=0;index<L;index++){
        cin>>a[index];
    }
}
void workfunction(int a[],int L){
    bool flag=false;
    for(int index=0;index<L;index++){
        if(detectfunction(a,index)){
            cout<<a[index];
            flag=true;
            break;
        }
    }
    if(!flag){
        cout<<"N";
    }
    
}


int main(){
    int L;
    cin>>L;
    int a[L];
    getL(a,L);
    workfunction(a,L);

}

