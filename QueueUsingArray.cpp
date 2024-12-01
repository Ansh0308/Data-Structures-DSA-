#include<iostream>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;
class Queue{
    int front,rare,size;
    int *arr;
    public:
    Queue(int s){
        arr=new int[s];
        front=-1;
        rare=-1;
        size=s;

    }
    void enqueue(int x){
        
        
        if((rare+1)%size==front){
            cout<<"Queue overflow\n";
            return;
        }
        if(front==-1){
            front++;
        }
        rare=(rare+1)%size;
        arr[rare]=x;
        cout<<x<<" enqueued\n";

        
    }
    void dequeue(){
        if(front==rare){
            front=-1;
            rare=-1;
        }
        if(front==-1 || front>rare){
            cout<<"Queue is empty\n";
            return;
        }
        cout<<"dequeued "<<arr[front];
        front=(front+1)%size;
        

    }
    bool isEmpty(){
        if(front==-1 && rare==-1){
            return true;
        }
        return false;
    }
    bool isFull(){
        if(rare==size-1){
            return true;
        }
        return false;
    }
    int peek(){
        if(!isEmpty()){
            return arr[front];
        }
        cout<<"Queue is Empty\n";
        return -1;
        
    }
    void display(){
        if(isEmpty()){
            for(int i=front;i<=rare;i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
            return;

        }
        cout<<"Queue is Empty\n";
    }

};
int main(){
    int size=6;
    Queue q1(size);
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.enqueue(6);
    q1.peek();
    q1.dequeue();
    q1.peek();
    q1.dequeue();
    q1.peek();
    q1.enqueue(100);
    q1.peek();
    q1.enqueue(200);



    return 0;
}