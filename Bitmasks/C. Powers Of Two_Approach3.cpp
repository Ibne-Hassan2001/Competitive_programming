#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr);
#define precision cout << fixed << setprecision(6);
#define print(x) cout<< #x <<" = "<< x<<"\n";
#define nl "\n"
#define sp " "

void solve(){
    int n,k;
    cin>>n>>k;
    priority_queue<int> one;
    for(int i=0; i<32; i++){
        int mask=(1<<i);
        if((mask&n)!=0) one.push(i);
    }
    if(k<(int)one.size() || k>n){
        cout<<"NO"<<nl;
        return;
    }
    while((int)one.size()!=k){
        int x = one.top(); one.pop();
        one.push(x-1);
        one.push(x-1);
    }
    cout<<"YES"<<nl;
    while(!one.empty()){
        int x = one.top(); one.pop();
        cout<<(1<<x)<<sp;
    }
    cout<<nl;
}
int main(){
    fast;
    solve();
    return 0;
}
