#include<bits/stdc++.h>
using namespace std;

   void print_divisors(int n){
        for(int i=1;i<=n;i++){
            if(n%i==0){
                cout<<i<<" ";
            }
        }
    }
    int main(){
        int n;
        cout<<"Enter the number: ";
        cin>>n;
        print_divisors(n);
        return 0;

    }
// #####################  Optimization of code  #########################
#include<bits/stdc++.h>
using namespace std;
void printDivisor(int n){
    vector <int> ls;
    //for(int i=1;i<=sqrt(n);i++){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i) !=i){
                ls.push_back(n/i);

            }
        }
    }
    // 0(n log n): n is the number of factors
    sort(ls.begin(),ls.end());
    for(auto it:ls)cout<<it<<" ";
}
    int main(){
        int n;
        cout<<"Enter the number: ";
        cin>>n;
        printDivisor(n);
        return 0;

    }
