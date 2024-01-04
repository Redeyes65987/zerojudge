#include<bits/stdc++.h>
using namespace std;
int main(){
	float a, b, c, d, e, f, x, y;
	cin >> a >> b >> c >> d >> e >> f;
	x=(c*e-f*b)/(a*e-d*b);
	y=(a*f-d*c)/(a*e-d*b);
	if(a*e-d*b==0 && a*f-d*c==0 && c*e-f*b==0){
		cout << "Too many";
	}
	else if(a*e-d*b==0 && a*f-d*c!=0 && c*e-f*b!=0){
		cout<< "No answer";
	}
	else{
		cout << "x=" << fixed << setprecision(2) << x;
		cout << "\n";
		cout << "y=" << fixed << setprecision(2) << y;
	}
	return 0;
}
