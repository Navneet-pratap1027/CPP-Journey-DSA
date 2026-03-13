// ######################  Strivers A2Z DSA    #######################

// #include<iostream>
// using namespace std;
// int main(){
//     cout << "hey , Navneet" << "\n";
//     cout << "hey , Navneet"<< "\n";
//     cout << "hey , Navneet";
//     return 0;
// }

/* #include <iostream>
using namespace std;
int main(){
    int x,y;
    //cin >> x,y;   20// c++ does not use comma to take different value as a input
    cin >> x >> y;// correct way

    // cout << "value of x is:" << x;
    // cout << "value of y is:" << y;
    cout << "value of x is: "<< x << "and value of y is:"<< y;
    return 0;
} */

/* #include<bits/stdc++.h>  // Instead of including libraries one by one, we can use this
using namespace std;// we dont need to write (std:: count like this again and again)
int main(){
    int x=7;
    // for bigger value use
    long x=6899876;
    // more  wider range
    long long x = 87877676556544;
    return 0;
}  */

#include<bits/stdc++.h>
using namespace std;
int main(){
    // string s1;
    // string s2;
    // cin >> s1 >> s2;
    // cout << s1 << " "<< s2;

    // string getline
    string str;
    getline(cin,str);
    cout<< str;
    return 0;
}

/* REVISION NOTES: String Input Methods
   ------------------------------------
   1. cin >> variable; 
      - Used to read a SINGLE WORD.
      - Stops reading as soon as it encounters a Space, Tab, or Newline.
      - Example: If input is "Navneet Pratap", it only stores "Navneet".

   2. getline(cin, variable); 
      - Used to read an ENTIRE LINE of text.
      - Includes spaces within the string.
      - Only stops reading when the Enter (Newline) key is pressed.
      - Example: If input is "Navneet Pratap", it stores the full name.

   3. Key Difference:
      - Use 'cin >>' for simple data or single words.
      - Use 'getline' for sentences or inputs containing spaces.
*/