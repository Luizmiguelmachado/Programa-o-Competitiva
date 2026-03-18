#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;

struct Renas{
    string nome;
    int peso;
    int idade;
    double h;
};

bool compare(Renas x, Renas y){
    if(x.peso>y.peso){
        return true;
    }
    if(x.peso==y.peso){
        if(x.idade<y.idade){
            return true;
        }
        if(x.idade==y.idade){
            if(x.h<y.h){
                return true;
            }
            if(x.h==y.h){
                if(x.nome.size()<y.nome.size()){
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

int main() {
    int A, N, K;
    cin>>A;
    for(int i=0; i<A; i++){
        cin>>N>>K;
        vector<Renas>rena;
        for(int g=0; g<N; g++){
            Renas R;
            cin>>R.nome>>R.peso>>R.idade>>R.h;
            rena.push_back(R);
        }
        sort(rena.begin(), rena.end(), compare);
        cout<<"CENARIO {"<<i+1<<"}"<<endl;
        for(int g=0; g<K; g++){
            cout<<g+1<<" - "<<rena[g].nome<<endl;
        }
    }
    return 0;
}