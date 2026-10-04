#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
   long long n,m;
    cin>>n>>m;
    vector<vector<string>> a(n,vector<string>(2));
    long long diff=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        string h1,h2,t1,t2;
        long long xh1=0,xh2=0,xt1=0,xt2=0;
        h1=a[i][0].substr(0,2);
        h2=a[i][1].substr(0,2);
        t1=a[i][0].substr(3,2);
        t2=a[i][1].substr(3,2);
        for(int j=0;j<2;j++)
        {
            if (j==0)
            {
                xh1=xh1+(h1[j]-'0')*10;
                xh2=xh2+(h2[j]-'0')*10;
                xt1=xt1+(t1[j]-'0')*10;
                xt2=xt2+(t2[j]-'0')*10;
            }
            else
            {
                xh1=xh1+(h1[j]-'0');
                xh2=xh2+(h2[j]-'0');
                xt1=xt1+(t1[j]-'0');
                xt2=xt2+(t2[j]-'0');
            }
        }
            diff+=((xh2-xh1)*60+(xt2-xt1));
 
 
 
 
        }
    if (diff<60*m){cout<<"NO"<<endl;return;}
    cout<<"YES"<<endl;
 
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
