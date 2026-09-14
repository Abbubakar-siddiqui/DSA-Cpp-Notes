// #include<iostream>
// #define PI 3.14
// using namespace std;
// int main(){
// cout<<"Bismillah\n"
// <<"Allah ke nam se shuru karte hain\n";
// cout<<PI;
//     return 0;
// }


/*
========================================================
        VARIABLES & DATATYPES - NOTES (C++)
========================================================
Topics covered:
1. Basic cout + #define macro (PI)
2. Pattern printing + sizeof() + cin (basic input)
3. float variables - price calculation with GST
4. float variables - Simple Interest calculation
5. const, type casting (implicit vs explicit), bool/char conversions
6. Arithmetic operators: +, -, *, /, %
7. Unary operators: ++ , -- (pre & post increment/decrement)
8. Assignment operators: =, +=, -=, *=, /=, %=
9. Relational operators: ==, !=, <, >, <=, >=
10. Logical operators: &&, ||, !
========================================================
NOTE: Uncomment ONE section at a time in main() to run it.
========================================================
*/


// ---------------------------------------------------
// 1. BASIC COUT + #define MACRO
// ---------------------------------------------------
// #define PI creates a constant that gets replaced
// everywhere in the code at compile time (no memory used)
//
// #include<iostream>
// #define PI 3.14
// using namespace std;
// int main(){
// cout<<"Bismillah\n"
// <<"Allah ke nam se shuru karte hain\n";
// cout<<PI;
//     return 0;
// }


// ---------------------------------------------------
// 2. PATTERN PRINTING + sizeof() + BASIC INPUT
// ---------------------------------------------------
// #include<iostream>
// using namespace std;    
// int main(){
//     cout<<"****\n"<<"***\n"<<"**\n"<<"*\n";
//     cout<<"AND\n";
//      cout<<"****\n***\n**\n*\n";
//      int q = 25;
//      cout<<q<<endl;
//      cout<<"size of int is :" <<sizeof(int)<<endl;
//      int age;
//      cout<<"enter age:";
//      cin>>age;
//      cout<<"Age is :" <<age<<endl;
//      int a,b,sum;
//      cout<<"enter a:";
//      cin>>a;
//      cout<<"enter b:";
//      cin>>b;
//     sum = a + b;
//     cout<<"the sum is:" <<sum<<endl;
//     return 0;
// }

// name of variables are known as identifiers.


// ---------------------------------------------------
// 3. FLOAT VARIABLES - price calculation with GST
// ---------------------------------------------------
// GST formula used: gst = total * 18/100 (18% GST)
//
//  #include<iostream>
//  using namespace std;
// int main(){
// float pencil, pen, eraser, total,gst;
// cout<<"enter prices of pencil, pen and eraser:";
// cin>>pencil>>pen>>eraser;
// cout<<"pencil: "<<pencil<<endl;
// cout<<"pen: "<<pen<<endl;
// cout<<"eraser: "<<eraser<<endl;
// total  = pencil+eraser+pen;
// gst = (total) * 18/100;
// cout<<"total prise of items:" <<total<<endl;
// cout<<" Prise of items with gst:" <<gst<<endl;
// return 0;
// }


// ---------------------------------------------------
// 4. FLOAT VARIABLES - Simple Interest calculation
// ---------------------------------------------------
// Formula: SI = (Principal * Rate * Time) / 100
//
// #include<iostream>
// using namespace std;
// int main(){
//     float p,r,t;
// cout<<"enter principal, rate ,time:\n";
// cin>>p>>r>>t;
// cout<<"principal:"<<p<<endl;
// cout<<"rate:"<<r<<endl;
// cout<<"time:"<<t<<endl;
// float SI;
// SI = (p*r*t)/100;
// cout<<"simple interest="<<SI<<endl;
// return 0;
// }


#include<iostream>
using namespace std;
int main(){

// ---------------------------------------------------
// 5. const, TYPE CASTING (implicit vs explicit),
//    bool/char conversions
// ---------------------------------------------------
//     const int a = 25;
//     cout << a << endl;
// cout << (10 / 3.0) << endl; // implicit
// cout << (10 / 3) << endl; 
// cout << ('A' + 1) << endl;

// cout<<"explicit\n";
// cout << ((int)10 / 3.0) << endl; // explicit
// cout << ((float)10 / 3) << endl; 
// cout << (char)('A') << endl; 
// cout << (int)('A') << endl; 
// cout << (char)('A' + 1) << endl; 
// cout << ((bool)3)<< endl; // non zero saare convert hojate hai 1 me 
// cout << ((bool)3 + 4) << endl; 
// cout << (bool)(-5) << endl; 
// cout << (bool)(0) << endl; 
// cout << (bool)(5-5) << endl; 
// cout << (23.5 + 2 +'A') << endl; 

// ---------------------------------------------------
// 6. ARITHMETIC OPERATORS: +, -, *, /, %
// ---------------------------------------------------
// // arithmetic operators: +, -, *, /, %
// int x = 10, y = 3;
// cout << "x + y = " << (x + y) << endl;
// cout << "x - y = " << (x - y) << endl;
// cout << "x * y = " << (x * y) << endl;
// cout << "x / y = " << (x / y) << endl;
// cout << "x % y = " << (x % y) << endl;

// ---------------------------------------------------
// 7. UNARY OPERATORS: ++ , -- (pre vs post)
// ---------------------------------------------------
// PRE (++f)  -> value changes FIRST, then used
// POST (f++) -> value used FIRST, then changes
//
//unary operators: ++ , --
// int f = 3;
// int j = 5;
// int a = f++;
// int b = ++f;
// int c = j--;
// int d = --j;

// cout<<a<<endl;
// cout<<b<<endl;
// cout<<c<<endl;
// cout<<d<<endl;

// ---------------------------------------------------
// 8. ASSIGNMENT OPERATORS: =, +=, -=, *=, /=, %=
// ---------------------------------------------------
// assignment operators: =, +=, -=, *=, /=, %=
// int x = 10;
// int y = 5;
// x += y; // x = x + y
// cout << x << endl;
// x -= y; // x = x - y
// cout << x << endl;
// x *= y; // x = x * y
// cout << x << endl;
// x /= y; // x = x / y
// cout << x << endl;
// x %= y; // x = x % y
// cout << x << endl;

// ---------------------------------------------------
// 9. RELATIONAL OPERATORS: ==, !=, <, >, <=, >=
// ---------------------------------------------------
// output hamesha bool hota hai -> 1 (true) ya 0 (false)
//
// relational operators: ==, !=, <, >, <=, >=
// int x = 10;
// int y = 5;
// cout << (x == y) << endl; // 0 (false)
// cout << (x != y) << endl; // 1 (true)
// cout << (x < y) << endl; // 0 (false)
// cout << (x > y) << endl; // 1 (true)
// cout << (x <= y) << endl; // 0 (false)
// cout << (x >= y) << endl; // 1 (true)

// ---------------------------------------------------
// 10. LOGICAL OPERATORS: &&, ||, !
// ---------------------------------------------------
// logical operators: &&, ||, !
// int a = 5;
// int b = 10;
// bool c = true;
// cout << (a<b && b>a) << endl; // 1 (true)
// cout << (a<b || b<a) << endl; // 1 (true)
// cout << (!c) << endl; // 0 (false) // jo bhi answer ana chahiye uske opposite answer dega

//     return 0;

// }
