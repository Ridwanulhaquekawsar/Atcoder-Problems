#include<bits/stdc++.h>
using namespace std;
int N; vector<int>arr;

int digit_sum(int val){
    int sum=0;
    while(val>0){
        sum+=(val%10);
        val/=10;
    }
    
    return sum;
}

void solve(){
    cin>>N; arr.resize(N+1);
    arr[0]=1;
    
    if(N>0){
        int i=1;
        while(i<=N){
            int sum=0,j=0;
            while(j<i){
                sum+=(digit_sum(arr[j]));
                j++;
            }
            
            arr[i]=sum; i++;
        }
    }
    
    cout<<arr[N];
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); solve();
    return 0;
}
