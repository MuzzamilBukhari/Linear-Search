#include<iostream>
using namespace std;
// Function to Search the number using linear search
int linearSearch (int arr[], int size, int toSearch){
   int i = 0;
   for (i; i<size;i++){
      if (arr[i] == toSearch){
         return i;
      }
   }
   if (i == size){
      return -1;
   }
}
int main (){
   int size;
   cout<<"Enter the size of an array : ";
   cin >> size;
   int arr[size];
   int toSearch;
   cout<< "Enter array elements"<<endl;
   for (int i = 0;i<size;i++){
      cin >> arr[i];
   }
   cout<<"Enter the number you want to search in this array : ";
   cin >> toSearch;
   int pos = linearSearch(arr, size, toSearch);
   pos >= 0 ? cout<<"Found at position "<<pos : cout<<"Not found"; 
}
