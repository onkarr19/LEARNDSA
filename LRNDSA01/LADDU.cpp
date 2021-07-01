# include <iostream>
using namespace std;

#define get(a) int a; cin >> a;
#define println(a) cout << a << '\n';
#define print(a) cout << a;


int test() {
    int score = 0;
    int c; string cn; cin >>c>> cn;
    string a; int b;
    ++c;
    while(--c) {
        cin >> a;
        if (a=="CONTEST_WON") {cin >> b; score+=300; if (b<=20) {score += 20-b;}}
        else if (a=="TOP_CONTRIBUTOR") {score += 300;}
        else if (a=="BUG_FOUND") {cin >> b; score += b;}
        else if (a=="CONTEST_HOSTED") {score += 50;}
    }

    return cn=="INDIAN" ? score/200 : score/400;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    get(t);
    ++t;
    while (--t)
    {
       println(test());
    }
    
    return 0;
}