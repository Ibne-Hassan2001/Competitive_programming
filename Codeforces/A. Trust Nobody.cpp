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
#include <iostream>
#include <cmath>

const int inf = 2147483647;

void solve(){
    lli n;
    cin>>n;
    vector<lli> v(n);

    for(lli i=0; i<n; i++){
        cin>>v[i];
    }

    for (lli j=0; j<=n; j++){
            lli liar  = 0;
            for(lli oo=0; oo<n; oo++){
                if(j<v[oo]){
                    liar+=1;
                }
            }

            if(liar==j){
                cout<<j<<nl;
                return;
            }
    }
    cout<<-1<<nl;
    return;


}
int main(){
    ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
