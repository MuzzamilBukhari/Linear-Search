#include<iostream>
using namespace std;
int main (){
     int arr[8] = {23, 14, 45, 32, 77, 49, 12, 27};
     int n = sizeof(arr) / sizeof(int);
     int toSearch = 3;
     int i = 0;
     for (i; i<n;i++){
        if (arr[i] == toSearch){
            cout<<"Found";
            break;
        }
     }
     if (i == n){
        cout<<"Not Found";
     }
}
