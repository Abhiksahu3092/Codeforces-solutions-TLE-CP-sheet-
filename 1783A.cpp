#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(a[0]==a[n-1]){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;

        cout<<a[0]<<" ";
        for(int i=n-1;i>0;i--){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
   
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}