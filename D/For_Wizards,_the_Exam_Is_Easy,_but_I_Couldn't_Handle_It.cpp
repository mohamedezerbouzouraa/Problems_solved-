//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
long long nb_uns(long long x){
    long long c=0;
    while(x>0){c+=x&1;x>>=1;}
    return c;}

void solve(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<long long> f(n);
    long long max=0,bestl=0,bestr=0;
    for(long long i=0;i<n;i++)
    {f[i]=0;
        for(long long j=i+1;j<n;j++)
        {if(a[j]<a[i])
        {
            f[i]++;
        }
        else if(a[i]<a[j]){
                f[i]--;
            }
            if(f[i]>max)
            {
                bestl=i;
                bestr=j;
                max=f[i];
            }

        }

    }
    cout<<bestl+1<<" "<<bestr+1<<endl;


    }








int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
}
