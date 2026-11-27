//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n,m;
    cin>>n>>m;
    if (m>n*(n+1)/2 or n>m)
    {
        cout<<-1<<endl;
        return;
    }
    if (n==1) { cout<<1<<endl;return;}
    set<long long> s;
    for(long long i=1;i<=n;i++)
    {
        s.insert(i);
    }
    if (m-n+1<=n)
    {
        cout<<m-n+1<<endl;
        s.erase(m-n+1);
        cout<<m-n+1<<" "<<*s.begin()<<endl;
        for (auto it = s.begin(); it != s.end(); ++it)
        {
            if (next(it)!=s.end())
            {
                cout<<*it<<" "<<*next(it)<<endl;
 
            }
        }
    }
    else
    {
 
        vector<long long> v(n+1,1);
        v[0]=0;
        long long sum=n;
        long long index=1;
        while (sum<m)
        {
            if (m-sum>=(n-index))
            {
                v[index]=n-index+1;
                sum+=n-index;
                index=index+1;
            }
            else
            {
                v[index]=m-sum+1;
                break;
            }
 
 
 
        }
        long long ekher_we7d=0;
        set<long long> s;
        for (long long i=1;i<=n;i++)
        {
            s.insert(i);
        }
        cout<<v[1]<<endl;
        for (long long i=1;i<=n;i++)
        {
            if (v[i]!=1)
            {
                cout<<v[i]<<" "<<v[i+1]<<endl;
                ekher_we7d=v[i+1];
                s.erase(v[i]);
            }
            else
            {
                break;
            }
        }
        s.erase(ekher_we7d);
        if (!s.empty())
        {
            cout<<ekher_we7d<<" "<<*s.begin()<<endl;
            for (auto it = s.begin(); it != s.end(); ++it)
            {
                if (next(it)!=s.end())
                {
                    cout<<*it<<" "<<*next(it)<<endl;
                }
            }
        }
 
 
 
    }
 
 
 
 
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();}
}
