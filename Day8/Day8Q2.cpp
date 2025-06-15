#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cout<<"Enter first string: ";
    cin>>s1;
    cout<<"Enter second string: ";
    cin>>s2;
    map<char,int> mpp;
    int l1=s1.length(),l2=s2.length();
    for(int i=0;i<l1;i++){
        mpp[s1[i]]++;
    }
    for(int i=0;i<l2;i++){
        mpp[s2[i]]--;
    }
    for(auto it:mpp){
        if(it.second!=0){
            cout<<"Strings are not anagram of each other!";
            return 0;
        }
    }
    cout<<"Strings are anagram of each other!";
    return 0;
    
}