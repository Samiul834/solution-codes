#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	string s;
	cin >> n >> s;
	int position = n - 1;
	for (int i = 0; i < n - 1;i++) {
		if (s[i] > s[i + 1]) {
			position = i;
			break;
		}
	}
	cout << s.substr(0, position) + s.substr(position + 1) << endl;
	return 0;
}