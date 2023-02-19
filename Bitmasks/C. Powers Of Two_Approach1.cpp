
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


pair<string,vector<lli>> binary(lli xx) {

    string str="";
    
    vector<lli> v;
    for(lli j=31; j>=0; j--){
        lli mask = 1<<j;
        if((mask&xx)==0){
            str+="0";
        }
        else {
            str+="1";
            v.push_back(j);

        }
    }
    return {str,v};
}


void solve(){

    lli n,k;
    cin>>n>>k;

    if(n<k){
        cout<<"NO"<<nl;
    }
    else {

        auto[strg,v]= binary(n);

        if(v.size()>k){
            cout<<"NO"<<nl;
        }
        else {

            cout<<"YES"<<nl;
            multiset<lli> st;
            st.insert(v.begin(),v.end());

            while(st.size()!=k){
            auto it = st.end();
            it--;
            lli val = *it;
            st.erase(it);
            st.insert(val-1);
            st.insert(val-1);
            }

            for(auto q : st){
                cout<<(1<<q)<<" ";
            }
            cout<<nl;

        }



    }



}
int main(){
    booster;
    solve();
    return 0;
}
