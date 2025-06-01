#include<bits/stdc++.h>
#include<map>
using namespace std;

bool elementCheck(int n,map<int,int> mpp,int x){
    int out=-1;
    for(int i=x;i>0;i--){
        if(mpp.find(i)!=mpp.end()) {
            out=i;
            break;
        }
    }
    return out;
}

bool checkSum(int arr[],int n,int target){
    map<int,int> mpp;
    int x=0;
    for(int i=0;i<n;i++){
        mpp[arr[i]]=1;
    }
    for(auto it:mpp){
        x=target-it.first;
        if(x==0) return true;
        if(mpp.find(x)!=mpp.end()){
            return true;
        }
        else {
            int m=elementCheck(n,mpp,x);
            if(m=-1){
                continue;
            }
            else{
                x=x-m;
                elementCheck(n,mpp,x);
            }
        }
    }
    return false;
}

int main(){
    int n,target;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element number "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Enter the integer to check: ";
    cin>>target;
    if(checkSum(arr,n,target)){
        cout<<"Output: Yes";
    }
    else{
        cout<<"Output: No";
    }
}