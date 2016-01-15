#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char * argv[]){
    if(argc!=3){
        cout<<"File Name missing!"<<endl;
        return 0;
    }
    ifstream inFile(argv[1],ios::binary|ios::in);
    if(!inFile){
        cout<<"source file open error."<<endl;
        return 0;
    }
    ofstream outFile(argv[2],ios::binary|ios::out);
    if(!outFile){
        cout<<"New file open error."<<endl;
        inFile.close();
        return 0;
    }
    char c;
    while(inFile.get(c)){
        outFile.put(c);
    }
    outFile.close();
    inFile.close();
    return 0;
}
