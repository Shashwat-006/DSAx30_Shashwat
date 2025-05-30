#include<iostream>
using namespace std;

int target_index(int arr[],int left,int right,int target){
    int mid=(left+right)/2,out;
    if(target<arr[mid]){
        out=target_index(arr,0,mid-1,target);
    }
    else if(target==arr[mid]){
        return mid;
    }
    else{
        if(target>arr[right]){
            return right+1;
        }
        out=target_index(arr,mid+1,right,target);
    }
    return out;
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
    cout<<"Enter the integer to find index: ";
    cin>>target;
    int out = target_index(arr,0,n-1,target);
    cout<<out;
}