#include <bits/stdc++.h>

using namespace std;

int main()
{
    float V[12][12];
    char resp;
    cin>>resp;
    
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++) cin>>V[i][j];
    }
    
    float soma=0.0;
    int aux=1, cont=0;;
    for(int i=1; i<12; i++){
        for(int j=0; j<aux; j++){ 
            soma+=V[i][j];
            cont++;
        }
        aux++;
    }
    
    if(resp=='S')   printf("%.1f", soma);
    else    printf("%.1f\n", soma/cont);
    return 0;
}