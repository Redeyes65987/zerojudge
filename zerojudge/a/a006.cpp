#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int j=b*b-(4*a*c);
    if(j<0){ 
        printf("No real root\n");
        exit(0);
    }
    int x1=(-b + sqrt(j))/(2*a);
    int x2=(-b - sqrt(j))/(2*a);
    if(x1==x2) cout<<"Two same roots x="<<x1<<"\n";
    else if(x1>x2) cout<<"Two different roots x1="<<x1<<" , x2="<<x2<<"\n";
    else cout<<"Two different roots x1="<<x2<<" , x2="<<x2<<"\n";
    return 0;
}
