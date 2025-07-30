#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int a[n+1];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(n==1){
        cout<<0<<endl;
    }

    else{
    int maxEl = *max_element(a+1,a+n);

    int res = maxEl+1 - a[0];
    
    if(res<0) cout<<0<<endl;
    else cout<<res<<endl;
    }

    return 0;
}