#include <iostream>
using namespace std;
#define get(a) long a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a;


int main() {
	get(n);

	long odd = (long)(n*n);
	long even = (long)(n*(n+1));

	cout << odd << " " << even;
	return 0;
}