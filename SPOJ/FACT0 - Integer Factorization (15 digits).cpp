
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


vector<pair<lli,lli>> factorise(lli n) {
    vector<pair<lli,lli>> ret;

    for(lli i=2; i*i<=n ;  i++){
            if(n%i==0){

                lli cnt = 0;
                while(n%i==0){
                        n= n/i;
                        cnt++;
                    }
                ret.push_back(make_pair(i,cnt));
            }
        }

     if(n!=1){ret.push_back(make_pair(n,1));}
     return ret;
}



int main(){
    ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
    while(true) {
        lli n;
        cin>>n;
        if(n==0){break;}

        auto vct =  factorise(n);

        for(lli j=0; j<vct.size(); j++) {
            cout<<vct[j].first<<"^"<<vct[j].second<<" ";
        }
        cout<<nl;

    }
    return 0;
}
