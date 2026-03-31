/**
 * =================================================================================
 * PATTERN LOGIC - REVISION NOTES (Striver's Series)
 * =================================================================================
 * Topic: Patterns -> Nested Loops
 * * 1. OUTER LOOP: Count the number of lines.
 * (Focus on the total number of rows to be printed).
 * * 2. INNER LOOP: Focus on the columns, & connect them somehow to the rows.
 * (Identify the relationship between row number 'i' and column number 'j').
 * * 3. PRINT: Print the characters/numbers inside the inner for loop.
 * (Use 'cout' inside the inner loop to print elements horizontally).
 * * 4. SYMMETRY [Optional]: Observe symmetry.
 * (Check if the pattern repeats or reflects to simplify the coding logic).
 * =================================================================================
 */

//############ Problem 1 => Print Perfect Square ######################

#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 0; i < 4; i++) { 
    for(int j = 0; j <4; j++) {   
        cout << "*";
    }
    cout << endl;                 
}
    return 0;
}

//############ Problem 2 => Print Perfect Square by taking input from user ######################

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int i = 0; i < n; i++) { 
    for(int j = 0; j <n; j++) {   
        cout << "*";
    }
    cout << endl;                 
}
    return 0;
}

/*  Print the pattern 
*
**
***
****   */

#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i = 0; i < 4; i++) { 
    for(int j = 0; j <=i; j++) {   
        cout << "*";
    }
    cout << endl;                 
}
    return 0;
}

/* Print this pattern 
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i = 0; i < 5; i++) { 
    for(int j = 0; j <=i; j++) {   
        cout << j+1 << " ";
    }
    cout << endl;                 
}
    return 0;
}


/* Print  this pattern
A 
A B
A B C
A B C D
A B C D E
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i = 0; i < 5; i++) { 
        char ch='A';
    for(int j = 0; j <=i; j++) {   
        cout << ch<< " ";
        ch=ch+1;
    }
    cout << endl;                 
}
    return 0;
}

/* Print this by taking the input from the user..
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin>> n ;
    for(int i = 1; i <= n; i++) { 
        for(int j = 1; j <=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}


// Print the Inverted Right Triangle by taking n by user...
/* 

* * * * * * 
* * * * * 
* * * *
* * *
* * 
*

 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin>> n ;
    // for(int i = n; i >= 1; i--) { 
    //     for(int j = 1; j <=i; j++){
    for(int i=0;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout << "* ";
        } 
        cout << endl;
    }
    return 0;
}

// Print the Inverted  Triangle by taking n by user...
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin>> n ;
            for (int i = 0; i < n; i++) {
            for (int j = 0; j < n -i - 1; j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
    return 0;
};


// #################    Other Approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin>> n ;
            //for (int i = n; i >= 1; i--) {
            //for (int j = 0; j < n - i; j++) {
            for(int i = 0; i < n; i++){
                for(int j=0;j<i;j++){
                cout << " ";
            }
            //for (int j = 0; j < 2 * i - 1; j++) {
            for (int j = 0; j<2*n - (2*i + 1); j++) {
                cout << "*";
            }
            cout << endl;
        }
    return 0;
};

/*  Print this pattern
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin>> n ;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
            }
            cout << endl;
        }
        for(int i=n-1; i>=1; i--){
            for(int j=1; j<=i; j++){
                cout<<"* ";
            }
            cout << endl;
        }
};

// #########################  Other Approach

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin>> n ;
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n){
            stars = 2 * n - i;
        }
        for(int j=1;j<=stars;j++){
            cout<< "* ";
        }
        cout << endl;
    }   
    return 0;
};


/* Print this pattern
1                 1 
1 2             2 1 
1 2 3         3 2 1 
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin>> n ;
            for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<< j<<" ";
            }
            for(int j=1;j<=2*(n-i);j++){
                cout << "  ";
            }
            for(int j=i;j>=1;j--){
                cout<< j<<" ";
            }
            cout <<endl;
        }
    return 0;
};

// Input: n = 4 print Hollow Square
/* Output:
* * * *
*     *
*     *
* * * *    */

#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "* "; 
            }
            else {
                cout << "  "; 
            }
            
        } 
        cout << endl; 
    }
    return 0;
}