#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin>>N;
	string V[N];

	for(int i=0; i<N; i++) {
		string S;
		cin>>S;
		if(S.length()==3){
			if((S[0]=='O' && S[1]=='B')){
			    V[i]="OBI";
			}
			else if(S[0]=='U' && S[1]=='R'){
			    V[i]="URI";
			}
			else V[i]=S;
	    }
	    else{
	        V[i]=S;
	    }
	}
	for(int i=0; i<N; i++){
	   if (i > 0) cout << " ";
	    cout<<V[i];
	}
	cout<<endl;

	return 0;
}