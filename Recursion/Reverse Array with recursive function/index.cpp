#include <iostream>

using namespace std;
//Function to print array
void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}
//Function to reverse array 
void reverseArray(int arr[], int n,int p,int q) {
    //------------Simple Approach-----------------
   //int p1 = 0, p2 = n - 1;
   //while (p1 < p2) {
      //swap(arr[p1], arr[p2]);
      //p1++; p2--;
   //}
   //printArray(arr, n);
   //-----------Recursion Approach---------------
   //base case....
   if(p>=q){
    return;
   }
    swap(arr[p],arr[q]);
    p++;q--;
    reverseArray(arr,n,p,q);
}
int main() {
   int n = 4;
   int arr[] = {1,2,3,4};
   //imp here declare
   int p=0,q=n-1;
   reverseArray(arr, n,p,q);
   printArray(arr, n);
   return 0;
}