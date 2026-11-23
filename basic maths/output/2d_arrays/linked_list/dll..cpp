#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node*back;


    public:
    node(int data1,node*next1, node*back1){
        data=data1;
        next=next1;
        back=back1;
    }
 public:
 node(int data1){
    data= data1;
    next=nullptr;
    back=nullptr;
 }
};


node*convertArr2DLL(vector<int>arr){
    node*head=new node (arr[0]);
    node*prev=head;
    for(int i=1; i<arr.size();i++){
node*temp=new node(arr[i],nullptr, prev);
prev->next=temp;
prev=temp;
    }
    return head;
}

//deletion
//head
node*DeleteHead(node*head){
    if(head==NULL|| head->next==NULL){
        return NULL;
    }
    node*prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;
}
//tail
node*DeleteTail(node*head){
    if(head==NULL||head->next==NULL)return NULL;
    node*tail=head;
    while(tail->next!=NULL)
    {
        
        tail=tail->next;

    }
    node*newTail=tail->back;
    newTail->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;
}


void print(node*head){
while(head!=NULL){
    cout<<head->data<<"   "<<endl;
    head=DeleteHead(head);
   
}
}
//  $$ (k values) :::
  node* DeleteKthElement(node*head,  int k){
    if(head==NULL) return NULL;
  
   int cnt=0;
   node*temp=head;
   while(temp!=NULL){
    cnt++;
    if(cnt==k)
        break;
        temp=temp->next;
   }
    node*prev = temp->back;
    node*front=temp->next;
//single element
if(prev==NULL&& front== NULL) {
return NULL;
}
 else if(prev==NULL){
return DeleteHead(head);
 }
 else if(front==NULL){
    return DeleteTail(head);
 }



 prev->next=front;
 front->back=prev;
 temp->next=nullptr;
 temp->back=nullptr;
 delete temp;
 return head;
   

  }
  //delete node
   void deleteNode(node*temp){
    node*prev=temp->back;
    node*front=temp->next;
    if(front==NULL){
        prev->next=nullptr;
        free (temp);
        return;
    }
prev->next=front;
front->back=prev;
temp->next=temp->back=nullptr;
free(temp);
   }






   //INSERTION OF NODE(BEFORE HEAD, BEFORE TAIL, BEFORE KTH , BEFORE NODE)
//*** insertion of node before head;;
node*InsertBeforeHead(node*head, int val){
    node*newHead=new node(val,head, nullptr);
    head->back=newHead;
    return newHead;
     
}
//insertion before the tail of dll
node*InsertBeforeTail(node*head, int val){
    if(head->next==NULL){
        return InsertBeforeHead(head, val);
    }
    node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    node*prev=tail->back;
    node*newNode=new node(val,tail,prev);
    tail->back=newNode;
    prev->next=newNode;

    return head;
    
}


// insertion before k th element 
node*InsertBeforeK(node*head, int k, int val){
if(k==1){
    return InsertBeforeHead(head,val);

}

node*temp=head;
int cnt=0;
while(temp!=NULL){
    cnt++;
    if(cnt==k){
        break; 
    }
    temp= temp->next;
}
node*prev=temp->back;
node*newNode=new node (val, temp, prev);
prev->next=newNode;
temp->back=newNode;
return head;
} 
// insertion before a given node ;
void InsertionBeforeNode(node*Node, int val){
node*prev=Node->back;
node*newNode=new node ( val,Node,prev);
prev->next=newNode;
Node->back=newNode;
}




int main(){
vector<int>arr={12,2,5,6};
node*head=convertArr2DLL(arr);
// deleteNode(head->next->next->back);
//  head=InsertBeforeHead(head,10);
//   head=InsertBeforeTail(head,10);
//   head=InsertBeforeK(head,2,555);
InsertionBeforeNode(head->next->next->back,100000);
print (head);
return 0;
}
