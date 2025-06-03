#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int ans=0;
    ans+=num/5;
    if(num%5!=0) ans+=1;
    cout<<ans;
    return 0;
}