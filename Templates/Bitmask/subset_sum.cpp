#include <bits/stdc++.h>
using namespace std;

int arr[100];

int main(){

    int n;
    cin>>n;

    for(int i = 0; i<n; i++){
       cin>>arr[i];
    }

    int x;
    cin>>x;

    /// pow

    /// 2^n  = (1<<n)



    for(int mask = 0; mask < (1<<n); mask++){

        vector<int> v;
        for(int i = 0; i<n; i++){
            if((mask & (1<<i)) != 0){
                v.push_back(arr[i]);
            }
        }

        int sum = 0;
        for(int y: v){
            //cout<<y<<" ";
            sum += y;
        }

        if(sum == x){
            cout<<"found"<<endl;
            for(int y: v){
                cout<<y<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}
