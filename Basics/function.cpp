// //  ########### Function ########################
// /* 
// A function is a reusable piece of code that helps avoid repetition and makes the program more organized.

// Function are set code which performs something for you 
// Function is used to modularise code
// Function are used to increase readablity
// Function are used to use same code multiple times

// ####################################################################################
// Type of function
// void   => A void function does not return any value. It only performs a task.
// return => A return function returns a value to the calling function using the return statement.
// parameterised => A parameterised function receives arguments (inputs) when the function is called.
// non parameterised => A non-parameterised function does not take any arguments.
// */
// // ###################################################################################
// #include<bits/stdc++.h>
// using namespace std;
// void printName(){
//     cout << "Hey Navneet";
// }
// int main(){
//     printName();
//     return 0;
// }

// // ERROR: Defining a function inside main() is not allowed in C++.
// // CORRECT: Define functions OUTSIDE main and CALL them INSIDE main.
// // This is different from JavaScript where nesting is possible.

// #include<bits/stdc++.h>
// using namespace std;
// void printName(string name){
//     cout << "Hey " << name << endl;
// }
// int main(){
//     string name;
//     cin >> name;
//     printName(name);

//     string name2;
//     cin >> name2;
//     printName(name2); // FUNCTION CALLS: We can call the same function multiple times with different variables.
//     return 0;
// }

// // Take two number and print its sum 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int num3 = num1+num2;
//     cout << num1+num2;
//     return 0;
// }
// // ##############################################3
// #include<bits/stdc++.h>
// using namespace std;
// int sum(int num1, int num2){
//     int num3=num1+num2;
//     return num3;
// }
// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int res = sum(num1,num2);
//     cout << res;
//     return 0;
// }
// // ##################################
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int res = max(num1,num2);
//     cout << res;
//     return 0;
// }



// // Using custom max function
// #include<bits/stdc++.h>
// using namespace std;
// int maxx(int num1, int num2){
//     if(num1>=num2){
//         return num1;
//     }
//     return num2;
//     // looking for a return line
// }
// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int res = maxx(num1,num2);
//     cout << res;
//     return 0;
// }


// //############  Function pass by value ################
// #include<bits/stdc++.h>
// using namespace std;
// void dosomething(int numm){
//     cout << numm << endl;
//     numm+=5;
//     cout << numm << endl;
//     numm+=5;
//     cout << numm << endl;
// }
// int main(){
//     int num =10;
//     dosomething(num);
//     cout << num;
//     return 0;
// }

// //############  Function pass by value ################
// #include<bits/stdc++.h>
// using namespace std;
// void dosomething(string p){
//     p[0] = 'T';
//     cout << p << endl;

// }
// int main(){
//     string s="Raj";
//     dosomething(s);
//     cout << s;
//     return 0;
// }

// //############  Function pass by reference ################
// #include<bits/stdc++.h>
// using namespace std;
// void dosomething(string &p){
//     p[0] = 'T';
//     cout << p << endl;

// }
// int main(){
//     string s="Raj";
//     dosomething(s);
//     cout << s;
//     return 0;
// }
// // ########### Another example ######################
// #include<bits/stdc++.h>
// using namespace std;
// void dosomething(int &numm){
//     cout << numm << endl;
//     numm+=5;
//     cout << numm << endl;
//     numm+=5;
//     cout << numm << endl;
// }
// int main(){
//     int num =10;
//     dosomething(num);
//     cout << num;
//     return 0;
// }
// // ###### Array always pass by references ##########
// #include<bits/stdc++.h>
// using namespace std;
// void dosomething(int arr[],int n){
//     arr[0] +=100;
//     cout << "Value inside function " << arr[0]<<endl;
// }
// int main(){
//     int n=5;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>> arr[i];
//     }
//      dosomething(arr,n);
//      cout << "Value inside function " << arr[0]<<endl;
//     return 0;
// }
