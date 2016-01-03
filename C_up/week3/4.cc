#include<iostream>
using namespace std;
//jingzhi zhuanhuan //
void convert(int x){
    if(x/2!=0){
        convert(x/2);
        cout<<x%2;
    }
    else{
        cout<<x%2;
    }
}


int main(){
    convert(10);
}
