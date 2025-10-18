#include<bits/stdc++.h>
using namespace std;
int n,val; deque<int>dq; bool forward_print=true;

void solve(){
    cin>>n; 
    
    for(int i=0; i<n; i++){
        cin>>val;
        
        if(i%2==0){
            dq.push_back(val);
        }else{
            dq.push_front(val);
        }
        
        forward_print=!forward_print;
    }
    
    if(forward_print) for(auto &x : dq) cout<<x<<" ";
    else for(auto it=dq.rbegin(); it!=dq.rend(); it++) cout<<*it<<" ";
}    

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}

⊕••••••⊕••••••⊕••••••⊕••••••⊕••••••⊕••••••⊕••••••⊕••••••⊕••••••⊕

#include<bits/stdc++.h>
using namespace std;
int n,val; deque<int>dq;
bool rvrs_mode=false;

void solve(){
    cin>>n; 
    
    for(int i=0; i<n; i++){
        cin>>val;
        
        if(!rvrs_mode){
            dq.push_back(val);
        }
        else{
            dq.push_front(val);
        }
        
        rvrs_mode=!rvrs_mode;
    }
    
    if(!rvrs_mode) for(auto &x : dq) cout<<x<<" ";
    else for(auto it=dq.rbegin(); it!=dq.rend(); it++) cout<<*it<<" ";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}
