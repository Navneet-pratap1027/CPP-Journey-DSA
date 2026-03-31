#include<bits/stdc++.h>
using namespace std;

int getSecondlargest(vector<int> &arr){
    int n=arr.size();

    sort(arr.begin(),arr.end());
    for(int i=n-2;i>=0;i--){
      if (arr[i] != arr[n - 1]) {
            return arr[i];
        }
         
    }
    return -1;

}
int main(){
      vector<int> arr = { 5,10,10,10 };
    cout<<getSecondlargest(arr);
    return 0;
};

#include<bits/stdc++.h>
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        if (n<2)
        return -1;
        int largest=-1;
        int secondLargest =-1;
        for(int i=0;i<n;i++){
            if (arr[i] > largest){
                largest =arr[i];
                
            }
           
        }
         for(int i=0;i<n;i++){
            if (arr[i] > secondLargest && arr[i]!=largest){
                secondLargest =arr[i];
            }
        }
         return secondLargest;
    }
};
