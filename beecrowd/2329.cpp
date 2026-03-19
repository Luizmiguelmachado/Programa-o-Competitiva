#include <iostream>
#include <vector>

using namespace std;

int N, K;
vector<int> V(10000);

int tam(int x){
    int soma=0;
    for(int i=1; i<=K; i++){
        soma+=(V[i]/x);
    }
    return soma;
}

int busca(){
    int ini=0, fim=10000;
	int resp; 

	while(ini<=fim){
        int media=(ini+fim)/2;
        
        if(tam(media)>=N){
            resp=media;
            ini=media+1;
        }
        else
            fim=media-1;

    }

	return resp;
}


int main()
{
    cin>>N>>K;

    for(int i=1; i<=K; i++){
        cin>>V[i];
    }

    cout<<busca()<<endl;
    return 0;
}