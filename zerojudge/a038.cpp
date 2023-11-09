#include <bits/stdc++.h>
using namespace std;
int main(){
  string x;
  cin >> x;
  reverse(x.begin(),x.end());
  stringstream n(x);
  int y;
  n >> y;
  cout << y << "\n";
  return 0;
}
