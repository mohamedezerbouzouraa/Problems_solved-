//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
int nb_bits(long long x){
    int c=0;
    while(x>0){c++;x>>=1;}
    return c;}
void solve(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    vector<long long> prefpos(n,0);
    vector<long long> suffneg(n,0);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]>0)
        {
            if (i==0){prefpos[i]=a[i];}
            else{prefpos[i]=prefpos[i-1]+a[i];}
        }
        else
        {if (i==0){}
        else{prefpos[i]=prefpos[i-1];}
 
        }
    }
    for(long long i=n-1;i>=0;i--)
    {if (a[i]<0)
    {
        if (i==n-1){suffneg[i]=a[i];}
        else{suffneg[i]=suffneg[i+1]+a[i];}}
    else
    {if (i==n-1){}
    else{suffneg[i]=suffneg[i+1];}
 
    }
    }
    long long best=0;
    for(long long i=0;i<n;i++)
    {
        best=max(best,prefpos[i]-suffneg[i]);
    }
    cout<<best<<endl;
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
