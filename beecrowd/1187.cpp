#include <bits/stdc++.h>

using namespace std;

int main(){
    int tam=12;

    char O;
    cin>>O;
    double soma=0, cont=0;
    int ini=0, fim=11;
    for(int i=0; i<tam; i++){
        double num;
        for(int g=0; g<tam; g++){
            cin>>num;
            if(g<fim && g>ini && i>=0 && i<5){
                soma+=num;
                cont++;
            }
        }
        fim--;
        ini++;
    }

    if(O=='S')  printf("%.1f\n", soma);
    else printf("%.1f\n", soma/cont);

    return 0;
}