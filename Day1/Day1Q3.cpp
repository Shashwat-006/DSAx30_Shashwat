#include <iostream>
using namespace std;

int count;

void permute(int arr[], int start, int end) {
    if (start == end) {
        for (int i = 0; i < end; i++) {
            cout << arr[i];
            if(i<end -1){
                cout<<" ";
            }
            else{
                cout<<endl;
            }
        }
        count++;
        return;
    }

    for (int i = start; i < end; i++) {
        int temp=arr[start];
        arr[start]=arr[i];
        arr[i]=temp;
        permute(arr, start + 1, end);
        temp=arr[start];
        arr[start]=arr[i];
        arr[i]=temp;
    }
}

int main() {
    int n;
    cout << "Enter any number from 2 to 5 (both inclusive): ";
    cin >> n;

    int arr[5];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    permute(arr, 0, n);

    cout << "Total number of combinations: " << count ;
    return 0;
}