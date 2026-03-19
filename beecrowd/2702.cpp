#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int V1[3];
    int V2[3];
    for(int i=0; i<3; i++){
        cin>>V1[i];
    }
    for(int i=0; i<3; i++){
        cin>>V2[i];
    }
    int soma=0;
    for(int i=0; i<3; i++){
        if(V1[i]-V2[i]<0){
            soma+=(V2[i]-V1[i]);
        }
    }
    cout<<soma<<endl;
    return 0;
}