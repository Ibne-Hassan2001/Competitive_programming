
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

string binary(lli x){
    string ret;
    for(lli i = 31; i>=0; i--){
        lli mask = (1<<i);
        if((x&mask) == 0)
            ret.push_back('0');
        else
            ret.push_back('1');
    }
    return ret;
}


void solve(){
    lli n;
    cin>>n;

    string strg =  binary(n);
    int cnt = 0;
    for(int j=0; j<strg.size(); j++){
        if(strg[j]=='1'){
            cnt+=1;
        }
    }

    cout<<cnt<<nl;
}
int main(){
    booster;
    solve();
    return 0;
}
