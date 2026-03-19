#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    double A, B, C, ATR, AC, AT, AQ, AR;
    cin>>A>>B>>C;
    
    ATR=(A*C)/2;
    AC=3.14159*(C*C);
    AT=((A+B)*C)/2;
    AQ=B*B;
    AR=A*B;
    
    cout<<setprecision(3);
    
    cout<<"TRIANGULO: "<<fixed<<ATR<<endl;
    cout<<"CIRCULO: "<<fixed<<AC<<endl;
    cout<<"TRAPEZIO: "<<fixed<<AT<<endl;
    cout<<"QUADRADO: "<<fixed<<AQ<<endl;
    cout<<"RETANGULO: "<<fixed<<AR<<endl;

    return 0;
}