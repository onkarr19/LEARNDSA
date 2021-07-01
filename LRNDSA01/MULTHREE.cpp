# include <iostream>
using namespace std;

typedef long lli;

#define get(a) lli a; cin >> a;
#define println(a) cout << a << '\n';
#define print(a) cout << a;


string test() {
    get(a); get(b); get(c);
    lli ans, sum, p;
    lli prev = b+c;
    ans = prev;
    sum = (2*prev)%10 + (4*prev)%10 + (6*prev)%10 + (8*prev)%10;
    
    a -= 2;
    if (a > 0)
    {
        a--; 
        ans += prev%10;
    }
    ans += a/4*sum;
    a %= 4;
    p=2;
    
    for (lli i=0; i<a; i++) {
        ans += (p*prev)%10;
        p = (p*2)%10;
    }
    
    return (ans % 3) ? "NO" : "YES";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    get(t);
    while(t--) println(test());

    return 0;
}