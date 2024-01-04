#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(0<=n && n<=10){
		n=n*6;
	}
	else if(11<=n && n<=20){
		n=(n-10)*2+60;
	}
	else if(20<n && n<=40){
		n=(n-20)+80;
	}
	else if(40<n){
		n=100;
	}
	cout << n;
	
	return 0;
}
