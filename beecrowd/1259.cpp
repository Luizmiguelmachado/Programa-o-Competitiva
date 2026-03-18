#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin>>N;
    vector<int> par;
    vector<int> impar;
    for(int i=0; i<N; i++){
        int num;
        cin>>num;
        if(num%2==0)    par.push_back(num);
        else    impar.push_back(num);
    }
    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end());
    for(int i=0; i<par.size(); i++){
        cout<<par[i]<<endl;
    }
    for(int i=impar.size()-1; i>=0; i--){
        cout<<impar[i]<<endl;
    }
    
    return 0;
}
