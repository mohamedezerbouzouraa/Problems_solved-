#include <bits/stdc++.h>
using namespace std;
 
long long nextWhite(set<long long>& ss, long long x){
    long long y=x+1;
    while(ss.count(y)) y++;
    return y;
}
void solve()
{
    long long n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<long long>a(m);
    long long mx_a=0;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        mx_a=max(mx_a,a[i]);
    }
    long long curr=1;
    set<long long >ss;
    for(long long i=0;i<m;i++)
    {
        ss.insert(a[i]);
    }
    long long nb_wb=0;
    for(int i=0;i<n;i++)
    {//curr hiya l valeur eli na7na tawa feha
        if (s[i]=='A')
        {curr++;
            if (ss.find(curr) == ss.end())
            {
                ss.insert(curr);
            }
        }
        else
        { curr=nextWhite(ss, curr);
            ss.insert(curr);
            curr=nextWhite(ss, curr);
 
        }
 
    }
    cout<<ss.size()<<endl;
    for(auto it=ss.begin();it!=ss.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
 
 
 
 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}
