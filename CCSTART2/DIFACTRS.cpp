#include <iostream>
// #define get(a) int a; cin >> a;
#define println(a) cout << a << "\n";
#define print(a) cout << a << " ";
#include <vector>
#include <algorithm>
using namespace std;

void factors(int n) {
	vector<int> v;
	for (int i=1; i*i<=n; i++)
    {
        if (n%i == 0)
        {
            v.push_back(i);
            if (n/i != i) {
            	v.push_back(n/i);
            }
        }
    }
    sort(v.begin(), v.end());
    println(v.size());
    for (auto i = v.begin(); i != v.end(); ++i)
		print(*i);
	
}


int main() {
	int n; cin >> n;
	factors(n);
	
	return 0;
}