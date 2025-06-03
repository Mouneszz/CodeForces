#include<iostream>
#include<vector>
using namespace std;
bool dfs(int i,vector<int> &adj,vector<int> check,vector<int>& loves){
    if(check[i]==2) return false;
    if(check[i]==1) return true;
    check[i]=1;
    loves.push_back(i);
    if(dfs(adj[i-1],adj,check,loves)) return true;
    check[i]=2;
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int>adj(n);
    vector<int>check(n+1,-1);
    for(int i=0;i<n;i++){
        cin>>adj[i];
    }
    for(int i=0;i<n;i++){
        vector<int>loves;
        if(dfs(adj[i],adj,check,loves)){
            if(loves.size()==3) {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}