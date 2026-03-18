#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<pair<int, int>> X;
    for(int i=0; i<N; i++){
        int num;
        cin>>num;
        
        int aux=0;
        for(int j=0; j<X.size(); j++){
            if(num==X[j].first){
                X[j].second++;
                aux++;
            }
        }
        if(aux==0){
            X.push_back(make_pair(num, 1));
        }
    }
    sort(X.begin(), X.end());
    
    for(int i=0; i<X.size(); i++){
        cout<<X[i].first<<" aparece "<<X[i].second<<" vez(es)"<<endl;
    }

    return 0;
}