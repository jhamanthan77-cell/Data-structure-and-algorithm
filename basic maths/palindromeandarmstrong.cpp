#include<iostream>
using namespace std;
int main(){
int duplicate;
int n;
cin>>n;
duplicate = n;  
int revnum=0;
while(n>0){
    // 1331=1331 this is palindrome number.
    int lastdigit = n % 10;
    n=n/10;
    revnum= revnum*10+lastdigit;
}
    if (duplicate==revnum){
        cout<<"this is palindrome number "<<endl;
        
    }
    else{
        cout<<" this is not palindrome number"<<endl;
    }


}

    
