#include <iostream>
using namespace std;
#define get(a) int a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a;

unsigned int arr[10000];

int main() {
	get(t);
	while(--t>=0) {
		get(n);
		for (int i = 0; i < n; ++i) {
			scanf("%d", arr+i);
		}
		int temp = arr[0];
		int count=1;
		for (int i = 1; i < n; ++i) {
			temp = temp > arr[i] ? arr[i] : temp;
			if (temp==arr[i]) ++count;
		}
		println(count);
	}
	
	return 0;
}