// // #include<bits/stdc++.h>
// // using namespace std;

// // void checkPrime(int n){
// //     if(n<=1){
// //         cout<<"false";
// //         return;
// //     }
// //     for (int i=2;i<n;i++){
// //         if(n%i==0){
// //             cout<<"false";
// //             return;
// //         }
// //     }
// //     cout<<"true";
// // }
// // int main() {
// //      int n; 
// //     cin >> n;
// //     checkPrime(n); // here copy of value n goes to function so, we can any other variable name instead of n we can use a, b, num etc
// //     return 0;
// // }

// // ##############  Optimization of code ################################

// // #include <iostream>
// // using namespace std;

// // void checkPrime(int n) {
// //     if (n <= 1) {
// //         cout << "False";
// //         return; 
// //     }

// //     for (int i = 2; i*i <= n; i++) { // check for only root value
// //         if (n % i == 0) {
// //             cout << "False"; 
// //             return;          
// //         }
// //     }
// //     cout << "True";
// // }

// // int main() {
// //      int n; 
// //     cin >> n;
// //     checkPrime(n); 
// //     return 0;
// // }

// #include <iostream>
// using namespace std;
// int nextPrime(int n) {
//     int num =n+1;
//    while(true){
//        bool isPrime =true;
//         if (num <= 1) isPrime = false;
//           else if (num == 2) isPrime = true; 
//         else if (num % 2 == 0) isPrime = false; 
//         else {
        
//             for (int i = 3; i * i <= num; i ++) {
//                 if (num % i == 0) {
//                     isPrime = false;
//                     break;
//                 }
//             }
//         }
//         if (isPrime) {
//             return num;
//         }
//         num++;
//     }
// }
// int main() {
//      int n; 
//     cin >> n;
//     cout << nextPrime(n);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    int duration;
    if(!(cin>> duration)){
        cout<<"Invalid input";
    return 0;
    }

    if (duration ==1){
        cout<< "2000"<<endl;
    }else if (duration ==3){
        cout<<"5000"<<endl;
    }else if (duration ==6){
        cout<<"9000"<<endl;
    }else if (duration ==9){
        cout<<"1200"<<endl;
    }else if (duration ==12){
        cout<<"1500"<<endl;
    }else{
        cout<<"Invalid Duration"<<endl;

    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     return 0;
// }

