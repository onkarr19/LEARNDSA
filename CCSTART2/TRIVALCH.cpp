#include <iostream>
#include <algorithm>
using namespace std;
#define get(a) int a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a;


int main() {
	int arr[3];
	for (int i = 0; i < 3; ++i)
	{
		cin >> arr[i];
	}

	sort(arr,arr+3);
	print((arr[0]+arr[1] >= arr[2] ? "YES" : "NO"));

	
	return 0;
}