#include <iostream>
using namespace std;
#define get(a) int a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a;


int main() {
	get(n);
	while(n!=42) {
		println(n);
		cin >> n;
	}
	return 0;
}