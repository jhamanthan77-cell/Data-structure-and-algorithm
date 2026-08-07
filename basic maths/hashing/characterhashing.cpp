#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
//counting the frequency of each character
int hash[256]={0};
for(int i=0;i<s.length();i++){
    hash[s[i]]++;

}
//prinying the frequency of each chaarcter
int q;
cin>>q;
while(q--){
    //taking input of the character
    char c;
    cin>>c;

    cout<<hash[c]<<endl;
}
//printing the frequency of each character
return 0;






}