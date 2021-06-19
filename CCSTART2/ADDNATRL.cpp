#include <iostream>
using namespace std;
#define get(a) long a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a;


int main() {
	get(n);

	long ans = (long)(n*(n+1))/2;
	print(ans);
	
	return 0;
}