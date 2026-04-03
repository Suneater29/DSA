#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
void stackusingLL(){
    class Stack
{
    Node* top;
    int size;

    public:
        Stack()
        {
            top=NULL;
            size=0;
        }

        int getSize()
        {
            return size;
        }

        bool isEmpty()
        {
            return top==NULL;
        }

        void push(int data)
        {
            Node* newnode=new Node(data);
            newnode->next=top;
            top=newnode;
            size++;
        }

        void pop()
        {
            if(top==NULL) return;
            Node* temp=top;
            top=top->next;
            delete temp;
            size--;
        }

        int getTop()
        {
            if(top==NULL) return -1;
            return top->data;
        }
    };
}
int main(){
    cout<<"helow world";
    return 0;
}