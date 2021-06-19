#include <iostream>
using namespace std;
#define get(a) int a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a;


int main() {
	get(n);
	get(k);
	int x,ans=-1;

	while(n--)
	{
		cin >> x;
		if (x==k)
		{
			ans = 1;
		}
	}
	print(ans);
	
	return 0;
}