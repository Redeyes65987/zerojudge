#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	while(cin>>n){
		t=((n+1)*((n*n)-n+6))/6;
		cout<<t<<"\n";
	}
	return 0;
}
