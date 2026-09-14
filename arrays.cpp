#include<iostream>
using namespace std;

// int main(){
//     int a[10] ; // stroes garbage values 
//     int b[10] = {1,2,3,4,5};//from index 5 till index 9 it automatically stores zero 
//     cout<<b[7]<<endl;
//     cout<<b[9]<<endl;
//    int c[] = {4,3,2,1}; // size adjusts as per noof elements
// cout<<sizeof(a) <<endl; // give size as per size of datatype (int 4 bytes*noof elements)
// cout<<sizeof(a) / sizeof(int); // is the correct size(length) of array

// output:
// int arr[5] = {5,3,7,3,4};
// int n = sizeof(arr) / sizeof(int);
// for(int i=0; i<n; i++){
//     cout<<arr[i]<<endl;
// }
//     return 0;
// }

//input:
// int main(){
// int arr[5];
// int n = sizeof(arr) / sizeof(int);
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }

// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
//     return 0;
// }

// dynamically taking input n:
// int main(){
// int n ;
// cout<<"enter size of array: ";
// cin>>n;
// int arr[n];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }

// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
//     return 0;
// }

//largest element in array:
// int main(){
//     int n;
//     cout<<"enter size of array: ";
//     cin>>n;
//     int a[n];
//     cout<<"enter elements of array:";
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }

//         cout<<"elements of array:";
//     for(int i=0; i<n; i++){
//         cout<<a[i]<<" ";
//     }
// cout<<endl;
//     int max = a[0]; 
//     for(int j=0; j<n; j++){
//     if(max < a[j]){
//         max = a[j];
//         cout<<"assigning val "<< a[j] <<" to max\n";
//     }
//     }
//     cout<<"largest element: "<< max;
//     return 0;
// }

//minimum in array:
// int main(){
//     int n;
//     cout<<"enter size of array: ";
//     cin>>n;
//     int a[n];
//     cout<<"enter elements of array:";
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }

//         cout<<"elements of array:";
//     for(int i=0; i<n; i++){
//         cout<<a[i]<<" ";
//     }
// cout<<endl;
//     int min = a[0]; 
//     for(int j=0; j<n; j++){
//     if(min > a[j]){
//         min = a[j];
//         cout<<"assigning val "<< a[j] <<" to min\n";
//     }
//     }
//     cout<<"smallest element: "<< min;
//     return 0;
// }


// int main(){
//     int arr[] = {7,2,9,5,6};
//     cout<< arr<< endl; // gives location of 0th index of arr
//     cout<< *arr<<endl; // dereferencing 0th index value.
//     cout<< *arr<<endl; // similar to arr[0]
//     cout<< *(arr + 1)<<endl; // since contigous memory location | similar to arr[1]
//      cout<< *(arr + 2)<<endl;//arr[3]    
//      return 0;
// }


//passing array by referernce to the functions:
// void func1(int arr[]){
//    arr[0] = 100;
// }
// void func2(int *ptr){
//      ptr[0] = 100;
// }

// int main(){
//     int arr[] = {2,5,3,4};
//     func1(arr);//passing array name is equiuvalent to passing pointer that points of 0th index of arr
//     cout<<arr[0]<<endl;
//        func2(arr);
//     cout<<arr[0]<<endl;
//     return 0;
// }


// //printing array elements by passing through reference to a function:
// void printArr(int arr[],int n){
// for(int i=0; i<n; i++){
//     cout<<arr[i] <<" ";
// }
//  cout<<endl;
// }

// void printArr2(int *ptr,int n){ // since array name pass karnese pointer recieve hota which points to 0th index of arr
// for(int i=0; i<n; i++){
//     cout<< *(ptr+i) <<" "; //dereferencing the 0th index + i (here i starts from 0 then add i) 
// }
//    cout<<endl;
// }

// // NOTE: ptr[i]   is same as *(ptr + i)
// void printArr3(int *ptr,int n){
//      cout<<" ptr[i] also do's the same as *(ptr+1) and arr[i] -> " ;
// for(int i=0; i<n; i++){
//     cout<<ptr[i] <<" ";
// }
// }
// //therefore arr[i] aur ptr[i] dono internally same mechanism follow karte hain.

// int main(){
//     int n;
//     int arr[] = {4,3,7,2};
//     n = sizeof(arr) / sizeof(int);
//     printArr(arr,n);
//     printArr2(arr,n);
//     printArr3(arr,n);
//     return 0;
// }

