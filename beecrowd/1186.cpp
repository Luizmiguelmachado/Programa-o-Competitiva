#include <iostream>
 
using namespace std;
 
int main() {
 
    char O;
    cin>>O;
    float M[12][12];
    for(int i=0; i<12; i++){
        for(int g=0; g<12; g++){
            cin>>M[i][g];
        }
    }
    int cont=11;
        float soma=0;
        int i, aux=11;
        while(aux!=0){
            i=aux;
            for(int g=11; g>=cont; g--){
                soma+=M[g][i];
                i++;
            }
            cont--;
            aux--;
        }
    if(O=='S'){
        cout << fixed;  
        cout.precision(1);
        cout<<soma<<endl;
    }
    if(O=='M'){
        cout << fixed;  
        cout.precision(1);
        soma=soma/66;
        cout<<soma<<endl;
    }
    return 0;
}