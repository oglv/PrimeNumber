#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(){
    int maxN = 2020000,enter=1;
    vector <bool> n;
    n.resize(maxN,1);

ofstream write_file;
string fileName = "prime.txt";
write_file.open(fileName,ios::out);

    for(int i = 2; i < maxN; i++){
        if(n[i]){
            enter++;
            write_file << i;
            if(enter<=169){
                write_file << "\t\t\t";
            }
            else if(enter%15!=0){
                write_file << "\t\t";
            }
            if(enter%15==0){
                write_file << endl;
            }
        }
        for(int j = i; j <  maxN; j += i){
            n[j]=0;
        }
    }
    return 0;
}