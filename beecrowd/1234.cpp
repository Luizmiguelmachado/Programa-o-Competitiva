#include <iostream>
#include <cctype>

using namespace std;

int main(){
    string frase;
    int maiusculo;
    while(getline(cin, frase)){
        maiusculo=0;
        for(int i=0; i<frase.length(); i++){
            if(!isalpha(frase[i]))   
                continue;

            if(maiusculo==0){   
                frase[i]=toupper(frase[i]);
                maiusculo=1;
            }
            else if(maiusculo==1){            
                frase[i]=tolower(frase[i]);
                maiusculo=0;
            }
        }
        cout<<frase<<endl;
    }


    return 0;
}