#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    long long n;
    cin>>n;
    vector<long long> b(n);
    vector<long long> bc(n);
    for(long long i=0;i<n;i++){cin>>b[i];bc[i]=b[i];}
    vector<long long> indx(n);
    iota(indx.begin(),indx.end(),0);
    sort(indx.begin(),indx.end(),[&](long long i,long long j){return b[i]<b[j];});
    vector<long long > prf(n,0);
    long long k=0;
    for(long long i=1;i<n;i++)
    {
        if (b[indx[i]]==bc[indx[i-1]])
        {
            prf[indx[i]]=prf[indx[i-1]];
            k++;
        }
        else
        {
            prf[indx[i]]=prf[indx[i-1]]+(k+1);
            k=0;
        }
    }
    vector<long long>a(n);
    long long i=1,l=0;
    if (b[indx[0]] != 0){cout<<-1<<endl;return;}
    long long mn=0,mx=0;
    bool p=false;
    while(i<n)
    {
        while (i<n and prf[indx[i]]==prf[indx[i-1]])
        {
            i++;
        }
        for (long long j=l;j<i;j++)
        {  if (i!=n)
        {
            if ((b[indx[i]]-b[indx[i-1]])%(prf[indx[i]]-prf[indx[i-1]])==0 )
            {
                a[indx[j]]=(b[indx[i]]-b[indx[i-1]])/(prf[indx[i]]-prf[indx[i-1]]);
                mn=a[indx[j]]+1;
            }
            else
            {
                cout<<-1<<endl;return;
            }
        }
            else
            {
                p=true;
                break;
            }
        }
        if (i==n)
        {
            break;
        }
        l=i;
        i++;
    }
    if (l==0)
    {
        for (long long j=l;j<n;j++)
        {
            a[indx[j]]=1;
        }
    }
    else
    {for (long long j=l;j<n;j++)
    {
        a[indx[j]]=mn;
    }
 
    }
    for (long long i=1;i<n;i++)
    {
        if (a[indx[i]] < a[indx[i-1]] or (b[indx[i]] > b[indx[i-1]] and a[indx[i]] == a[indx[i-1]])){cout<<-1<<endl;return;}
    }
    for (long long i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
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
