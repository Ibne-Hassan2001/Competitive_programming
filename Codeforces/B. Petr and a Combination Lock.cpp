
#define done cout<<"Successful\n";
#define stop getchar();
#define input(data,n) for(int xd=0;xd<n;xd++)cin>>data[xd];
#define output(data) for(auto x: data){cout<<x<<sp;}
#define print(x) cout<< #x <<" = "<< x<<"\n";
#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecisio
#include <bits/stdc++.h>
using namespace std;
#define booster ios_base::sync_with_stdio(false);cin.tie(nullptr); cout.tie(nullptr);
#define lli long long int
#define spc " ";
#define nl '\n'

const int inf = 2147483647;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);

    int total =0 ;
    for(int i=0;  i<n; i++){
        cin>>v[i];
        total+=v[i];
    }

    bool flag  = false;
    for( int mask=0; mask<(1<<n); mask++ ){

        int sum = 0;

        int minus_val = 0;
        for(int k=0; k<n; k++){
            if((mask & 1<<k)!= 0){
               minus_val+=v[k];
            }
        }
        int rest = total - minus_val;

        sum = minus_val-rest;

        if( ( sum%360==0 ) ){
            cout<<"YES"<<nl;
            flag = true;
            break;
        }
    }

    if(!flag){
        cout<<"NO"<<nl;
    }

}
int main(){
    booster;
    solve();
    return 0;
}
