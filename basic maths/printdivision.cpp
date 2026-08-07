#include<bits/stdc++.h>
using namespace std;
void printdivision(int n){
    //this is time complexity of this code is O(sqrt(n)) because we are running the loop from 1 to sqrt(n) and we are checking if n is divisible by i or not.
    vector<int>lst;
    for (int i=1;i<=sqrt(n);i++){
        if(n % i==0){
            lst.push_back(i);
        }
        if(n/i!=i&&n/i!=n){
            lst.push_back(n/i);
        }
    }
    sort (lst.begin(),lst.end());
for(auto it:lst){
    cout<<it<<" , ";
}
    
}
int main(){
int n;
cin>>n;
printdivision(n);

  }
    




