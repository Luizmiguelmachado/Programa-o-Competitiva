#include <iostream>

using namespace std;

int main() {
    int A, B, C, MaiorAB;
    cin>>A>>B>>C;
    
    MaiorAB =(A+B+abs(A-B))/2;
    MaiorAB=(C+MaiorAB+abs(MaiorAB-C))/2;
    cout<<MaiorAB<<" eh o maior"<<endl;
    
    return 0;

}