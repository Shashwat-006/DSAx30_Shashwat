#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int area=0,left=0,right=n-1;
    while(left<right){
        int temp=(right-left)*min(arr[left],arr[right]);
        area=max(area,temp);
        if(arr[left]>arr[right]){
            right--;
        }
        else{
            left++;
        }
    }
    
    cout<<"Maximum water that can be held is "<<area<<endl;
    return 0;
}