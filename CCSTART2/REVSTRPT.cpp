#include <iostream>
using namespace std;
#define get(a) int a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a;


int main() {
	get(n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = n-1; j > i; --j)
		{
			print(" ");
		}
		for (int j = 0; j <= i; ++j)
		{
			print("*");
		}

		print("\n");
	}
	
	return 0;
}