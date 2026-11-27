//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
const int MAXV = 6000000;
vector<bool> isPrime(MAXV + 1, true);
vector<long long> primes;

void sieve() {
    isPrime[0]=isPrime[1]=false;
    for (long long i=2; i<=MAXV;i++) {
        if (isPrime[i]){
            primes.push_back(i);
            for (long long j=i*i;j<=MAXV;j+=i)
                isPrime[j]=false;}}}


void solve() {
    int p,r;
    cin>>p>>r;
    cout<<(long long)ceil((double)(100-p)/double(r))<<endl;






}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
