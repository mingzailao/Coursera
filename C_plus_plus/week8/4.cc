#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    int array[10]={10,20,30,40};
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    vector<int>::iterator p;
    p=find(v.begin(),v.end(),3);
    if(p!=v.end()){
        cout<<*p<<endl;
    }
    p=find(v.begin(),v.end(),9);
    if(p==v.end())
    {
        cout<<"notFound"<<endl;
    }
    p=find(v.begin()+1,v.end()-2,1);
    if(p!=v.end()){
        cout<<*p<<endl;
    }
    int * pp=find(array,array+4,20);
    cout<<*pp<<endl;
}
















