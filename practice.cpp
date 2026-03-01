// ######################  Strivers A2Z DSA    #######################

// Q=> 1. Write a program that take a input of age and print you are adult or not

#include <bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin >> age;
    if (age >= 18){
    cout << " You are an adult " ;
    }
    else {
    cout << " You are not an adult " ;
    }
    return 0;
}


/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin >> age;
    if (age >= 18){
    cout << " You are an adult " ;
    }
    else if (age>=18){
    cout << " You are not an adult " ;
    }
    return 0;
} */

/* REVISION NOTES: Conditional Statements (if, else if, else)
   --------------------------------------------------------
   1. if (condition):
      - The starting point of any check.
      - It CAN exist alone without an 'else'.
      - If the condition is True, the code inside { } runs.

   2. else if (condition):
      - Used when you have MORE than two options (e.g., Grading A, B, C).
      - It only checks if all 'if' or 'else if' above it were False.
      - You can have multiple 'else if' blocks.

   3. else:
      - The "Final Default" plan.
      - It runs ONLY if every condition above it was False.
      - It does NOT have its own condition (no brackets after else).

   4. Important Rules:
      - Use parentheses () for conditions: if (x > 10).
      - Never put a semicolon ; immediately after if(condition).
*/

// Question 2=>
/* Given marks of a student, print on the screen:
Grade A if marks >= 90
Grade B if marks >= 70
Grade C if marks >= 50
Grade D if marks >= 35
Fail, otherwise. */

#include<bits/stdc++.h>
using namespace std;
int main(){
int marks;
cin >> marks;
if (marks >=90){
   cout << "You got Grade A";
}
else if(marks>=70){
   cout << "You got Grade B";
}
else if(marks>=50){
   cout << "You got Grade C";
}
else if(marks>=35){
   cout << "You got Grade D";
}
else{
   cout << "Fail";
}
  return 0;
}

// Question 3=>

/* A school has following rules for grading system:
a. Below 25 -F
b. 25 to 44 -E
c. 45 to 49 -D
d. 50 to 59 -C
e. 60 to 79 -B
f. 80 to 100 -A
Ask user to enter marks and print the corresponding grade. */

#include<bits/stdc++.h>
using namespace std;
int main(){
   int marks;
   cin >> marks;
   if(marks<25){
      cout << "your grade is F";
   }
   if(marks >=25 && marks<=44){
      cout << "your grade is E";
   }
   if(marks >= 45 && marks<=49){
      cout << "your grade is D";
   }
    if(marks >= 50 && marks<=59){
      cout << "your grade is C";
   }
    if(marks >= 60 && marks<=79){
      cout << "your grade is B";
   }
    if(marks >= 80 && marks<=100){
      cout << "your grade is A";
   }
   return 0;// use else if instead of if if
}
// Using else if we do not need check the range condition...

#include<bits/stdc++.h>
using namespace std;
int main(){
   int marks;
   cin >> marks;
   if(marks < 25){
      cout << "your grade is F";
   }
   else if(marks <= 44){ // 25 se kam wala upar check ho chuka hai, toh yahan sirf 44 tak check hoga
      cout << "your grade is E";
   }
   else if(marks <= 49){
      cout << "your grade is D";
   }
   else if(marks <= 59){
      cout << "your grade is C";
   }
   else if(marks <= 79){
      cout << "your grade is B";
   }
   else if(marks <= 100){
      cout << "your grade is A";
   }
   return 0;
}

/* REVISION: if vs else if
   ---------------------------------
   1. Multiple 'if': 
      - The computer checks EVERY 'if' one by one.
      - SLOWER: Waste of CPU time checking conditions that can't be true.
      - Use when more than one condition can be true at the same time.

   2. 'else if' Chain: 
      - The computer STOPS checking as soon as it finds a 'True' condition.
      - FASTER: Skips the rest of the chain once a match is found.
      - Use when only ONE option is possible (like a Grade or Age category).

   3. Logic Tip: 
      - '<=' means Less than or equal to.
      - '&&' is used to join two conditions (Both must be True).
*/

// Question 4=>

/* Take the age from the user and then decide accordingly
1. If age < 18,
print-> not eligible for job
2. If age >= 18,
print-> "eligble for job"
3. If age >= 55 and age <= 57,
print-> "eligible for job, but retirement soon."
4. If age > 57
print-> "retirement time"
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
   int age;
   cin >> age;
   if (age<18)
   cout << "not eligible for job";
   else if(age>=18 && age<55)
    cout << "eligble for job";
     else if(age <=57)
    cout << "eligible for job, but retirement soon.";
    else 
    cout << "retirement time";
   return 0;
}