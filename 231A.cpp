#include<iostream>
#include<vector>
using namespace std;
int main(){
    int ans=0;
    int n;
    cin>>n;
    vector<vector<int>> vec(n);
    for(int i=0;i<n;i++){
        vector<int> v(3);
        for(int j=0;j<3;j++){
            cin>>v[j];
        }
        vec.push_back(v);
    }
    for(vector<int> row:vec){
        int count=0;
        for(int i:row){
            if(i==1){
                count++;
            }
        }
        if(count>=2) ans++;
    }
    cout<<ans;
}