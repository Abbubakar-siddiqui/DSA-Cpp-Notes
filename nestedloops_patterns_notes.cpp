#include<iostream>
using namespace std;

/*
========================================================
        NESTED LOOPS - PATTERN PRINTING NOTES (C++)
========================================================
Topics covered:
1. Number square (each row repeats row number, n times)
2. Right triangle of stars (increasing)
3. Right triangle of stars (decreasing, printed top to bottom)
4. Right triangle of stars (decreasing count per row)
5. Right triangle of numbers (1 to i each row)
6. Triangle of continuous characters (A,B,C... not reset per row)
7. Hollow square/rectangle (border only)
8. Hollow square variant (full top/bottom rows, border sides)
9. Right-aligned triangle (spaces then stars)
10. Right triangle of continuous numbers (1,2,3... not reset per row)
11. Diamond/Rhombus pattern (increasing then decreasing triangle)
12. Butterfly pattern (stars-spaces-stars, increasing then decreasing)
13. Alternating 1/0 triangle (toggle boolean each print)
14. Right-angled triangle shifted with spaces (inverted style)
15. Number pyramid (down then up per row, e.g. 3 2 1 2 3)
========================================================
NOTE: Uncomment ONE section at a time in main() to run it.
========================================================
*/

int main(){

// ---------------------------------------------------
// 1. NUMBER SQUARE - each row repeats the row number, n times
// ---------------------------------------------------
//  int n;
//  cout<< "enter n:";
//  cin>> n;
//     for(int i=1; i<=n; i++){
//         int val = i;
//         for(int j=1; j<=n; j++)
//         cout << val <<" ";
//          cout<< endl;
//     }


// ---------------------------------------------------
// 2. RIGHT TRIANGLE OF STARS - increasing (row i has i stars)
// ---------------------------------------------------
//  int n;
//  cout<< "enter n:";
//  cin>> n;
//  for(int i=1; i<=n; i++){
//         char val = '*'; 
//      for(int j=1; j<=i; j++){
//          cout << val << " ";
//      }
//          cout<< endl;
//  }



// ---------------------------------------------------
// 3. RIGHT TRIANGLE OF STARS - decreasing (outer loop goes n down to 1)
// ---------------------------------------------------
// First row prints n stars, next row n-1 stars, and so on.
//
//  int n;
//  cout<< "enter n:";
//  cin>> n;
//  for(int i=n; i>=1; i--){
//      char val = '*';
//      for(int j = i; j>=1; j--){
//         cout << val <<" ";
//      } 
//      cout<< endl;
//  }



// ---------------------------------------------------
// 4. RIGHT TRIANGLE OF STARS - decreasing count per row (n-i+1)
// ---------------------------------------------------
// Same visual result as section 3, different way of counting:
// as i increases from 1 to n, star count (n-i+1) decreases.
//
//  int n;
//  cout<< "enter n:";
//  cin>> n;
//  for(int i=1; i<=n; i++){
//     char val = '*';
//     for(int j=1; j<=(n-i+1); j++){
//         cout<< val <<" ";
//     } 
//      cout<< endl;
//  }



// ---------------------------------------------------
// 5. RIGHT TRIANGLE OF NUMBERS - row i prints 1 to i
// ---------------------------------------------------
//  int n;
//  cout<< "enter n:";
//  cin>> n;
//  for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         cout<< j <<" ";
//     } 
//       cout<< endl;
//  }



// ---------------------------------------------------
// 6. TRIANGLE OF CONTINUOUS CHARACTERS (A,B,C... not reset each row)
// ---------------------------------------------------
// ch is declared OUTSIDE the outer loop, so it keeps
// incrementing across rows instead of resetting to 'A'.
// e.g. row1: A | row2: B C | row3: D E F ...
//
// int n;
// cout<< "enter n:";
// cin>> n;
// char ch = 'A';
//  for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//          cout<< ch <<" ";
//          ch++;
//     }
//       cout<< endl;
//  }



// ---------------------------------------------------
// 7. HOLLOW SQUARE / RECTANGLE - border only
// ---------------------------------------------------
// Print star only on the first row, last row, first column,
// or last column. Everywhere else, print a space.
//
// int n;
// cout<< "enter n:";
// cin>> n;
// char sp = ' ';
// char val = '*';
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//  if (i==1  || i==n ){
//     cout<< val << " ";
//  }       
//  else {

//     if (j == 1 || j == n)
//         cout << val << " ";
//     else
//         cout << sp << " ";
// }   
//     }
//      cout<< endl;
// }




// ---------------------------------------------------
// 8. HOLLOW SQUARE VARIANT - full top/bottom rows, star border on sides
// ---------------------------------------------------
// Slightly different structure than section 7, but same
// hollow-box idea: first/last row = all stars,
// otherwise just left+right border stars, space in between.
//
// int n;
// cout<< "enter n:";
// cin>> n;
// char sp = ' ';
// char val = '*';
// for(int i=1; i<=n; i++){
//    cout<< val<<" ";
// for(int j=1; j<=n-1; j++){
//     if(i == 1 || i == n){
//       cout<< val <<" ";
//     }
//     else{
//        cout<<sp<<" ";  
//     }
// }  
//    cout<< val<<endl;
// }
     

// ---------------------------------------------------
// 9. RIGHT-ALIGNED TRIANGLE - spaces then stars
// ---------------------------------------------------
// For each row: print (n-i) spaces first, then i stars.
// This shifts the triangle to the right so it looks
// right-aligned instead of left-aligned.
//
// int n;
// cout<< "enter n:";
// cin>> n;
// char sp = ' ';
// char val = '*';

// for(int i=1; i<=n; i++){
//     for(int j=1; j<=(n-i); j++){
//         cout<<sp<<" ";
//     } 
//      for(int k=1; k<=i; k++){
//         cout<<val<<" ";
//     }
//          cout<<endl;
// }
     

// ---------------------------------------------------
// 10. RIGHT TRIANGLE OF CONTINUOUS NUMBERS (not reset per row)
// ---------------------------------------------------
// val is declared OUTSIDE the outer loop, so numbering
// keeps increasing across rows instead of restarting at 1.
//
// int n;
// cout<< "enter n:";
// cin>> n;
// int val = 1;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         cout<<val <<" ";
//         val++;
//     }
//     cout<<endl;
// }




// ---------------------------------------------------
// 11. DIAMOND / RHOMBUS PATTERN - increasing then decreasing triangle
// ---------------------------------------------------
// Two separate loops: first builds the top half (increasing
// stars, 2*i-1 per row), second builds the bottom half
// (decreasing stars, 2*l-1 per row) -> together forms a diamond.
//
// int n;
// cout<< "enter n:";
// cin>> n;
// char sp = ' ';
// char val = '*';

// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n-i; j++){
//         cout<<sp <<" ";
//     }
//     for(int k=1; k<=(2*i-1); k++){
//         cout<< val<<" ";
//     }
//        cout<<endl;
// }
// for(int l=n; l>=1; l--){
//     for(int m=1; m<=n-l; m++){
//         cout<<sp<<" ";
//     }
//     for(int o =1; o<=(2*l-1); o++){
//          cout<< val<<" ";
//     }
//        cout<<endl;
// }


// ---------------------------------------------------
// 12. BUTTERFLY PATTERN - stars-spaces-stars, increasing then decreasing
// ---------------------------------------------------
// Top half: for each row, print i stars, then a middle gap
// of spaces (2*n-2*i), then i stars again -> widens each row.
// Bottom half: same idea but mirrored (x goes from n down to 1).
//
// int n;
// cout<< "enter n:";
// cin>> n;
// char sp = ' ';
// char val = '*';
// for(int i=1; i<=n; i++){
//    for(int j=1; j<=i; j++){
//     cout<<val <<' ';
//    }
//    for(int k=1; k<=(2*n-2*i); k++){
//     cout<<sp <<' ';
//    }   
//    for(int l=1; l<=i; l++){
//     cout<<val <<' ';
//    }
//    cout<<endl;
// }

// for(int x=n; x>=1; x--){
//    for(int j=1; j<=x; j++){
//     cout<<val <<' ';
//    }
//    for(int k=1; k<=(2*n-2*x); k++){
//     cout<<sp <<' ';
//    }   
//    for(int l=1; l<=x; l++){
//     cout<<val <<' ';
//    }
//    cout<<endl;
// }



// ---------------------------------------------------
// 13. ALTERNATING 1/0 TRIANGLE - toggle boolean each print
// ---------------------------------------------------
// 'a' starts true, and flips (!a) after every print,
// so each row alternates 1,0,1,0... (cout prints bool as 1/0)
//
// int n;
// cout<< "enter n:";
// cin>> n;
// bool a = true;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//          cout<< a << " ";
//          a = !a;
//     }
//     cout<<endl;
// }




// ---------------------------------------------------
// 14. RIGHT-ANGLED TRIANGLE SHIFTED WITH SPACES (inverted style)
// ---------------------------------------------------
// Outer loop runs n down to 1: each row prints (i-1) leading
// spaces (fewer spaces as i decreases), then a FIXED n stars.
//
// int n;
// cout<< "enter n:";
// cin>> n;
// char sp = ' ';
// char val = '*';
// for(int i=n; i>=1; i--){
//    for(int j=1; j<=i-1; j++){
//     cout<<sp <<' ';
//    }
//    for(int k=1; k<=n; k++){
//     cout<<val <<' ';
//    }   
//    cout<<endl;
// }



// ---------------------------------------------------
// 15. NUMBER PYRAMID - counts down then up per row (e.g. 3 2 1 2 3)
// ---------------------------------------------------
// For row i: print (n-i) leading spaces, then count DOWN
// from i to 1, then count UP from 2 to i -> symmetric numbers.
//
// int n;
// cout<< "enter n:";
// cin>> n;
// for(int i=1; i<=n; i++){
//    for(int j=n-i; j>=1; j--){
//     cout<<" " <<" ";
//    }
//    for(int k=i; k>=1; k--){
//     cout<<k <<" ";
//    }   
//    for(int l=2; l<=i; l++){
//     cout<< l <<" ";
//    }
//    cout<<endl;
// }

return 0;
}
