#include <iostream>
using namespace std;

/*
========================================================
        CONDITIONAL STATEMENTS - NOTES (C++)
========================================================
Topics covered:
1. if-else - voting eligibility check
2. if-else - compare two numbers
3. if-else - even/odd check
4. if-else if - grading system
5. if-else if - income tax slabs
6. if-else if - greatest of 3 numbers
7. Ternary operator
8. switch-case - day of week
9. if-else - leap year check
10. Ternary operator - another example
11. Armstrong number check
========================================================
NOTE: Uncomment ONE section at a time in main() to run it.
========================================================
*/

int main(){

// ---------------------------------------------------
// 1. IF-ELSE - voting eligibility
// ---------------------------------------------------
// int age ;
// cout << "enter the age :";
// cin >>age;
// if(age>=18){
//     cout << "can vote";
// }
// else{
//     cout << "cannot vote";
// }


// ---------------------------------------------------
// 2. IF-ELSE - compare two numbers
// ---------------------------------------------------
// int a , b;
// cout<<"enter a ," <<"enter  b:";
// cin>>a >>b;
// if(a>b){
//     cout<<"a is greater!";
// }
// else{
//     cout<<"b is greater";
// }


// ---------------------------------------------------
// 3. IF-ELSE - even/odd check
// ---------------------------------------------------
// int n;
// cout<<"enter a number:";
// cin>>n;
// if(n % 2 == 0){
//     cout<<"even";
// }
// else{
//     cout<<"odd";
// }


// ---------------------------------------------------
// 4. IF-ELSE IF - grading system
// ---------------------------------------------------
// else if:

// int marks;
// cout<<"enter marks:";
// cin>>marks;
// if(marks >= 90){
//     cout<<"Grade = A";
// }
// else if(marks >=80){
//     cout<<"Grade = B";
// }
// else{
//     cout<<"Grade = C";
// }


// ---------------------------------------------------
// 5. IF-ELSE IF - income tax slabs
// ---------------------------------------------------
// tax1 = 0% slab, tax2 = 20% slab, tax3 = 30% slab
//
// float i; // i = income
// cout<<"Enter your income:";
// cin>>i;
// float tax1, tax2, tax3;
// tax1 = 0;
// tax2 = (i)*20/100;
// tax3 = (i)*30/100;
// if(i < 500000){
//     cout<<"0 percent tax\n"<<endl;
//     cout<<tax1;
// }
// else if(i > 500000 &&  i < 1000000){
//     cout<<"20 percent tax\n";
//     cout<<tax2;
// }
// else if(i > 1000000){
//     cout<<"30 percent tax";
//     cout<<tax3;
// }
// else{
//     cout<<"Invalid income!";
// }


// ---------------------------------------------------
// 6. IF-ELSE IF - greatest of 3 numbers
// ---------------------------------------------------
// int x, y, z;
// cin>>x >>y >>z;
// if(x>y && x>z){
//     cout<<"x is greatest";
// }
// else if(y>x && y>z){
//     cout<<"y is greatest";
// }
// else{
//     cout<<"z is greatest";
// }


// ---------------------------------------------------
// 7. TERNARY OPERATOR
// ---------------------------------------------------
// SYNTAX:  condition (if true runs state.. 1) (if false runs.. state.. 2) ? statement 1 : statement 2;
// bool isAdult;
// int age = 19;
// const char* status;
// isAdult = (age>=18)? true : false;
// status = (age>=18) ? "is adult" : "not adult";
// cout<<status<<endl;
// cout<<isAdult;


// ---------------------------------------------------
// 8. SWITCH-CASE - day of week
// ---------------------------------------------------
// NOTE: break is important -> without it, execution
// "falls through" to the next case
//
//SWITCH CASE:
// int day;

// cout<<"Enter a day (1-7): ";
// cin>>day;

// switch(day){
//     case 1:
//         cout<<"Monday";
//         break;
//     case 2:
//         cout<<"Tuesday";
//         break;
//     case 3:
//         cout<<"Wednesday";
//         break;
//     case 4:
//         cout<<"Thursday";
//         break;
//     case 5:
//         cout<<"Friday";
//         break;
//     case 6:
//         cout<<"Saturday";
//         break;
//     case 7:
//         cout<<"Sunday";
//         break;
//     default:
//         cout<<"Invalid day!";
// }


// ---------------------------------------------------
// 9. IF-ELSE - leap year check
// ---------------------------------------------------
// NOTE: this version only checks %4==0 (basic version,
// not the full leap year rule with %100 and %400)
//
// int year;
// cout<<"enter year:";
// cin>>year;
// if(year%4==0){
//     cout<<"is a leap year!\n";
//     cout<<year;
// }
// else{
//     cout<<"it is not a leap year!\n";
//     cout<<year;
// }


// ---------------------------------------------------
// 10. TERNARY OPERATOR - another example
// ---------------------------------------------------
// int a = 63, b = 63;
// bool x = (a < b) ? true : false;
// int y = (a > b) ? a : b;
// cout << x << "," << y <<endl;


// ---------------------------------------------------
// 11. ARMSTRONG NUMBER CHECK
// ---------------------------------------------------
// A number is Armstrong if sum of cubes of its digits
// equals the number itself. e.g. 153,370,371,407
//
// LOGIC to extract 3 digits:
// d1 = hundreds digit -> n/100
// d2 = tens digit     -> (n % 100) / 10
// d3 = units digit    -> n % 10
//
//ARMSTRONG NUMBER:

// int n; //153,370,371,407 are armstrong
// cout<<"enter a 3 digit number:";
// cin>>n;
// int d1, d2, d3;
// d1 = (n/100);
// d2 = (n % 100) / 10;
// d3 =  (n % 10);
// cout << d1 <<endl;
// cout << d2 <<endl ;
// cout << d3 <<endl;
// int arm;
// arm = ((d1 * d1 * d1) + (d2 * d2 * d2) + (d3 * d3 * d3));
// cout<< arm <<endl;
// if(n == arm){
//     cout<<"Arstrong!\n";
// }
// else{
//     cout<<"Not Armstrong!";
// }

return 0;
}
