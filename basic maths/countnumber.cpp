#include<iostream>
using namespace std;
int count(int n){
int count =0;
while(n>0){
     int last_digit = n % 10;
    count++;
    n=n/10;
}
return count;
}   


int main (){
    int n;
    cin>>n;
     int result=count(n);
cout<<"the number of digts in" << n<<"is"<< result<<endl;


}