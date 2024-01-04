#include <bits/stdc++.h>
using namespace std;
int eng_to_num(char c) {
  int res = 0;
  if('A' <= c && c <= 'H') res = c-'A'+10;
  else if(c == 'I') res = 34;
  else if('J' <= c && c <= 'N') res = c-'J'+18;
  else if(c == 'O') res = 35;
  else if('P' <= c && c <= 'V') res = c-'P'+23;
  else if(c == 'W') res = 32;
  else if(c == 'X') res = 30;
  else if(c == 'Y') res = 31;
  else if(c == 'Z') res = 33;
  return res;
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  int step1 = eng_to_num(s[0]);
  int step2 = step1 % 10 * 9 + step1 / 10;
  int step3 = 0;
  int now = 8;
  for(int i = 1;i < s.size() - 1;i++) {
    step3 += (int)(s[i] - '0') * now;
    now --;
  }
  int step4 = step2 + step3 + (s.back() - '0');
  if(step4 % 10 == 0) cout << "real\n";
  else cout << "fake\n";
}
