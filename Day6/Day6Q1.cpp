#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
    int out=0,i=0;
    while(i<s.length()){
        if(s[i]=='C'){
            if(s[i+1]=='D'){
                out+=400;
                i++;
            }
            else if(s[i+1]=='M'){
                out+=900;
                i++;
            }
            else{
                out+=100;
            }
            i++;
        }
        else if(s[i]=='X'){
            if(s[i+1]=='L'){
                out+=40;
                i++;
            }
            else if(s[i+1]=='C'){
                out+=90;
                i++;
            }
            else{
                out+=10;
            }
        i++;    
        }
        else if(s[i]=='I'){
            if(s[i+1]=='V'){
                out+=4;
                i++;
            }
            else if(s[i+1]=='X'){
                out+=9;
                i++;
            }
            else{
                out+=1;
            }
        i++;    
        }
        else if(s[i]=='V'){
            out+=5;
            i++;
        }
        else if(s[i]=='L'){
            out+=50;
            i++;
        }
        else if(s[i]=='D'){
            out+=500;
            i++;
        }
        else{
            out+=1000;
            i++;
        }
            
    }
    return out;
       
}

int main(){
    string s;
    cout<<"Enter the Roman Number: ";
    cin>>s;
    int x=romanToInt(s);
    cout<<"Integer value of "<<s<<" is "<<x;    
}