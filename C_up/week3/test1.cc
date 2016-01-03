#include<iostream>
#include<cstring>
using namespace std;
void Reverse(char a[],int place){
    char c;
    c=a[place];
    if(c!=' '&&place!=strlen(a)-1){
        Reverse(a,place+1);
        cout<<c;
    }
    else if(place==strlen(a)-1){
        cout<<c;
    }
    
}
int main(){
    char line[501];
    cin.getline(line,501);
    for(int i=0;line[i]!='\0';i++){
        if(line[i]!=' '){
            Reverse(line,i);
            while(line[i]!=' '&&i<strlen(line)){
                i++;
            };
            i--;
        }
        else{
            cout<<line[i];
        }
    }
    cout<<endl;
    return 0;
}
