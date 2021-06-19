#include <iostream>
using namespace std;
#define get(a) int a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a <<" ";


int main() {
	get(n);

	int it = 1;

	for (int N = 0; N < n/2; ++N) {
		for(int k = 0; k < 5; ++k) {
			print(it++);
		}
		cout << endl;
		it+=5;
		for(int k = 0; k < 5; ++k) {
			print(--it);
		}
		cout<< endl;
		it+=5;
	}
	if(n&1) for(int k = 0; k < 5; ++k) {
			print(it++);
		}
	
	return 0;
}