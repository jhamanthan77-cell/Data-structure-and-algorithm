#include<bits/stdc++.h>
using namespace std;
void removezero(int arr[], int n){
vector<int> temp;
for(int i=0;i<n;i++){
    if(arr[i]!=0){
        temp.push_back(arr[i]);
    }
}
int  nonzero;
for(int i=0;i<temp.size();i++){
    arr[i]=temp[i];
  nonzero= temp. size();


}
for( int i=nonzero;i<n;i++){
    arr[i]=0;
}
}
int main(){
    int n ;
    cin>>n ;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    removezero(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}