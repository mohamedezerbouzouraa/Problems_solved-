#include <bits/stdc++.h>
using namespace std;


long long calc(long long n, string &s, char ch)
{
    long long ans=0;
    vector<long long> v;
    for(long long i=0;i<n;i++)
    {
        if(s[i]==ch)
        {
            v.push_back(i);
        }
    }
    long long x=v.size();
    if (x==n or x==0){return 0;}
    if (x%2==1)
    { long long t=x/2;
        for(long long i=0;i<x;i++)
        {if (i!=t)
        {
            ans+=(llabs(v[t]-v[i])-llabs(t-i));
        }

        }
        return ans;

    }
    else
    {
        long long t1=x/2,t2=t1-1,ans2=0;
        for(long long i=0;i<x;i++)
        {if (i!=t1)
        {
            ans+=(llabs(v[t1]-v[i])-llabs(t1-i));
        }

        }
        for(long long i=0;i<x;i++)
        {if (i!=t2)
        {
            ans2+=(llabs(v[t2]-v[i])- llabs(t2 - i));
        }

        }
        return min(ans,ans2);
    }
}

void solve()
{
    long long n;
    cin>>n;
    string s;
    cin>>s;
    cout<<min(calc(n,s,'a'),calc(n,s,'b'))<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}
