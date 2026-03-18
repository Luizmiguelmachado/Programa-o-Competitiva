#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, L, C;
    /*N==Número de palavras L==Linha por página && C==Caracter por linha*/
    while(cin>>N>>L>>C){
        vector<string> V(N);
        for(int i=0; i<N; i++){
            cin>>V[i];
        }
        int contli=0, contchar=0;
        for(int i=0; i<N; i++){
            int tamanho=V[i].length();
            
            if(contchar==0) contchar=tamanho;
            else{
                if(contchar+1+tamanho<=C){
                    contchar+=1+tamanho;
                }
                else{
                    contli++;
                    contchar=tamanho;
                }
            }
        }
        cout<<(contli/L)+1<<endl;
    }
    
    return 0;
}