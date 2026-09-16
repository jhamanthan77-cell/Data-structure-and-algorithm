# include<bits/stdc++.h>
using namespace std;
void printSum(  int arr[][3], int row , int column ){
    cout<<" printing sum ->"<< endl;
    
for( int row=0; row<3;row++){
    int sum=0;
    for( int column=0; column< 3; column++ ){
 sum +=arr[row][column];
    }
    cout<<sum<<" ";
}


cout<< endl;
}
int largestRowSum(int arr[][3],int low, int column){
    int maxi= INT_MIN;
    int rowindex =-1;
for( int row=0; row<3;row++){
    int sum=0;
    for( int column=0; column< 3; column++ ){
 sum +=arr[row][column];
    }
    if ( sum>maxi){
        maxi=sum;
rowindex=row;
    }
}
cout<<"the maximum number is:"<< maxi<<endl;
return rowindex;
    
}

int main(){
    int arr[3][3];
    cout<<"enter the value of matrix"<<endl;
    for( int row=0; row<3;row++){
    for( int column=0; column< 3; column++ ){
cin>>arr[row][column];
    }
    
}

   int ans=  largestRowSum(arr,3,3);
   cout<<"max row is at index"<< ans<<endl;
    return 0;

}


//largest row sum 
