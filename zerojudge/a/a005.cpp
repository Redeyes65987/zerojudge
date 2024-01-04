#include <bits/stdc++.h>
using namespace std;
int main(){
  int r;
  cin >> r;
  while(r--){
    int a, b, c, d, e;
    cin >> a >> b >> c >> d;
    if((b-a)==(c-b) && (c-b)==(d-c)) e=d+(d-c);
    else e = d*(d/c);
    cout << a << " " << b << " " << c << " " << d << " " << e << "\n";
  }
}
