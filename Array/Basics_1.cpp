// ##################### Array #####################################
/*
What is an Array?

An array is a linear data structure in which we store data and perform any operation, we can randomly access data in an array (With the help of its index values). 

In other words, an array is a collection of similar types of elements (Homogeneous elements) that have contiguous memory locations i.e One after another.
*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5];
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] ;
//     arr[3] +=10;
//     cout << "Input in index 3 =" << arr[3]; 
//     return 0;
// }

// What are Strings

/*Strings are like a series of characters stored in a specific order. Each character in a string is assigned an index, starting from 0. This means the first character is at index 0, the second character at index 1, and so on.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string n = "Navneet";
    int len =n.size();
    cout << n[len -1];
    return 0;
}