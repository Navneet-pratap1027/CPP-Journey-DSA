#include<bits/stdc++.h>
using namespace std;

int Reversedigit(int n){
    int Rnum=0;
    while(n>0){
        int lastdigit=n%10;
        Rnum=(Rnum*10)+lastdigit;
        int n=n/10;
    }
    return Rnum;
} 