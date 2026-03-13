#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "Navneet"<< endl;
    cout << "Navneet"<< endl;
    cout << "Navneet"<< endl;
    cout << "Navneet"<< endl;
    return 0;
}


// ###      What is a For Loop and Why is it Used? #################
/*
A for loop is a control structure in programming that allows you to execute a specific block of code repeatedly. It's especially useful when you want to perform the same task multiple times without duplicating your code.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    // int i;
    for (int i=1; i<=5;i++){
        cout << "Navneet"<< endl;
    }
    return 0;
}

// FOR LOOP: Use when you KNOW the exact number of iterations.
// Syntax: for(initialization; condition; increment)
// Example: Printing "Navneet" 5 times.

// ################  While loop ##########################

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1;
    while(i<=5){
        cout << "Navneet"<< endl;
        //i=i++;(Infinite Loop)
        i++;
    }
    return 0;
}

// WHILE LOOP: Use when the number of iterations is UNKNOWN.
// Logic: Keeps running as long as the condition is TRUE.
// Example: Keeping a user logged in until they click 'Logout'.


// #######  Concept of Do While loop ################

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=2;
    while(i<=1){
        cout << "Navneet"<< endl;
        i++;
    }
    return 0;
}

// DO-WHILE LOOP: 
// The body of the loop is executed AT LEAST ONCE, 
// even if the condition is false at the start.

#include<bits/stdc++.h>
using namespace std;
int main(){
int i = 2;
do {
    cout << "Navneet" << endl; 
    i++;
} while(i <= 1);
return 0;
}