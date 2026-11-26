//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin>>n;
    vector<long long> a(2*n+1);
    vector<long long> x(n+1);
    for(long long i=1;i<=2*n;i++)
    {
        cin>>a[i];
        if (i%2==0)
        {
            x[1]+=a[i];
        }
        else
        {
            x[1]-=a[i];
        }
    }
    long long sp=0,sd=0;
    for(long long k=1;k<=n;k++)
    {
        if (k==1){}
        else
        {
            sp+=a[k-1];
            sd+=a[2*n-(k-1)+1];
            if ((k-1)%2==0)
            {
                x[1]-=a[k-1];
                x[1]+=a[2*n-(k-1)+1];
            }
            else
            {
                x[1]+=a[k-1];
                x[1]-=a[2*n-(k-1)+1];
            }
        }
        if (k%2==1) cout<<x[1]-sp+sd<<" ";
        else cout<<-x[1]-sp+sd<<" ";
    }
    cout<<endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();}
}
