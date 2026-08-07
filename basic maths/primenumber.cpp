#include<iostream> 
using namespace std;
int main(){
int n;
cin>>n;
int divisor=0;
for(int i=1;i*i<=n;i++){
    if(n%i==0){
        divisor++;
        
    }

    if(n/i!=i){
        divisor++;
    }
}
    if(divisor==2){
        cout<<"this is prime"<< ","<<endl;
    }
else{
    cout <<"number is not prime"<<","<<endl;
}

}