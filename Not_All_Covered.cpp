#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n,m,l,r,ans;
vector<ll>diff_arr;

void solve(){
    cin>>n>>m;
    diff_arr.resize(n+2);
    
    while(m--){
        cin>>l>>r;
        
        diff_arr[l]++;
        diff_arr[r+1]--;
    }
    
    ans=INT_MAX;
    for(int i=1; i<=n; i++){
        diff_arr[i]=diff_arr[i]+diff_arr[i-1];
        ans=min(ans,diff_arr[i]);
    }
    
    cout<<ans<<nl;
}

int main(){
    FastIO(); solve(); return 0;
}
