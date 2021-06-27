#include <iostream>
#include <algorithm>
using namespace std;
#define get(a) int a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a;


int main() {
	get(t);
	string s,ans;
	int n,i;
	while(--t>=0) {
		cin >> s;
		string a,b;

		for (i = 0; i< s.length()/2; ++i) a += s[i];
		if (s.length()&1) i+=1;
		for (;s[i]; ++i) b += s[i];

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		ans = "YES";

		for (i = 0; a[i]; ++i) {
			if (a[i]!=b[i]) {
				ans = "NO";
				break;
			}
		}
		println(ans);

	}
	return 0;
}