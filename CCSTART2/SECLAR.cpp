#include <iostream>
#include <algorithm>
using namespace std;
#define get(a) int a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a;


int main() {
	int arr[3],x;
	for (int i = 0; i < 3; ++i)
	{
		cin >> arr[i];
	}
	sort(arr, arr+3);
	println(arr[1]);
	
	return 0;
}