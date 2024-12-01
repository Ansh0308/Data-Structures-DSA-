#include<iostream>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;
class Node{
    public:
    int data;
    int prio;
    Node* next;
    Node(int val,int pr){
        data=val;
        prio=pr;
        next=nullptr;
    }

};

class priorityQueue{
    Node* front;
    
    
    public:
    priorityQueue(){
        front=nullptr;
        

    }
    void enqueue(int x,int p){
        Node *temp=new Node(x,p);
        if(front==nullptr || p<front->prio){
            temp->next=front;
            front=temp;
            
            return;
        }
        Node* temp2=front;
        while (temp2->next!=nullptr && temp2->next->prio<=p)
        {
            temp2=temp2->next;
        }
        temp->next=temp2->next;
        temp2->next=temp;
        
        cout<<"Enqued the Node with data "<<x<<"And priority "<<p<<"\n";

        

        
    }
    void insertBack(int x){
        Node *temp=Node(x);
        if(front==nullptr){
            front=temp;
            rare=temp;
            return;
        }
        rare->next=temp;
        rare=temp;
        cout<<"Enqued the ele in back "<<x<<"\n";

        

        
    }
    void deleteFront(){
        if(isEmpty()){
            count<<"Dequeue is empty"<<"\n";
            return;
        }
        Node *temp=front;

        cout<<"dequeued "<<front->data<<"\n";
        front=front->next;
        delete temp;
        if(front==nullptr){
            rare=nullptr;
        }
        return;
        }
        void deleteRare(){

        if(isEmpty()){
            count<<"Dequeue is empty"<<"\n";
            return;
        }
        if(rare==front){
            cout<<"Delete the Deque From rare "<<rare->data<<"\n";
            delete rare;
            rare=front=nullptr;
            return;
        }
        Node *temp=front;
        while (temp->next!=rare)
        {
            temp=temp->next;
        }
        

        cout<<"dequeued "<<rare->data<<"\n";
        
        delete rare;
        rare=temp;
        rare->next=nullptr;
        if(rare==nullptr){
            front=nullptr;
        }
        return;
        }
    void getFront(){
        if(isEmpty()){
            cout<<"Deque is Empty"<<"\n";
            return;
        }
        cout<<"The front ele is "<<front->data<<"\n";
        return;
    }
    void getBack(){
        if(isEmpty()){
            cout<<"Deque is Empty"<<"\n";
            return;
        }
        cout<<"The Rare ele is "<<rare->data<<"\n";
        return;
    }
    bool isEmpty(){
        if(front==nullptr){
            return true;
        }
        return false;
    }
    
    

};
int main(){
    Deque dq;
    dq.insertFront(5);
    dq.insertBack(10);





    return 0;
}