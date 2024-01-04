#include <bits/stdc++.h>
using namespace std;
bool temp[20000005] = {};
vector<long long int>prime;
int main(){
	fill(temp, temp + 20000000, true);
	for (unsigned long long int i = 2; i < 20000000; i++)
		if (temp[i]) {
			prime.push_back(i);
			for (unsigned long long int j = i * i; j < 20000000; j += i) {
				temp[j] = false;
			}
		}
	unsigned long long int in1;
	while (cin >> in1) {
		unsigned long long int ans = 0, temp_value = in1;
		bool find = false;

		for (unsigned long long int i = 0; i != prime.size(); i++) {
			while (in1%prime[i] == 0) {
				find = true;
				in1 /= prime[i];
				ans += prime[i];
			}
			if (in1 < prime[i])
				break;
		}
		if (find)
			cout << ans << "\n";
		else
			cout << temp_value << "\n";
	}
}
