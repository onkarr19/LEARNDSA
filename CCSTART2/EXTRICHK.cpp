#include <iostream>
using namespace std;
#define get(a) int a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a;


int main() {
	get(a);
	get(b);
	get(c);

	if(a+b>c && b+c>a && a+c>b) {
		if(a==b && b==c) {print(1);}
		else if (a==b || b==c || a==c) {print(2);}
		else {print(3);}
	} else {print(-1);}
	
	return 0;
}