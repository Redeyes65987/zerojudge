#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=1;i<s.length();i++){
        cout<<abs(s[i]-s[i-1]);
    }
    cout<<"\n";
    return 0;
}
