#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;

    for(int i=0;i<s.length();i+=2){
       swap(s[i],s[i+1]);
    }

    cout<<s<<endl;

    return 0;
}