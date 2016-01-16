#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
    vector<int> v(100);
    int i;
    for(i=0;i<v.size();i++){
        cout<<v[i];
    }
    vector<int>::const_iterator ii;
    for(ii=v.begin();ii!=v.end();ii++){
        cout<<*ii;
    }
    for(ii=v.begin();ii<v.end;ii++){
        cout<<*ii;
    }
    list<int> v;
    list<int>::const_iterator ii;
    for(ii=v.begin();ii!=v.end;++ii){
        cout<<*ii;
    }
}
