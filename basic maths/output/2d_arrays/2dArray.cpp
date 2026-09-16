# include<iostream>
using namespace std;
bool ispresent( int arr[][4], int target, int row, int column){


    for( int i=0; i<3;i++){
    for(int j=0; j<4;j++){
        if( arr[i][j]==target){
            return 1;
        }
    }
    
}
return 0;

}


int main(){

int arr[3][4];
// int arr[3][4] ={{1,11,111,1111 }, {2,22,222,2222},
// {3,33,333,3333}};
// for( int i=0; i<4;i++){
//     for(int j=0; j<3;j++){
//         cin>>arr[i][j];
//     }
// }

// taking input from user -> row wise;
for(int i=0;i<3;i++){
    for( int j=0;j<4;j++){
        cout<<"enter the number in matrix:";
        cin>>arr[i][j];
    }
    

}
//print 
for( int i=0; i<3;i++){
    for(int j=0; j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<< endl;

}
cout<<"enter the number to search"<<endl;
int target;
cin>>target;
if(ispresent( arr, target ,3,4)){
    cout<<" element found "<<endl;

}
else{
    "NOT FOUND!!!!";
}
return 0;
}