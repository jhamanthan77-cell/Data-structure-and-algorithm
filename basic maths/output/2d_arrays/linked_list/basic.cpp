// // // # include<bits/stdc++.h>
// // // using namespace std;
// // // class node{
// // // public:
// // // int data;
// // // node*next;
// // // //constructor!!
// // //  public:
// // // node(int data1 ){
// // // data=data1;
// // // next=nullptr;

   
// // // }
// // // };
// // // // ----------array to linked list------------!
 

// // // // }

// // // // -------------travesal in linked list-------------------->
// // // node* convertArrtoLL(vector<int> &arr){
// // //  node*head=new node(arr[0]);
// // //  node*mover =head;
// // //  for(int i=1; i<arr.size(); i++){
// // // node*temp= new node(arr[i]);
// // // mover->next= temp;
// // // mover =temp;
// // //  }
// // // return head;
// // // }

// // // int main(){
// // //    vector<int>arr={2,3,5,8,7};
// // //    node* head=convertArrtoLL(arr);
// // //    node*temp=head;
// // //    while(temp){
// // //       cout<<temp->data<<" ";
// // //       temp=temp->next;
// // //    }
// // // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // class node {
// //    public:
// //    int data;
// //    node*next;
// //    public:
// //    node( int data1){
// //       data= data1;
// //       next= nullptr;
// //    }
// // };
// // int main(){
// //    vector<int>arr={2,3,8,7};
// //    node*y=new node (arr[3]);
// //    cout<<y->data;
// // }



// // array to linked list arr[]={2,1,3,8}
// // head=2 (starting point)(mover)
// // #include<bits/stdc++.h>
// // using namespace std;
// // class node {
// //    public:
// //    int data;
// //    node*next;
// //    public:
// //    node( int data1){
// //       data= data1;
// //       next= nullptr;
// //    }
// // };
// //  node*convertArr2Ll(vector<int>&arr){
// //    node*head=new node(arr[0]);
// //    node*mover=head;
// //    for(int i=1; i<arr.size();i++){
// //       node*temp = new node (arr[i]);
// // mover->next=temp;
// // mover=temp;
// //    }
// //    return head;

// //  }
// // int main(){
// //    vector<int> arr{12,3,8,7};
// //    node*head=convertArr2Ll(arr);
// // cout<<head->data;
// // }









// // ~~~~~~~~~traversal in ll~~~~~~~~~~~~~~
// #include<bits/stdc++.h>
// using namespace std;
// class node {
//    public:
//    int data;
//    node*next;
//    public:
//    node( int data1){
//       data= data1;
//       next= nullptr;
//    }
// }; 
// node* convertArr2Ll(vector<int>&arr){
//    node*head=new node (arr[0]);
//    node*mover =head;
//    for (int i=1;i<arr.size(); i++){
//       node*temp=new node (arr[i]);
//       mover->next=temp;
//       mover= temp;
//    }
//    return head;
// }
//  int lengthOfLl(node*head){
//     int cnt=0;
//     node*temp=head;
//     while(temp!=nullptr){
     
//    temp=temp->next;
//    cnt++;

//    }
// return cnt;
//  }
//  int checkIfPresent(node*head, int values ){
//    node* temp =head;
//    while(temp!=nullptr){
//       if(temp->data==values )return 1;
//       temp=temp->next;
//    }
//    return 0;
//  }
// int main(){
//    vector<int>arr{12,3,4,76};
//    node*head=convertArr2Ll(arr);
// cout<<lengthOfLl(head)<<endl;
// cout<<checkIfPresent(head,90);
  

   
// } 

 # include<bits/stdc++.h>
using namespace std;
class node{
   public:
   int data;
   node*next;
    
   public :
   node(int data1 , node* next1){
      data=data1;
   next =next1;
   }
    public:
     node (int data1){
      data= data1;
      next = nullptr;
     }
};
  node*convertArr2LL(vector<int>&arr){
node*head=new node (arr[0]);
node*mover=head;
for(int i=1; i<arr.size();i++){
   node*temp= new node(arr[i]);
   mover->next=temp;
   mover=temp;
}
return head;
 }
  int LengthOfLL(node*head){
   int cnt=0;
   node*temp=head;
   while(temp!=nullptr){
      temp=temp->next;
      cnt++;
   }
    return cnt;
  }
   int CheckIfPresent(node*head, int values){
      node*temp=head;
      while(temp!=nullptr){
         
         if(temp->data==values){
            
            return 1;
         }
         temp=temp->next;
      }
      return 0;

   }
    node*deleteHead(node*head){
      if(head==NULL) return head;
      node *temp=head;
      head= head->next;
      delete temp;
      return head;


    }
    void print(node*head){
      node*temp=head;
      while(temp!=nullptr){
         cout<<temp->data<<" "<<endl;
         temp=temp->next;
      }
    }
     node*deleteTail(node*head){
node * temp=head;
if(head==NULL|| head->next==NULL)return NULL;
while(temp->next->next!=NULL){
   temp=temp->next;
} 
delete temp->next;
temp->next=nullptr;
 return head;
     }
   // remove kth element in ll;
   node*removeKthElement(node*head, int k){
      if(head==NULL)return head;
      if(k==1){
         node*temp=head;
         head=head->next;
         delete temp;
         return head;
      }
      int cnt =0;
      node*temp=head;
      node*prev=NULL;
      while(temp!=nullptr){
         cnt++;

      
      if(cnt==k){
         prev->next=prev->next->next;
         free(temp);
         break;
      }
      prev= temp;
      temp=temp->next;
      }


     return head;
   } 
   //value deletion!!
     node*removeElement(node*head, int el){
      if(head==NULL)return head;
      if(head->data==el){
         node*temp=head;
         head=head->next;
         delete temp;
         return head;
      }
     
      node*temp=head;
      node*prev=NULL;
      while(temp!=NULL){
      if(temp->data==el){
         prev->next=prev->next->next;
         free(temp);
         break;
      }
      prev= temp;
      temp=temp->next;
      }


     return head;
   }



   //insertion
   node*insertHead(node*head, int val ){
      return  new node(val,head);
      
   }
          

//insert at last
node*insertTail(node*head, int val){
if(head==NULL){
   return new node(val);
}
node*temp=head;
while(temp->next!=NULL){
   temp=temp->next;

}
node*newnode=new node(val);
temp->next=newnode;
return head;


return head;
}

 

// inserting at given k th element !!!!!

node* insertionk(node* head, int el, int k) {

    // Insert at 1st position
    if (k == 1) {
        return new node(el, head);
    }

    int cnt = 1;
    node* temp = head;

    while (temp != NULL) {

        if (cnt == k - 1) {
            node* x = new node(el, temp->next);
            temp->next = x;
            break;
        }

        temp = temp->next;
        cnt++;
    }

    return head;
}
// insert before values
node* insertionbeforeValue(node* head, int el, int val) {

    if(head==NULL){
      return NULL;
    }
 if(head->data==val){
   return new node(el,head);
 }
   
    node* temp = head;

    while (temp->next!= NULL) { 

        if (temp->next->data==val) {
            node* x = new node(el, temp->next);
            temp->next = x;
            break;
        }

        temp = temp->next;
        
    }

    return head;
}






 int main(){
   vector<int>arr={12,2,3,4,7};
    node *head=convertArr2LL(arr);
    head=insertionbeforeValue(head,159,7);
  print (head);

  
  }
 
