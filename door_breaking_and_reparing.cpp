#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
	cin >> n >> x >> y;
	int door = 0;
	for (int i = 0; i < n; ++i) {
		int health;
		cin >> health;
		if (health <= x) {
			++door;
		}
	}
	
	if (x > y) {
		cout << n << "\n";
	} else {
		cout << (door + 1) / 2 << "\n";
	}
	
	return 0;
}