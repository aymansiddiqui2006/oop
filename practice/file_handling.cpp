#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file;
    file.open("real_file.txt");
    file<<"hello world kaise ho how are you";
    file.close();

    ifstream filein;
    filein.open("real_file.txt");
    char c;
    
    while(!filein.eof()){
        cout<<c;
        c=filein.get();
    }
    file.close();

    
}