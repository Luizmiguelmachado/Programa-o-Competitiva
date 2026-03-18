#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> V;  
    
    for(int i=0; i<16; i++){
        int num;
        cin>>num;
        V.push_back(num);
    }
    
    int org=16;
    for(int j=1; j<=4; j++){
        org/=2;
        for(int i=0; i<org; i++){
            int num1=V[0];
            int num2=V[1];
            
            if(num1==1 || num2==1){
                V.push_back(1);
            }
            else if(num1==9 || num2==9){
                V.push_back(9);
            }
            else{
                V.push_back(num1);
            }
            
            if((num1==1 && num2==9) || (num2==1 && num1==9)){
                if(j==1) cout<<"oitavas"<<endl;
                else if(j==2) cout<<"quartas"<<endl;
                else if(j==3) cout<<"semifinal"<<endl;
                else cout<<"final"<<endl;
                return 0;
            }
            
            V.erase(V.begin());
            V.erase(V.begin());
        }
    }
}
