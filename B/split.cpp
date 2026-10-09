#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    long long n;
    cin>>n;
    vector<long long> a(2*n);
    vector<long long>jme3a_1;
    vector<long long>jme3a_2;
    map<long long,long long> mp;
    long long odd=0;
 
    for(long long i=0;i<2*n;i++)
    {
        cin>>a[i];
        if (mp.find(a[i]) == mp.end()){mp[a[i]]=1;}
        else{mp[a[i]]++;}
    }
    long long ans =0,h=0;
    for (auto it = mp.begin(); it != mp.end(); ++it)
    {
 
        if (it->second % 2 ==0){long long y=it->second,x;
            x=y/2;
            if (2*x==y)
            {  if (x%2==1)
            {
                ans+=2;
            }
                else
                {h++;
 
                }
                for (long long i=1;i <= x;i++)
                {
                    jme3a_1.push_back(it->first);
                }
                for (long long i=1;i <= x;i++)
                {
                    jme3a_2.push_back(it->first);
                }
            }
            }
        else
        {ans+=1;odd+=1;
            long long y=it->second,x=y/2;
            long long t1=jme3a_1.size(),t2=jme3a_2.size();
            if (t1>t2)
            {
                for (long long i=1;i <= x;i++)
                {
                    jme3a_1.push_back(it->first);
                }
                for (long long i=1;i <= x+1;i++)
                {
                    jme3a_2.push_back(it->first);
                }
            }
            else
            {for (long long i=1;i <= x;i++)
            {
                jme3a_2.push_back(it->first);
            }
                for (long long i=1;i <= x+1;i++)
                {
                    jme3a_1.push_back(it->first);
                }
 
            }
 
        }
 
 
 
 
    }
    long long t=(odd>0)?h:h-h%2;
    cout <<ans+2*t<<endl;
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
