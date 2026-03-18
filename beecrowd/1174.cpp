#include <bits/stdc++.h>

using namespace std;

int main()
{
    float V[100];
    for(int i=0; i<100; i++){
        cin>>V[i];
    }
    for(int i=0; i<100; i++){
        if(V[i]<=10.0)    printf("A[%i] = %.1f\n", i, V[i]);
    }
    return 0;
}
