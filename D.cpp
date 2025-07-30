#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cin.ignore();

    string s;
    getline(cin,s);

    
    int f=0;
    stringstream ss(s);

    string word;
    while (ss>>word)
    {
        /* code */
        if(word=="and" || word=="not" || word=="that" || word=="the" || word=="you") f=1;
    }
    

    if(f==1){
        yes
    }else no
    return 0;
}