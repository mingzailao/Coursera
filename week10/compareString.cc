#include<iostream>
#include<ctype.h>
#include<String>
using std::string;
int main(){
    string s1,s2;
    getline(std::cin,s1);
    getline(std::cin,s2);
    bool flag=false;
    for(decltype(s1.size()) index=0;index!=s1.size();index++){
        if(toupper(s1[index])!=toupper(s2[index])){
            flag=true;
        }
    }
    if(flag){
        if(s1>s2){
            std::cout<<">"<<std::endl;
        }
        else{
            std::cout<<"<"<<std::endl;
        }
    }
    else{
        std::cout<<"="<<std::endl;
    }
    return 0;
}

