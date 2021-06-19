#include <iostream>
using namespace std;
#define get(a) int a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a << " ";


int main() {
	get(n);
	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for (; n; --n)
	{
		print(arr[n-1]);
	}
	
	return 0;
}