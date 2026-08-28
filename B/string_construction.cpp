#include <bits/stdc++.h>
#include <string>
using namespace std;

void addr(string &c, long long val)
{ c.push_back('0' + val); }

void addl(string &c, long long val)
{ c.insert(c.begin(), '0' + val); }

void solve()
{
    long long n;
    cin>> n;
    long long k;
    cin>>k;
    if (k==0)
    {string s;
        long long t=0;
        for (int i=0;i<n;i++)
        {
            addr(s,t);
            t=1-t;}
        cout<<s<<endl;
    }
    else if (n-k==1)cout<<-1<<endl;
    else{string s;
        for (int i=0;i<(int)(k/2);i++)
        {addr(s,0);}
        addr(s,0);
        for (int i=0;i<k-(int)(k/2);i++)
        {addr(s,1);
        }
        addr(s,1);
        long long t=0;
        for (int i=k+2;i<n;i++)
        {
            addr(s,t);
            t=1-t;}
        cout<<s<<endl;}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
