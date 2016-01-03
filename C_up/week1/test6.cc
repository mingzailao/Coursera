#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.get();
    char cell[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cin.get(cell[i][j]);
        }
        cin.get();
    }
    int days;
    cin>>days;
    int day=1;
    char tmp[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            tmp[i][j]=cell[i][j];
        }
    }
    while(day<days){
        day++;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(cell[i][j]=='@'){
                    if(i>0){
                        if(cell[i-1][j]=='.'){
                            tmp[i-1][j]='@';
                        }
                    }   
                    if(i<n-1){
                        if(cell[i+1][j]=='.'){
                            tmp[i+1][j]='@';
                        }
                    }
                    if(j>0){
                        if(cell[i][j-1]=='.'){
                            tmp[i][j-1]='@';
                        }
                    }
                    if(j<n-1){
                        if(cell[i][j+1]=='.'){
                            tmp[i][j+1]='@';
                        }
                    }
                }
            }   
        }
        for(int k=0;k<n;k++){
            for(int l=0;l<n;l++){
                cell[k][l]=tmp[k][l];
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(cell[i][j]=='@')
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}
