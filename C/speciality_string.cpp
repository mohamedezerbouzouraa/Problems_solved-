//such a nice problem
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    string s;
    cin>>s;
    string st="";
    for(char c:s)
    {
        if(!st.empty()&&st.back()==c)st.pop_back();
        else st.push_back(c);
    }
    if(st.empty())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();}
 
}
