#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int out=0;
    int len=s.length();
    for(int i=0;i<len-1;i++){
        if(s[i]>'0' && s[i]<'9'){
            out=out*10 + (s[i]-'0');
        }
        else break;
    }

    cout<<"Output is "<<out;
}