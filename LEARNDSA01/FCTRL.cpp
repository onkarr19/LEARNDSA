#include <iostream>
using namespace std;
#define get(a) int a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a;

long long fact(int n) {
	long long ans = 0;
    for (int i=5; n/i >= 1; i*=5) ans += n/i;
    return ans;
}

int main() {
	get(t);
	while(--t>=0) {
		get(n);
		println(fact(n));
	}
	
	return 0;
}