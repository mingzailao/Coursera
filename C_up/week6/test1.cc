#include<iostream>
#include<string>
#include<cstring>
#include<stdio.h>
using namespace std;
struct Node{
    int index;
    double value;
};
int main(){
    int num;
    double limit;
    cin>>num>>limit;
    struct Node data[num];
    int count=0;
    for(int i=0;i<num;i++){
        int index;
        double value;
        cin>>index>>value;
        data[i].index=index;
        data[i].value=value;

    }
    for(int i=1;i<num;i++){
        int flag=1;
        for(int j=0;j<num-i;j++){
            if(data[j].value<data[j+1].value){
                flag=0;
                struct Node temp;
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;    
            }
        }
        if(flag){
            break;
        }
    }
    for(int i=0;i<num;i++){
        if(data[i].value>limit){
            printf("%03d %.1f\n",data[i].index,data[i].value);
        }
    }


}
