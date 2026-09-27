#include <bits/stdc++.h>
#include<iterator>
using namespace std;
 
 
 
void solve()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long t=stoll(s);
    long long sum=t;
    while (t/10!=0)
    {
        sum+=t/10;
        t=t/10;
    }
    cout << sum<<endl;
 
 
 
 
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
