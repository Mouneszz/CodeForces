#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(int i=0;i<vec.size();i++){
        string s =vec[i];
        string ans="";
    if(s.size()>10){
        ans+=s[0];
        int size = s.size()-2;
        ans+=to_string(size);
        ans+=s[s.size()-1];
        vec[i]=ans;
    }
}
    for(string c:vec){
        cout<<c<<endl;
    }
    return 0;
}