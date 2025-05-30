#include<iostream>
using namespace std;

int removeOccurances(int arr[],int n,int target){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=target){
            arr[j]=arr[i];
            j++;
        }
    }
    return j;
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
    cout<<"Enter the integer to remove: ";
    cin>>target;
    int count=removeOccurances(arr,n,target);
    cout<<count<< ", nums = [";
    for(int i=0;i<count;i++){
        cout<<arr[i];
        if(i<count-1){
            cout<<", ";
        }
    }
    cout<<"]";

    return 0;
}