#include<iostream>
using namespace std;

void reeverse(char name[], int n){
    int  first=0;
    int last= n-1;
    while(first<last){
        swap (name[first],name[last]);
        first++;
        last--;
    // manthan=nahtnam; 
    // m==n, a==a,n==h
    }
}
    int main(){
        char name[20];
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Your name is: "<<name<<endl;
        int n=0;
        while(name[n]!='\0'){
            n++;
        }
        reeverse(name,n);
        cout<<"Your name after reverse is: "<<name<<endl;
    }
