#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int main(){
    int n, m;
    while(cin >> n >> m) {
        for(int i = 0;i < n;i++) {
	        for(int j = 0;j < m;j++) {
                cin >> a[i][j];
            }
	    }
	    for(int i = 0;i < m;i++) {
            for(int j = 0;j < n;j++) {
                cout << a[j][i] << " \n"[j == n-1];
	        }
	    }
    }
}
