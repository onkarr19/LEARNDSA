#include <iostream>
using namespace std;
#define get(a) int a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a;


int main() {
	get(n);
	if (n%5==0)
	{
		if (n%11==0)
		{
			println("BOTH");
		} else println("ONE");
	} else if (n%11==0) {
		println("ONE");
	} else println("NONE");
	
	return 0;
}