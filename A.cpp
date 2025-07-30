#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a[4];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }

    sort(a,a+3);

    cout<<a[1]+a[2]<<endl;
    


    return 0;
}