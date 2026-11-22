#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n);
 
    vector<long long> blocks(1,0);
    long long x=0;
    for(long long i=0;i<n;i++)
    { cin>>a[i];
        if (i==0){blocks[x]++;}
        else
        {
            if (a[i]==a[i-1]){blocks[x]++;}
            else
            {
                blocks.push_back(1);
                x++;
            }
        }
    }
    long long ans=0;
    for(long long i=0;i<blocks.size();i++)
    {
        if (blocks[i]>=n-k+1){ans+=(blocks[i]-(n-k+1)+1);}
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--)solve();
}
