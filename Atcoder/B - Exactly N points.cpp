
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
    lli n;
    cin>>n;

    vector<lli> v;
    for(lli i=1; i<=n; i++){

        if(i==1){v.push_back(i);}
        else {
            lli val =  i+v[i-1-1];
            v.push_back(val);
            if(v[i-1]>1e7){
                break;
            }
        }

    }

    auto pos = lower_bound(v.begin(),v.end(),n);

    lli idx = pos -  v.begin();

    while(n){

        cout<<idx+1<<nl;
        n-=idx+1;
        idx-=1;
        if(idx<0){break;}
        if(n<=0){break;}
        if(n<idx+1){
            cout<<n<<nl;
            break;
        }

    }

}
int main(){
    booster;
    solve();
    return 0;
}
