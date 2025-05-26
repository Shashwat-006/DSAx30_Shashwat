#include<iostream>
using namespace std;

int main(){
    int n;
    char c='A';
    cout<<"Enter a number:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int l=n-i-1;l>0;l--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<char(c+j);
        }
        for(int k=i;k>0;k--){
            cout<<char(c+k-1);
        }
        cout<<endl;
    }
    return 0;
}