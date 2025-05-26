#include<iostream>
using namespace std;

int noDigit(int n){
    int digit=0;
    while(n>0){
        n=n/10;
        digit++;
    }
    return digit;
}

int left_split(int num,int n){
    int div=1;
    for(int i=0;i<n;i++){
        div=div*10;
    }
    return num/div;
}

int right_split(int num,int n){
    int div=1;
    for(int i=0;i<n;i++){
        div=div*10;
    }
    return num%div;
}

bool isKaprekar(int n){
    int num=n*n;
    if(n==1) return true;
    if(noDigit(num)%2==0){
        int left = left_split(num,noDigit(num)/2);
        int right = right_split(num,noDigit(num)/2);
        if(left+right==n){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        int right=right_split(num,(noDigit(num)/2)+1);
        int left = left_split(num,(noDigit(num)/2)+1);
        if(left+right==n){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    int p,q;
    int nums[100];
    int count=0;
    cout<<"Enter two numbers: ";
    cin>>p>>q;
    for(int i=p;i<=q;i++){
        if(isKaprekar(i)){
            nums[count]=i;
            count++;
        }
    }
    cout<<"The Kaprekar numbers are: "<<endl;
    for(int i=0;i<count;i++){
        if(i==0){
            cout<<nums[i];
            continue;
        }
        cout<<" , "<<nums[i];
    }
    cout<<endl;
    cout<<"Frequency of Kaprekar numbers is: "<<count;
    return 0;
}