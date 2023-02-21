#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
#define precision cout << fixed << setprecision(6);
#define nl "\n"
#define sp " "

void print(ll n, ll i, ll sum){
    ll x = sum-n;
    for(ll j=1; j<=i; j++){
        if(j==x) continue;
        cout<<j<<sp;
    }
    cout<<nl;
}

int main(){
    fast;
    ll n;
    cin>>n;
    ll sum=0;
    for(ll i=1; i<=n; i++){
        sum+=i;
        if(n<=sum){
            print(n, i, sum);
            break;
        }
    }
    return 0;
}
