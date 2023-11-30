#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        if(n==0) break;
        for(int i=0;i<n;i++){
            if(i%7){
                cout<<i<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
