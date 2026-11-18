//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
long long nbops(long long a,long long b )
{long long x=0,ok=(b%2==0);
    while (a!=b and a>=b-(ok))
    {
        if (a%2==0){a/=2;}
        else{a++;}
        x++;
    }
    if (a==b){return x;}
    else{return -1;}
}
void solve()
{
    long long n;
    cin>>n;
    vector<long long> a(n);
    long long mn=LLONG_MAX;
    for (long long i=0;i<n;i++)
    {
        cin>>a[i];
        mn=min(mn,a[i]);
    }
    vector<long long> trajectoire_mta3_min;
    if (mn==1)
    {
        trajectoire_mta3_min.push_back(1);
        trajectoire_mta3_min.push_back(2);
        long long best=LLONG_MAX;
        for (auto i:trajectoire_mta3_min)
        {long long dist=0;
            bool flag=false;
            for (auto j:a)
            {long long f=nbops(j,i);
                if (f==-1){flag=true;break;}
                else{dist+=nbops(j,i);}
 
            }
            if (flag)continue;
            best=min(best,dist);
        }
        cout<<best<<endl;return;
    }
    while (mn!=1)
    {
        if (mn%2==0)
        {
            trajectoire_mta3_min.push_back(mn);
            mn=mn/2;
        }
        else
        {
            trajectoire_mta3_min.push_back(mn);
            mn++;
        }
    }
    trajectoire_mta3_min.push_back(1);
    long long best=LLONG_MAX;
    for (auto i:trajectoire_mta3_min)
    {long long dist=0;
        bool flag=false;
        for (auto j:a)
        {long long f=nbops(j,i);
            if (f==-1){flag=true;break;}
            else{dist+=nbops(j,i);}
 
        }
        if (flag)continue;
        best=min(best,dist);
    }
    cout<<best<<endl;
 
 
 
 
}
 
 
 
 
 
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();}
 
}
