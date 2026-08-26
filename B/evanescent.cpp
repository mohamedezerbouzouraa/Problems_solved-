#include <bits/stdc++.h>
#include <string>
using namespace std;


long long moda(const string &v,long long p)
{
    string ch;
    if (p<v.size())
    {
        ch=v.substr(0,p)+v.substr(p+1,v.size()-p-1);
    }
    else{ch=v;}

        long long e=1;
        for (int i=1;i<ch.size();i++)
        {if (ch[i]!=ch[i-1]) {e++;}
        }

    return e;
}

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    long long p=1;
    long long pn=-2,pideal=-1;
    while (p<n-1)
    {
        if (a[p-1]==a[p+1] and a[p]!=a[p+1] ){pideal=p;break;}
        else if (a[p]!=a[p+1] and a[p]!=a[p-1] and a[p-1]!=a[p+1]){pn=p;}
        p++;
    }
    if (p==n-1)
    {
        if (pn!=-2)cout << moda(a,pn) << endl;
        else cout<<moda(a,n+3) << endl;
    }
    else { cout << moda(a,pideal) << endl;}
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
