#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertattail(node* &head,int val){
    node* data=new node(val);

    if (head=NULL){
        head=data;
        return;
    }
    
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=data;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}   
void deletathead(node* &head){
    node* todelete=head;
    head=head->next;

    delete todelete;
}
node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=NULL;
    node* nextptr=NULL;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
    }
    return prevptr;
}
void deletion(node* &head ,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deletathead(head);
    }
    node*temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node*todeleat=temp->next;
    temp->next=temp->next->next;

    delete todeleat;
}
int main(){
    cout<<"this isme ";
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    display(head);
    node* newhead=reverse(head);
    
}
