#include<bits/stdc++.h>
#include<string>
using namespace std;

string binary_addition(string a,string b){
    int len1=a.length()-1;
    int len2=b.length()-1;
    string out="";
    int a_in=0,b_in=0;
    for(char c : a){
        a_in=a_in*2 + (c-'0');
    }
    for(char c : b){
        b_in=b_in*2 + (c-'0');
    }
    int result=a_in+b_in;
    while(result>0){
        out.insert(0,to_string(result%2));
        result=result/2;
    }
    return out;
}

int main(){
    string a,b;
    cout<<"Enter the two binary numbers: ";
    cin>>a>>b;
    string s=binary_addition(a,b);
    cout<<s<<" is the addition of binary numbers.";

    return 0;
}