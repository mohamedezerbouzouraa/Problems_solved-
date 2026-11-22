//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    long long ans=n;
    vector<long long> p(n);
    for(long long i=0;i<n;i++)
    {
        cin>>p[i];

    }
    vector<long long> R(n,n),L(n);
    vector<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() and p[st.back()]>p[i]) {
            R[st.back()] = i;
            st.pop_back();
        }
        L[i] = st.empty() ? -1 : st.back();
        st.push_back(i);
    }
    for (int i = 0; i < n; i++)
    {
        long long a=i-L[i]-1,b=R[i]-i-1;
        if (min(a,b)==0)ans+=(a+b);
        else ans++;
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
