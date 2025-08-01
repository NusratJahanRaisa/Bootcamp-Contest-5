#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

int minIndexFunc(int a[], int n){
    int minIndex = 0;

    for(int i=0;i<n;i++){
        if(a[minIndex]>=a[i]) 
        minIndex = i; 
    }

    return minIndex;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int a[n];  

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    auto maxInNum = max_element(a,a+n);

    int maxIn = maxInNum-a; //subtracting max address - 0 no address to find out the actual array max element index;

    int minIn = minIndexFunc(a,n);
    
    int ans = maxIn + (n-1-minIn);

    if(maxIn>minIn){
         ans--;
    }

    cout<<ans<<endl;


    return 0;
}