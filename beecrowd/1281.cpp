#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin>>N;

    while (N--) {
        int M;
        cin>>M;

        map<string, double> tabela;
        for (int i=0; i<M; i++) {
            string nome;
            double preco;
            cin>>nome>>preco;
            tabela[nome]=preco;
        }

        int P;
        cin>>P;

        double total = 0.0;
        for(int i=0; i<P; i++){
            string nome;
            int qtd;
            cin>>nome>>qtd;

            if(tabela.count(nome)){
                total+=tabela[nome]*qtd;
            }
        }
        
        cout<<fixed<<setprecision(2);
        
        cout<<"R$ "<<total<<endl;
    }

    return 0;
}
