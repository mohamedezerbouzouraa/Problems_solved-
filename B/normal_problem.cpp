//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
int nb_bits(long long x){
    int c=0;
    while(x>0){c++;x>>=1;}
    return c;}
void solve(){
    string s;
    cin>>s;
    long long n=s.size();
    string p,pm;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='p'){p+='q';}
        else if(s[i]=='q'){p+='p';}
        else{p+='w';}
    }
    for(int i=0;i<n;i++)
    {pm+=p[n-i-1];}
    cout<<pm<<endl;
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
