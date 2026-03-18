#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
	int N;
	int H, C, L;
	while(cin>>N>>H>>C>>L){
    	double result =sqrt((pow(C/100.0, 2)+pow(H/100.0, 2)))*(N)*(L/100.0);
    	cout<<fixed <<setprecision(4)<<result<<endl;
	}
	return 0;
}
