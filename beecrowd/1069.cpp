#include <iostream>
#include <string> 
using namespace std;
 
int main() {
 
    string frase;
    int resp;
    cin>>resp;
    int cont[resp];
    for(int i=0; i<resp; i++){
        cin>>frase;
        cont[i]=0;
        for(int g=0; g<frase.length(); g++){
            if(frase[g]=='<'){
                for(int j=g; j<frase.length(); j++){
                    if(frase[j]=='>'){
                        cont[i]++;
                        frase[j]='.';
                        break;
                    }
                }
            }
        }
    }
    for(int i=0; i<resp; i++){
        cout<<cont[i]<<endl;
    }
 
    return 0;
}