#include<bits/stdc++.h>
using namespace std;
class node {
    public:
   int data;
   node*next;
   public:
   node( int data1){
      data= data1;
      next= nullptr;
   }
}; 
node*convertArr2Ll(vector<int> &arr){
    node*head=new node (arr[0]);
        node*mover = head;
    for(int i=1; i<arr.size(); i++){
        node*temp=new node (arr[i]);
        mover->next= temp;
        mover=temp;
    }
      return head;
}
void print(node*head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}


node*DeleteHead(node*head){
   
        if(head==nullptr){
            return nullptr;
        }
         node* temp= head;
         head=head->next ;
         delete temp;

          return head;
    }
 


int main(){
    vector <int> arr={12,3,8,76};
   node* head=convertArr2Ll(arr);
  head=DeleteHead(head);
    print(head);

}