#include<iostream>
#include<cmath>
using namespace std;

/*
========================================================
                LOOPS - NOTES (C++)
========================================================
Topics covered:
1. for loop        - basic counting
2. for loop        - sum of first n numbers
3. while loop       - basic counting
4. while loop       - pattern printing
5. for loop        - reverse counting
6. while loop       - sum of digits (using reverse extraction)
7. while loop       - sum of ODD digits
8. do-while loop    - basic syntax
9. while loop       - break statement
10. do-while loop   - input validation (multiple of 10)
11. for loop        - continue statement
12. for loop        - Prime number check (basic)
13. for loop        - Prime number check (optimized using sqrt)
14. for loop        - Factorial of a number
15. for loop        - Table of a number
16. for loop        - Armstrong number check (using pow)
17. nested for loop - Print all primes from 2 to num
18. for loop        - Fibonacci series
========================================================
NOTE: Uncomment ONE section at a time in main() to run it.
========================================================
*/


int main(){

    // ---------------------------------------------------
    // 1. FOR LOOP - print numbers from 1 to n
    // ---------------------------------------------------
    // int n;
    // cout << "enter a number: ";
    // cin >> n;
    // for(int i = 1; i <= n; i++){
    //     cout << i << " ";
    // }


    // ---------------------------------------------------
    // 2. FOR LOOP - sum of first n natural numbers
    // ---------------------------------------------------
    // int num, sum = 0;
    // cout << "enter a number: ";
    // cin >> num;
    // for(int i = 1; i <= num; i++){
    //     sum += i;
    // }
    // cout << "sum = " << sum << endl;


    // ---------------------------------------------------
    // 3. WHILE LOOP - print numbers from 1 to 4
    // ---------------------------------------------------
    // int j = 1;
    // while(j < 5){
    //     cout << j << " ";
    //     j++;
    // }


    // ---------------------------------------------------
    // 4. WHILE LOOP - pattern printing
    // ---------------------------------------------------
    // int k = 1;
    // while(k < 5){
    //     cout << "* * * * \n";
    //     k++;
    // }


    // ---------------------------------------------------
    // 5. FOR LOOP - reverse counting (n down to 1)
    // ---------------------------------------------------
    // int n;
    // cout << "enter a number: ";
    // cin >> n;
    // for(int z = n; z >= 1; z--){
    //     cout << z << " ";
    // }


    // ---------------------------------------------------
    // 6. WHILE LOOP - sum of digits of a number
    // ---------------------------------------------------
    // LOGIC: (num / j) % 10 extracts digits one by one,
    // starting from the rightmost digit (j = 1, 10, 100...)
    //
    // int n, a, num;
    // int s = 0;
    // cout << "enter number of digits: ";
    // cin >> n;
    // cout << "enter a number: ";
    // cin >> num;
    // int i = 1;
    // int j = 1;
    // while(i <= n){
    //     a = (num / j) % 10;
    //     cout << a;              // prints digits in reverse order
    //     s = s + a;
    //     i++;
    //     j = j * 10;
    // }
    // cout << endl << "sum of all digits is: " << s << endl;


    // ---------------------------------------------------
    // 7. WHILE LOOP - sum of ODD digits of a number
    // ---------------------------------------------------
    // Same digit-extraction logic as above, but only adds
    // digits that are odd (a % 2 != 0)
    //
    // int n, a, num;
    // int s = 0;
    // cout << "enter number of digits: ";
    // cin >> n;
    // cout << "enter a number: ";
    // cin >> num;
    // int o = 0;
    // int i = 1;
    // int j = 1;
    // while(i <= n){
    //     a = (num / j) % 10;
    //     cout << a;
    //     if(a % 2 != 0){
    //         o = o + a;
    //     }
    //     i++;
    //     j = j * 10;
    // }
    // cout << endl << "sum of Odd digits of the number is: " << o;


    // ---------------------------------------------------
    // 8. DO-WHILE LOOP - basic syntax
    // ---------------------------------------------------
    // NOTE: do-while ALWAYS runs at least once,
    // even if the condition is false from the start.
    //
    // int val = 1;
    // do{
    //     cout << "bismillah ";
    // }
    // while(val >= 5);   // condition false, but still prints once


    // ---------------------------------------------------
    // 9. WHILE LOOP - break statement
    // ---------------------------------------------------
    // break -> exits the loop immediately when condition is met
    //
    // int val = 1;
    // while(val < 10){
    //     if(val == 7){
    //         break;
    //     }
    //     cout << val << ": alhamdulillah" << endl;
    //     val++;
    // }


    // ---------------------------------------------------
    // 10. DO-WHILE LOOP - input validation
    // ---------------------------------------------------
    // Keep asking until user enters a multiple of 10
    //
    // int n;
    // do{
    //     cout << "enter a number multiple of 10: ";
    //     cin >> n;
    //     if(n % 10 == 0){
    //         break;
    //     }
    //     cout << n << " is not a multiple of 10, please re-enter!" << endl;
    // }
    // while(true);


    // ---------------------------------------------------
    // 11. FOR LOOP - continue statement
    // ---------------------------------------------------
    // continue -> skips the rest of current iteration,
    // moves to the next one
    //
    // int m;
    // for(int i = 0; i < 5; i++){
    //     cout << "enter a number: ";
    //     cin >> m;
    //     if(m % 10 == 0){
    //         continue;      // skip printing if multiple of 10
    //     }
    //     cout << "you entered: " << m << endl;
    // }


    // ---------------------------------------------------
    // 12. PRIME CHECK - basic method (check till n-1)
    // ---------------------------------------------------
    // int n;
    // cout << "enter n: ";
    // cin >> n;
    // bool isPrime = true;
    // for(int i = 2; i <= n-1; i++){
    //     if(n % i == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if(isPrime){
    //     cout << n << " is prime \n";
    // }
    // else{
    //     cout << n << " is composite \n";
    // }


    // ---------------------------------------------------
    // 13. PRIME CHECK - optimized method (check till sqrt(n))
    // ---------------------------------------------------
    // WHY sqrt(n)?
    // If n has a factor greater than sqrt(n), it must also
    // have a corresponding factor SMALLER than sqrt(n).
    // So checking beyond sqrt(n) is redundant -> saves time.
    //
    // int n;
    // cout << "enter n: ";
    // cin >> n;
    // bool isPrime = true;
    // for(int i = 2; i <= sqrt(n); i++){
    //     if(n % i == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if(isPrime){
    //     cout << n << " is prime \n";
    // }
    // else{
    //     cout << n << " is composite \n";
    // }
  

    // ---------------------------------------------------
    // 14. FACTORIAL of a number
    // ---------------------------------------------------
    // 0! and 1! are both handled as special case = 1
    //
    //factorial:
//  int n;
//  cout << "enter a number:";
//  cin>> n;
//  int f = 1;
//  if(n == 0 || n == 1){
//     cout<<"Factorial is : 1";
//  }
//  else{
//  for(int i = 1 ; i <= n; i++){
//     f = f*i;
//  }
//  cout<<"Factorial is :" << f;
//  }


    // ---------------------------------------------------
    // 15. TABLE of a number (1 to 10)
    // ---------------------------------------------------
//table:

// int n,m;
//  cout << "enter a number:";
//  cin>> n;
//  for(int i = 1; i <=10; i++){
//     m = n*i;
//     cout<< m << endl; 
//  }



    // ---------------------------------------------------
    // 16. ARMSTRONG NUMBER (using pow, works for any digit count)
    // ---------------------------------------------------
    // LOGIC: extract each digit (m), raise it to power n
    // (n = total number of digits), sum them up in 'a',
    // then compare with original number.
    // round() is used because pow() returns a double.
    //
//armstrong:
// int n ,m, num;
// int a = 0;
// int j =1;
//  cout << "enter no of digits:";
//  cin>> n;
//  cout << "enter a number:";
//  cin>> num; 
//  for(int i = 1; i<=n; i++){
//     m = num / (1*j) % 10;
//    cout<< m << endl;
//    a += round(pow(m,n));
//    j = j * 10;
//  }
//  if(num == a){
//    cout << "yes it is armstrong  : " << a;
//  }
//   else{
//     cout << "it is not an armstrong number";
//   }


    // ---------------------------------------------------
    // 17. NESTED FOR LOOP - print all primes from 2 to num
    // ---------------------------------------------------
    // Outer loop -> goes through every number n from 2 to num
    // Inner loop -> checks if that n is prime (same basic
    // method as section 12, just wrapped in another loop)
    //
// int num;   // n -> numbers from 2 to num.
//   cout << "enter no of numbers:";
//   cin>> num;
//   for(int n = 2; n <= num; n++){
//     bool isPrime = true;
//   for(int i = 2; i <= n-1; i++){ // jis se ham remainder nikalenge (i) wo present number se yani(n) se chota rehna .
//     if(n % i == 0){
//       isPrime = false;
//       break;
//     }
//   }
//      if(isPrime){
//     cout<< n << " ";
//   }
// }


    // ---------------------------------------------------
    // 18. FIBONACCI SERIES
    // ---------------------------------------------------
    // LOGIC: start with first=0, sec=1.
    // Each next term (third) = first + sec.
    // Then slide the window forward: first = sec, sec = third.
    //
// int n;
// cout << "enter a number:";
// cin>> n; 
// int first = 0 ; 
// int sec = 1;
// cout<< first <<" " << sec <<" ";
//  for(int i = 2; i<n; i++){
//   int third = first + sec;
//   cout<< third << " ";
//   first = sec;
//   sec = third;
//  }
 
    return 0;
}
