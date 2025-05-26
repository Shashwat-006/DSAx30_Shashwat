#include<iostream>
using namespace std;

int sum_of_squares(int n){
    int sum=0,x;
    while(n>=1){
        x=n%10;
        sum+=x*x;
        n=n/10;
    }
    return sum;
}

bool Happy(int n){
    int backward=n;
    int forward=sum_of_squares(n);
    while(forward!=1 && backward!=forward){
        backward=sum_of_squares(backward);
        forward=sum_of_squares(sum_of_squares(forward));
    }
    return forward == 1;
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(Happy(n)){
        cout<<n<<" is a Happy number.";
    }
    else{
        cout<<n<<" is not a Happy number.";
    }
    return 0;
}