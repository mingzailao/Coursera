#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    vector<int>::const_iterator i;
    for(i=v.begin();i!=v.end();++i){
        cout<<*i<<",";
    }
    cout<<endl;
    vector<int>::reverse_iterator r;
    for(r=v.rbegin();r!=v.rend();r++){
        cout<<*r<<",";
    }
    cout<<endl;
    for(vector<int>::iterator i=v.begin();i!=v.end();i++){
        *i=100;
    }
    for(vector<int>::iterator i=v.begin();i!=v.end();i++){
        cout<<*i<<",";
    }
    cout<<endl;
    return 0;
}




