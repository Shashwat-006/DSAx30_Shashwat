#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=0;i<(2*n)-1;i++){
        for(int j=0;j<(2*n)-1;j++){
            int top=i,left=j,bottom=(2*n - 2)-i,right=(2*n - 2)-j;
            cout<<n-min(min(left,right),min(top,bottom));
        }
        cout<<endl;
    }
}