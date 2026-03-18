#include <iostream>
#include <string>

using namespace std;

int main()
{
    string N;
    cin>>N;
    while(N!="*"){
        int cont=0;
        for(int i=0; i<N.length(); i++){
            if(N[i]=='/'){
                double quant=0;
                for(int g=i+1; g<N.length() && N[g]!='/'; g++){
                    if(N[g]=='W'){
                        quant+=1;
                    }
                    else if(N[g]=='H'){
                        quant+=0.5;
                    }
                    else if(N[g]=='Q'){
                        quant+=0.25;
                    }
                    else if(N[g]=='E'){
                        quant+=0.125;
                    }
                    else if(N[g]=='S'){
                        quant+=0.0625;
                    }
                    else if(N[g]=='T'){
                        quant+=0.03125;
                    }
                    else if(N[g]=='X'){
                        quant+=0.015625;
                    }
                }
                if(quant==1) cont++;
            }
        }
        cout<<cont<<endl;
        cin>>N;
    }
    return 0;
}