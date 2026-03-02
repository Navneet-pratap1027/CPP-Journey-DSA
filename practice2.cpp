// ############# Learning Switch Statement (The "Direct Matcher") ##################
// A switch statement is a control flow structure used to compare a single variable against a list of constant values (called cases).

// Best Use: Ideal for scenarios with fixed, distinct choices like Menu Options, Days of the week, or User Roles (Admin, Instructor, Student).

/*
Question 1.=>
Take the day no. and print coressponding day
 for 1 print Monday and soo on....
*/

#include<iostream>
using namespace std;
int main(){
    int day;
    cin >> day;
    switch (day){
        case 1: 
        cout << "MONDAY";
        break;
        case 2: 
        cout << "TUESDAY";
        break;
        case 3: 
        cout << "WEDNESDAY";
        break;
        case 4: 
        cout << "THURSDAY";
        break;
        case 5: 
        cout << "FRIDAY";
        break;
        case 6: 
        cout << "SATURDAY";
        break;
        case 7: 
        cout << "SUNDAY";
        break;
        default:
        cout << "Inavild Number";
    }
    return 0;
}
/* DEFAULT CASE:
   - It acts as the 'catch-all' block.
   - Runs ONLY when none of the defined cases match the input.
*/

