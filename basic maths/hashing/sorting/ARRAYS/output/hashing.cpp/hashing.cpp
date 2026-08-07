#include<bits/stdc++.h>
using namespace std;
int countFunction(int number, int arr[], int x){
    int count=0;
for(int i=0;i<number;i++){
    if(arr[i]==x){
        count++;
    }

}
return count;




}
int main(){
    int number;
    cin >>number;
    int arr[number];
    for (int i=0;i<number;i++){
        cin>>arr[i];

    }
    int x;
    cin >>x;
    cout << countFunction(number, arr, x) << endl; 
    return 0;
}
