#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin >> a;
    string b = a;
    reverse(a.begin(), a.end());
    if(a == b) cout << "yes\n";
    else cout << "no\n";
}
