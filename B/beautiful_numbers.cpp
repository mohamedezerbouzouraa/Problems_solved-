#include <bits/stdc++.h>
using namespace std;
 
long long F(long long x)
{
    long long s = 0;
    while (x > 0)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}
 
 
void solve()
{  long long x;
    cin >> x;
    long long ans=0;
    if (F(x)<=9){cout<<0<<endl;return;}
    long long y=F(x)-9;
    string s = to_string(x);
    map<long long,vector<long long>> mp;
    for (int i=0;i<s.length();i++)
    {long long x=s[i]-'0';
        mp[x].push_back(i);
 
    }
    bool p=false;
    for (long long i=9;i>0;i--)
    {
        for (long long j=mp[i].size()-1;j>=0;j--)
        {
            if (mp[i][j]==0)
            {
                y-=(i-1);
                ans++;
            }
            else
            {
                y-=i;
                ans++;
            }
            if (y<=0)
            {p=true;
                break;
 
            }
        }
        if (p==true){break;}
    }
    cout<<ans<<endl;
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
