#include <iostream>
using namespace std;
#define get(a) int a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a;


int main() {
	get(a);
	if (a%5 == 0 || a%6 == 0)
	{
		print("YES");
	}
	else print("NO");
	
	return 0;
}