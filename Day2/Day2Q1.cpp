#include<iostream>
using namespace std;

int partition(int arr[],int left,int right){
    int base=arr[left],i=left,j=right;
    while(i<j){
        while(arr[i]<base && i<=right-1){
            i++;
        }
        while(arr[j]>base && j>=left+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[left],arr[j]);
    return j;
}

void quickSort(int arr[],int left,int right){
    if(left<right){
        int pIndex=partition(arr,left,right);
        quickSort(arr,left,pIndex-1);
        quickSort(arr,pIndex+1,right);
    }
}

int main(){
    int n,target;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n],out[2]={-1};
    for(int i=0;i<n;i++){
        cout<<"Enter element number "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Enter target sum: ";
    cin>>target;
    quickSort(arr,0,n-1);
    int left=0,right=n-1;
    while(left<right){
        if(arr[left]+arr[right]<target){
            left++;
        }
        else if(arr[left]+arr[right]==target){
            out[0]=left,out[1]=right;
            break;
        }
        else{
            right--;
        }
    }
    cout<<"Indices: " <<"["<<out[0]<<","<<out[1]<<"]";
}