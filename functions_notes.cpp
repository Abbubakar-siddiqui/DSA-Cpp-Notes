#include<iostream>
#include<cmath>
using namespace std;

/*
========================================================
                FUNCTIONS - NOTES (C++)
========================================================
Topics covered:
1. Basic function calling another function
2. Forward declaration (declaration before main, definition after)
3. Function with parameters/arguments - sum
4. Default parameter values
5. Function with parameters - product
6. void function - even/odd check
7. Function with return value - factorial
8. void function - prime check (single number)
9. Function calling another function - Binomial coefficient (uses factorial)
10. Function Overloading (same name, different parameters)
11. Function calling another function - all primes from 2 to n
12. Function with 2 params - sum of digits
13. Function with 2 params - (a+b)^2 using pow()
14. void function with 3 params - largest of 3 numbers
15. char function - next alphabet (with wraparound z->a)
16. void function - check palindrome (digit-by-digit reversal)
17. Two functions together - reverse a number + check palindrome
========================================================
NOTE: Uncomment ONE section at a time (function + its main) to run it.
========================================================
*/

// ---------------------------------------------------
// 1. BASIC FUNCTION CALLING ANOTHER FUNCTION
// ---------------------------------------------------
// void h(){
//     cout<<"hello \n";
// }
// void assistant(){
//     h();
//     cout<<"work done!";
// }
// int main(){
//     assistant();
//     return 0;
// }


// ---------------------------------------------------
// 2. FORWARD DECLARATION
// ---------------------------------------------------
// NOTE: declaration is given before main() so the function
// can be used before its actual definition (which comes
// after main() here).
//
// Forward declaration:
// void h();//declaration , we give it before main funtion so that we can use them before or after main function.

// void id();//declaration
// int main(){
//     id();
//     return 0;
// }
// void id(){ //defiination
//     cout<<"062\n";
// }


// ---------------------------------------------------
// 3. FUNCTION WITH PARAMETERS/ARGUMENTS - sum
// ---------------------------------------------------
// a,b in the function are PARAMETERS.
// 2,4 passed when calling are ARGUMENTS.
//
// int sum(int a,int b);// a,b are parameters

// int main(){
//   cout<< "The sum is :"<< sum(2,4); // 2,4 are arguments
//     return 0;
// }
// int sum(int a,int b){
//    int sum = a + b;
//     return sum;
// }


// ---------------------------------------------------
// 4. DEFAULT PARAMETER VALUES
// ---------------------------------------------------
// NOTE: default parameter must come after non-default ones
// -- "first can't be default".
//
// int sum(int a,int b = 1){ // b is default parameter "first cant be default "
//    int sum = a + b;
//     return sum;
// }
// int main(){
//   cout<< "The sum is :"<< sum(2); //by default another value will be 1 
//     return 0;
// }


// ---------------------------------------------------
// 5. FUNCTION WITH PARAMETERS - product
// ---------------------------------------------------
// int prod(int a,int b){
//    int p = a*b;
//     return p;
// }
// int main(){
//     int x,y;
//     cout<< "enter x:";
//     cin>>x;
//      cout<< "enter y:";
//     cin>>y;
//     cout<<"product is :" << prod(x,y);
// }


// ---------------------------------------------------
// 6. VOID FUNCTION - even/odd check
// ---------------------------------------------------
// void eve_odd(int n){
//     if(n%2 == 0){
//         cout<<n << " is even";
//     }
//     else{
//         cout<<n << " is odd";
//     }
// }
// int main(){
//     int x;
//      cout<< "enter x:";
//      cin>>x;
//      eve_odd(x);
// }


// ---------------------------------------------------
// 7. FUNCTION WITH RETURN VALUE - factorial
// ---------------------------------------------------
// int fact(int n){
//     int f=1;
//        if(n==0 || n==1){
//         return 1;
//        }
//        else{
//         for(int i=1;i<=n; i++){
//             f = f * i;
//         }
//         return f;
//        }
// }
// int main(){
//     int x;
//      cout<< "enter x:";
//      cin>>x;
//      cout<<"factorial is : " <<fact(x);
// }


// ---------------------------------------------------
// 8. VOID FUNCTION - prime check (single number)
// ---------------------------------------------------
// void prime(int n){
//  bool isPrime = true;
// for(int i=2; i<=(n-1); i++){
//     if(n % i == 0){
//     isPrime = false;
//     break;
// }
// }
// if(isPrime){
//     cout << n << " is a prime number!";
// }
// else{
//     cout << n << " is not a prime number!";  
// }
// }
// int main(){
//     int x;
//      cout<< "enter x:";
//      cin>>x;
//      prime(x);
//  return 0;
// }


// ---------------------------------------------------
// 9. FUNCTION CALLING ANOTHER FUNCTION - Binomial coefficient
// ---------------------------------------------------
// Formula: nCr = n! / ((n-r)! * r!)
// bi() reuses fact() internally instead of rewriting factorial logic.
//
// int fact(int n){
//     int f=1;
//        if(n==0 || n==1){
//         return 1;
//        }
//        else{
//         for(int i=1;i<=n; i++){
//             f = f * i;
//         }
//         return f;
//        }
// }
// int bi(int n,int r){
//    int B = (fact(n)) / (fact(n-r)*fact(r));
//    cout<<" Binomial coefficient is:" << B;
// }
// int main(){
//     int x,y;
//      cout<< "enter x:";
//      cin>>x;
//       cout<< "enter y:";
//      cin>>y;
//      bi(x,y);
//      return 0;
//  }


