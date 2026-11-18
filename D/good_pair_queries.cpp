//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    long long n,q;
    cin>>n>>q;
    string s1,s2;
    cin>>s1>>s2;
    vector<long long> we7d_sfer(n+1,0);
    we7d_sfer[0]=0;
    vector<long long> we7d(n+1,0);
    we7d[0]=0;
    vector<long long> sfer(n+1,0);
    sfer[0]=0;
    vector<long long> sfer_we7d(n+1,0);
    sfer_we7d[0]=0;
    for (int i = 1; i <=n;i++) {
        sfer[i]=sfer[i-1]+(s1[i-1]=='0' and s2[i-1]=='0');
        we7d[i] =we7d[i-1]+(s1[i-1]=='1' and s2[i-1]=='1');
        we7d_sfer[i] =we7d_sfer[i-1]+(s1[i-1]=='1' and s2[i-1]=='0');
        sfer_we7d[i] =sfer_we7d[i-1]+(s1[i-1]=='0' and s2[i-1]=='1');
    }
    while (q--)
    {
        long long l,r;
        cin>>l>>r;
        long long p1=we7d[r]-we7d[l-1],p2=sfer[r]-sfer[l-1],f1=we7d_sfer[r]-we7d_sfer[l-1],f2=sfer_we7d[r]-sfer_we7d[l-1];
        if (2*(p1+p2)>=(r-l+1)){cout<<"YES"<<endl;}
        else if (f1==0)
        {
            if (p1+p2>=f2){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
        else if (f2==0)
        {
            if (p1+p2>=f1){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
        else if (f1==f2){cout<<"YES"<<endl;}
        else
        {
            if (p1>=llabs(f1-f2) or p2>=llabs(f1-f2) or p2+p1>=llabs(f1-f2)){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
    }
 
 
}
 
 
 
 
 
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();}
 
}
