#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class CStudent{
public:
    char szName[20];
    int nScore;
};
//fstream outFile("Clients.dat",ios::out|ios::binary);

//ofstream fout;
//fout.open("test.out",ios::out|ios::binary)
//
int main(){
    CStudent s;
    ofstream outFile("../week7/student.dat",ios::out|ios::binary);
    while(cin>>s.szName>>s.nScore){
        if(strcmp(s.szName,"exit")==0){
            break;
        }
        outFile.write((char *) &s,sizeof(s));
    }
    outFile.close();
    return 0;
}
