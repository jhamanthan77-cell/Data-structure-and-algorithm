#include<bits/stdc++.h>
using namespace std;
int  main(){
    //taking input of the size of the array
int n;
cin>>n;
int arr[n];
for( int i=0;i<n;i++){
    cin>>arr[i];

} 
//counting the frequency of each number
 int hash[13]={0};
for(int i=0; i<n;i++){
    hash[arr[i]]+=1;
}
//printing the frequency of each number
int p;
cin>>p;
while(p--){
    int number;
    cin>>number;
    cout<<hash[number]<<endl;
}
return 0;
}