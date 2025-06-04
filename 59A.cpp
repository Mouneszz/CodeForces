#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string str;
    cin>>str;
    int upper = 0,lower =0;
    for(const char &ch:str){
        if(isupper(ch)) upper++;
        else lower++;
    }
    if(upper>lower){
        for(int i=0;i<str.size();i++){
            str[i]=toupper(str[i]);
        }
    }
    else{
        for(int i=0;i<str.size();i++){
            str[i]=tolower(str[i]);
        }
    }
    cout<<str;
    return 0;
}
