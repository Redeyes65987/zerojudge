#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, b, n;
	while(scanf("%d %d %d", &a, &b, &n) == 3) {
		printf("%d.", a/b), a %= b;
		while(n--)
			a *= 10, printf("%c", a/b+'0'),	a %= b;
		puts("");
	} 
	return 0;
}
