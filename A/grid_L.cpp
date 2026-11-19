//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long p, q;
    //All the respect to the one who made the problem
    cin >> p >> q;
    long long x=p+2*q;
    for (long long n=1;2*n*n+2*n<=x;n++)
    {
        if ((x-n)%(2*n+1)!=0) continue;
        long long m =(x-n)/(2*n+1);
        if (q<=min((n+1)*m,n*(m+1)))
        {
            cout<<n<<" "<<m<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--) { solve(); }
}
