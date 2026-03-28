// #include<bits/stdc++.h>
// using namespace std;
// int Reversedigit(int n){
//     int Rnum=0;
//     while(n>0){
//         int lastdigit=n%10;
//         Rnum=(Rnum*10)+lastdigit;
//          n=n/10;
//     }
//     return Rnum;
// } 
// int main(){
//     int n;
//     cout<<"Enter digit ";
//     cin>> n;
//     //int result =Reversedigit(n);
//     cout<<Reversedigit(n);
//     return 0;
// };

//#######################  Last Digit of a number  ##############################

#include<bits/stdc++.h>
using namespace std;
void utility(int n) {
    int ans =abs(n)%10;
        cout << ans << endl;
}
int main(){
    int n;
    cout<<"Enter digit ";
    if(!(cin>>n))
    return 0;
    utility(n);
    return 0;    
};


