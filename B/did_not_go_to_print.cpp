#include <bits/stdc++.h>
using namespace std;
 

void solve()
{
   long long n;
    cin>>n;
    string s;
    cin>>s;
    vector<long long> a(n);
    stack<int> jme3a;
    map<long long,long long> mp;
    for(long long i=0;i<n;i++)
    {
        a[i]=i+1;
        mp[a[i]]=1;
    }
    for(long long i=0;i<n;i++)
    {
        if (s[i]=='3')
        {
            mp.erase(a[i]);
        }
        else if (s[i]=='2')
        {
            if (jme3a.size()==0)
            {
                mp.erase(a[i]);
            }
            else
            {
                mp.erase(jme3a.top());
                jme3a.pop();
            }
        }
        else
        {
            jme3a.push(a[i]);
        }
    }
    cout<<mp.size()<<endl;
    for (auto i : mp)
    {cout<<i.first<<" ";}
    cout<<endl;
 
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
