#include <iostream>
#include <algorithm>
using namespace std;

long long arr[500000], n, profit, maxm,i;

int main() {
	scanf("%lld", &n);
	for (i = 0; i < n; ++i) 
		scanf("%lld", arr+i);
	sort(arr,arr+n);
	for (i = 0; i < n; ++i) {
		profit = (n-i) * arr[i];
		if (profit>maxm) maxm = profit;
	}
	printf("%lld",maxm);
	return 0;
}