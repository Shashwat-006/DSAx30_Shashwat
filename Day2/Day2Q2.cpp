#include<iostream>
using namespace std;

void rotate_array(int arr[],int n){
    int temp=arr[n-1];
    for(int i=n-1;i>=0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}

void printing(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element number "<< i+1 <<": ";
        cin>>arr[i];
    }
    cout<<"Initial array: ";
    printing(arr,n);
    cout<<endl;
    rotate_array(arr,n);
    cout<<"Rotated Array: ";
    printing(arr,n);

    return 0;

}