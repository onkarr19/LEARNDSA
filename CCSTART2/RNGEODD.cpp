#include <iostream>
using namespace std;
#define get(a) int a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a << " ";


int main() {
	get(l);
	get(r);
	if (l%2==0)
	{
		++l;
	}

	while (l<=r)
	{
		print(l);
		l+=2;
	}
	
	return 0;
}