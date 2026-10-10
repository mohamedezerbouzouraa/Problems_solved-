#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(long long i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end(),greater<long long>());
    long long countsup2=0,i=0,smtot=0;
    vector<long long> sup2;
    while(i<n and a[i]>=2)
    {
        countsup2++;
        smtot+=a[i];
        sup2.push_back(a[i]);
        i++;
    }
    if (countsup2==n)
    { if (smtot<3){cout<<0<<endl; return;}
        cout<<smtot<<endl;return;
 
    }
    else if(countsup2==0){cout<<0<<endl;return;}
    else if (countsup2 == 1)
    {
        long long ans=smtot+min(smtot/2, n-1);
        cout<<(ans<3? 0:ans)<<endl;
        return;
    }
    else
    {long long nbrest=n-countsup2;
        for(long long i=0;i<countsup2;i++)
        { if (sup2[i]>=4)
        { long long x=sup2[i]-4;
 
            smtot+=(min(nbrest,x/2+1));
            if (nbrest<=x/2+1)
            {
                break;
            }
            else{nbrest-=(x/2+1);}
        }
 
        }
        cout<<smtot<<endl;
 
    }
 
 
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
