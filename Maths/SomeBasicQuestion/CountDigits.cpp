#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int countDigit(int n){
    if(n==0)
    return 1;
    n=abs(n);
    while(n>0){
        cnt++;
        n=n/10;
    }
    return cnt;
}
int main(){
     int num;
    cout<<"Enter number ";
    cin>> num;
    int result=countDigit(num);
    cout<<"Total digit "<<result<<endl;
    return 0;

}


// // ############ Another Way ########################################
#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
    if(n==0){
        return 1;
    }
    n=abs(n);
    int cnt=(int)log10(n)+1;
    return cnt;
}
int main(){
    int num;
    cout<<"Enter a number ";
    cin>>num;
    int result=countDigits(num);
     cout<<"Total digit "<<result<<endl;
    return 0;
}

// ##################################################################################
