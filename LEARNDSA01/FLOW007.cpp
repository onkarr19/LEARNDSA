#include <iostream>
using namespace std;
#define get(a) int a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a;


int main() {
	get(n);
	int a,b;
	while(--n>=0) {
		cin >> a;
		b=0;
		while(a>0) {
			b = b*10 + a%10;
			a = a/10;
		}
		println(b);
	}
	return 0;
}