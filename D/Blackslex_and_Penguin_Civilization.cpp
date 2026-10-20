#include <bits/stdc++.h>
using namespace std;
 
int f(int v)
{
    int c = 0;
    while (v & 1)
    {
        c++;
        v >>= 1;
    }  
    return c;
}
 
void solve()
{  long long n;
    cin >> n;
    long long x=(1LL<<n )-1,h=x;
    vector<long long> pairs;
    vector<long long> impairs;
    vector<bool> is_used(h+1, false);
    vector<long long> rst;
    long long i=1;
    while (x>=1)
    {
        rst.push_back(x);
        is_used[x]=true;
        x=x- (1LL<<(n-i));
        i++;
    }
    for (long long i=0;i<=h;i++)
    { if (is_used[i]==false)
    {
        if (i%2==0){pairs.push_back(i);}
        else{impairs.push_back(i);}
    }
 
    }
    vector<long long> kef;
    for (long long i=0;i<rst.size();i++)
    {
        kef.push_back(rst[i]);
    }
    for (long long i=0;i<impairs.size();i++)
    {
        kef.push_back(impairs[i]);
    }
        sort(kef.begin(), kef.end(), [&](long long i, long long j)
        {
            if (f(i) != f(j)) return f(i) > f(j);
            return i < j;                    });
for (long long i=0;i<kef.size();i++)
{cout<<kef[i]<<" ";
}
        for (long long i=0;i<pairs.size();i++)
    {
        cout<<pairs[i]<<" ";
    }
    cout<<endl;
 
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
