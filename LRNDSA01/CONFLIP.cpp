# include <iostream>
using namespace std;

#define get(a) int a; cin >> a;
#define println(a) cout << a << '\n';
#define print(a) cout << a;


int test() {
    int a,b,c;
    cin >> a >> b >> c;

    if(!(b&1) || a==c) return b>>1;
    return (1 + (b>>1));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    get(t);
    while(t--) {
        get(n);
        while (n--) println(test());
    }

    return 0;
}