#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
 
 
 
 
 
void solve()
{
    long long n,c;
    cin>> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++){cin>>a[i];}
    if (is_sorted(a.begin(), a.end())==true )cout<<a[n-1]<<endl;
    else
    {
        long long i=0;
        if (n==1)cout<<a[0]<<endl;
        else if (n==2)
        {
            if (a[0]<a[1])cout<<a[1]<<endl;
            else{cout<<a[0]+a[1]<<endl;}
        }
        else{
            while (i<n-2)
            {if (a[i]>a[i+1] and a[i+2]<a[i]+a[i+1]){a[i+2]=a[i]+a[i+1]+a[i+2];i+=2;}
            else{i+=1;}
 
 
            }
            if (i==n-1){cout<<a[i]<<endl;}
            else
            {if (a[i]<=a[i+1])cout<<a[i+1]<<endl;
                else{cout<<a[i]+a[i+1]<<endl;}
 
 
 
            }
 
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}
