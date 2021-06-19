#include <iostream>
using namespace std;
#define get(a) int a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a;


int main() {
	get(a);
	get(b);
	get(c);

	print(((a+b+c == 180 && a>0 && b>0 && c>0) ? "YES" : "NO"));
	
	return 0;
}