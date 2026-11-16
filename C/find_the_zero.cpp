// ربِّ زدني علماً
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
long long ask(long long a,long long b)
{
   cout<<"? "<<a<<" "<<b<< endl;
    long long r;
    cin>>r; return r;
}
 
void solve() {
    long long n;
    cin>>n;
    if (ask(1,2)){cout<<"! 1"<<endl;return;}
    if (ask(1,3)){cout<<"! 3"<<endl;return;}
    if (ask(2,3)){cout<<"! 2"<<endl;return;}
    long long x=4;
    while (x<=2*n-2 and !ask(x,x+1))
    {
        x+=2;
    }
    cout<<"! "<<x<<endl;
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
