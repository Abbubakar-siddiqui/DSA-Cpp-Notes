#include<iostream>
using namespace std;
// int main(){
// int a = 25;
// cout<< a <<endl;
// int *ptr = &a;
// int **pptr = &ptr;
// cout<<&a <<" = "<<ptr<<endl; //address of a
// cout<<pptr<<endl; //address of ptr
// cout<<*ptr<<endl; // value of ptr is accessed (since *(dereference) is used)
// *ptr+=5; // modified (since dereference is used)
// cout<<"by dereferencing = "<< *ptr <<endl;   
// cout<<"a = "<< a <<endl; // modified in original not in a copy of variable(since *)

// int *nptr = NULL; // null pointer (points to nothing!)
// cout<< nptr <<endl; // stores address as zero 

// return 0;
// }


// passing parameters by value :(call by value)

// void changeA(int a){
//  a = 20;
//  cout<< a<< endl;
// }

// int main(){
//  int a = 10;
//  changeA(a);

//  cout<<a<<endl;
//     return 0;
// }


// passing parameter by referemce using pointer variable:
// void changeA(int *ptr){
//     *ptr = 20;//derefernce kare yani location ki value ku access kare!
//     cout<< *ptr <<endl;
// }

// int main(){
//     int a = 10;
//     changeA(&a);

//     cout<<a <<endl;
//     return 0;
// }


// passing parameter by referemce using reference variable:
// void changeA(int &proxy){ // 
//     proxy = 20;//a ke location store hai "proxy" me name kuch bhi hosakta refence variable ka !
//     cout<< proxy <<endl;
// }

// int main(){
//     int a = 10;
//     changeA(a);

//     cout<<a <<endl;
//     return 0;
// // }

// int main(){
//     int x = 10, y = 20;
//     int *ptr1 = &x , *ptr2 = &y;
//     ptr2 = ptr1;// now ptr2 points to x's address 
//     cout<<ptr1 <<" = "<<ptr2 <<" = "<<&x <<endl;
//     return 0;
// }

// int main(){
//     int *ptr = 0;// same as NULL pointer ! it dont give error.
//     cout<< ptr <<endl;
//     return 0;
// }


