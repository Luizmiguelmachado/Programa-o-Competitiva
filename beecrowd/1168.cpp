#include <iostream>
#include <string> 
 
using namespace std;
 
int main() {
 
    int N;
    cin>>N;
    string num;
    int resp[N];
    for(int i=0; i<N; i++){
        cin>>num;
        resp[i]=0;
        for(int g=0; g<num.length(); g++){
            if(num[g]=='1')
            resp[i]+=2;
            
            else if(num[g]=='2' || num[g]=='3' || num[g]=='5')
            resp[i]+=5;
            
            else if(num[g]=='4')
            resp[i]+=4;
            
            else if(num[g]=='6' || num[g]=='9' || num[g]=='0')
            resp[i]+=6;
            
            else if(num[g]=='7')
            resp[i]+=3;
            
            else if(num[g]=='8')
            resp[i]+=7;
        }
    }
    for(int i=0; i<N; i++){
        cout<<resp[i]<<" leds"<<endl;
    }
    return 0;
}