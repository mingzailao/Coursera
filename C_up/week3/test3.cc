#include<iostream>
#include<cstring>
using namespace std;

/*
union Node{
    bool isright;
    int place;
};
Node f(char a[],int s){
    Node result=new Node;
    if(strlen(a)==0){
        result.isright=true;
        result.place=0;
    }
    else{
        if(a[s]=='('){
            bool b=f(a,s+1).isright;
            int n=f(a,s+1).place;
            if(!b){
                result.isright=false;
            }
        }
    }
}
*/
int main(){
    char line[101];
    cin.getline(line,101);
    int i=0;
    char c=line[i];
    int len=strlen(line);
    while(i<len){
        if(line[i]!=c){
            for(int j=i;j>=0;j--){
                if(line[j]==c&&line[j]!='@')
                {
                     cout<<j<<" "<<i<<endl;
                     line[i]='@';
                     line[j]='@';
                     break;
                }
        
            }
        }
        i++;
    }
    return 0;

}
