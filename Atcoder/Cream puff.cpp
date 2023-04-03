
#define done cout<<"Successful\n";
#define stop getchar();
#define input(data,n) for(int xd=0;xd<n;xd++)cin>>data[xd];
#define output(data) for(auto x: data){cout<<x<<sp;}
#define print(x) cout<< #x <<" = "<< x<<"\n";
#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecisio
#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
#define lli long long int
#define spc " ";
#define nl '\n'
#define all(v) v.begin(),v.end()

const int inf = 2147483647;

void solve(){
    lli n;
    cin>>n;
    vector<lli> v;


    for(lli i=1; i*i<=n; i++){
        if(n%i==0){ if(i==(n/i)) {v.push_back(i);} else {v.push_back(i); v.push_back(n/i);} }
    }

    sort(v.begin(),v.end());
    for(auto x : v){
        cout<<x<<nl;
    }

}
int main(){
    ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
    int t = 1 ;

    while(t--) solve();
    return 0;
}