// ---------------------------------------------------
// 10. FUNCTION OVERLOADING (same name, different parameters)
// ---------------------------------------------------
// Same function name "sum" works with 2 ints, 3 ints, or
// 2 doubles -- compiler picks the right version based on
// the arguments passed.
//
// Funtiion Overloading:
// int sum(int a,int b){  
//    int sum = a + b;
//     return sum;
// }
// int sum(int a,int b,int c){  
//    int sum = a + b + c;
//     return sum;
// }
// int sum(double a,double b){  
//    double sum = a + b;
//     return sum;
// }
// int main(){
//   cout<< "The sum is :"<< sum(2,4) << endl; //by default another value will be 1 
//   cout<< "The sum is :"<< sum(2,4,6) << endl; //by default another value will be 1 
//   cout<< "The sum is :"<< sum(2.5,4.5) << endl; //by default another value will be 1 
//     return 0;
// }


// ---------------------------------------------------
// 11. FUNCTION CALLING ANOTHER FUNCTION - all primes from 2 to n
// ---------------------------------------------------
// isPrime() is a helper function returning bool, reused
// inside allPrime() to build the full list.
//
// bool isPrime(int n){
//   if(n == 1){
//     return false;
//   }

//   for(int i=2; i<=n-1; i++){
//     if(n%i == 0){
//         return false;
//      }
//   }

//   return true;
// }

// void allPrime(int n){
//     //all prime ->from 2 to n:
//     for(int i=2; i<=n; i++){
//         if(isPrime(i)){
//             cout<<i <<" ";
//         }
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
// cout<<"enter a number:";
// cin>>n;
// allPrime(n);

//     return 0;
// }


// ---------------------------------------------------
// 12. FUNCTION WITH 2 PARAMS - sum of digits
// ---------------------------------------------------
// int sum(int n,int a){
//   int s = 0;
//   for(int i=1; i<=n; i++){
//     int j = (a/i) % 10;
//      s+=j;
//   }
//    return s;
// }
// int main(){
//   int n,a;
//      cout<< "enter noof digits:";
//      cin>>n;
//       int x;
//      cout<< "enter a number:";
//      cin>>a;
//      cout<<"The sum of digits is : "<<sum(n,a);
//     return 0;
// }


// ---------------------------------------------------
// 13. FUNCTION WITH 2 PARAMS - (a+b)^2 using pow()
// ---------------------------------------------------
// Formula used: a^2 + b^2 + 2ab = (a+b)^2
//
// int solve(int a,int b){
//     int s = pow(a,2) + pow(b,2) + 2*a*b;
//     return s;
// }
// int main(){
//   int a,b;
//      cout<< "enter a :";
//      cin>>a;
//       int x;
//      cout<< "enter b :";
//      cin>>b;
//      cout<<"The solution is : "<<solve(a,b);
//     return 0;
// }


// ---------------------------------------------------
// 14. VOID FUNCTION WITH 3 PARAMS - largest of 3 numbers
// ---------------------------------------------------
// void largest(int a, int b, int c){
//     if(a>b && a>c ){
//         cout<< a <<" is greatest! ";
//     }
//     else if(b>a && b>c){
//         cout<<b <<" b is greatest!";
//     }
//     else{
//         cout<<c <<" is greatest!";
//     }
// }
// int main(){
//     int a,b,c;
//     cout<<"enter a , b , c :";
//     cin>>a >> b >>c ;
//     largest(a,b,c);
//     return 0;
// }


// ---------------------------------------------------
// 15. CHAR FUNCTION - next alphabet (with wraparound z->a)
// ---------------------------------------------------
// char next_alpha(char x){
//     if(x == 'z'){
//         x = 'a';
//     }
//     else{
//         ++x ;
//     }
//     return x;
// }
// int main(){
//     char ch;
//     cout<<"enter a character: ";
//     cin>>ch;
//     cout<< next_alpha(ch);
// }


// ---------------------------------------------------
// 16. VOID FUNCTION - check palindrome (digit-by-digit reversal)
// ---------------------------------------------------
// LOGIC: p1 and p2 are powers of 10 built manually with
// inner loops, used to extract a digit (j) from one end
// and place it at the correct position in 'rev'.
//
// void palindrome(int n,int a){
//  cout<< "The number is : " << a << endl;
//  int rev = 0;
//  for(int i=1; i<=n; i++){
//     int p1 = 1;
//     for(int x=0; x<i-1; x++){
//          p1 *= 10;
//     }
//     int j = (a / p1) % 10;
    
//     int p2 = 1;
//     for(int x=0; x<n-i; x++) {
//         p2 *= 10;
//     }
//     rev = rev + j * p2;
// }
//  cout<< "The reverse of the number is : " << rev << endl;
//  if(a == rev){
//     cout<< "The number is a palindrome!" << endl;
//  }
//  else{
//     cout<< "The number is not a palindrome!" << endl;
//  }
// }

//   int main(){
//   int n,a;
//      cout<< "enter noof digits:";
//      cin>>n;
//       int x;
//      cout<< "enter a number:";
//      cin>>a;
//     palindrome(n,a);

//     return 0;
// }


// ---------------------------------------------------
// 17. TWO FUNCTIONS TOGETHER - reverse a number + check palindrome
// ---------------------------------------------------
// Simpler/cleaner version of section 16: reverse() uses the
// classic while-loop digit extraction, and isPalindrome()
// just compares the number with its reverse.
//
// int reverse(int n)
// {int res=0;
//     while(n>0){
//  int lastDig = n%10;
//  res = res*10 + lastDig;
//  n=n/10;}
//  return res;
// }
// bool isPalindrome(int num)
// { int revNum = reverse(num); 
//     return num == revNum;
// }
// int main(){
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     if(isPalindrome(num)){
//         cout<<num<<" is a palindrome number."<<endl;
//     } else {
//         cout<<num<<" is not a palindrome number."<<endl;
//     }

//     return 0;
// }
