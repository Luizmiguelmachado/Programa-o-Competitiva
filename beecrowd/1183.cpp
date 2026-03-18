#include <bits/stdc++.h>

using namespace std;

int main(){
    float M[12][12];
    char C;
    cin>>C;

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++) cin>>M[i][j];
    }
    int num=1;
    float soma=0;
    if(C=='S'){
        for(int i=0; i<12; i++){
            for(int j=num; j<12; j++){
                soma+=M[i][j];
            }
            num++;
        }
        printf("%.1f\n", soma);
    }
    else{
        int cont=0;
        for(int i=0; i<12; i++){
            for(int j=num; j<12; j++){
                soma+=M[i][j];
                cont++;
            }
            num++;
        }
        soma=soma/cont;
        printf("%.1f\n", soma);
    }

    return 0;
}