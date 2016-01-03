#include<iostream>
using namespace std;
int main(){
        char line[500];
        cin.getline(line,500);
        int length=0;
        int place=0;
        int now=-1;
        int maxcount=0;
        int count=0;
    while(line[now]!='.'){
                now++;
        if(line[now]==' '){
            if(count>maxcount){
                                maxcount=count;
                                place=now-1;
                            
            }
                        count=0;

                    
        }
        else if(line[now]=='.'){
            if(count>maxcount){
                                maxcount=count;
                                place=now-1;
                            
            }
                    
        }
        else{
                        count++;
                    
        }

               
            
    }
    for(int i=place-maxcount+1;i<=place;i++){
                cout<<line[i];
            
    }

}
