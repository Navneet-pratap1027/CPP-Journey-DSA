#include<bits/stdc++.h>
using namespace std;
    bool isPalindrome(int n) {
        int given=n;
        int rev=0;
        while(n>0){
            int lastdigit=n%10;
            rev=(rev*10)+lastdigit;
            n=n/10;
        }
        if(rev==given){
            return true;
        }
            else return false;
    }
    int main(){
        int n;
        cout<<"Enter the digit: ";
        cin>>n;
        if(isPalindrome(n)==true){
            cout<<"true";
        }else{
            cout<<"false";
        }

    }
        