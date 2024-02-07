#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node * next;

    Node(int d) : data(d), next(nullptr) {}
    Node(int d, Node* &next) : data(d), next(next) {}
};

class LinkedList
{
    Node * head;

    public:
    void push_back(int dt)
    {
        if(head == nullptr){
            head = new Node(dt);
        }
        else{
            Node * curr = head;
            while(curr->next != nullptr){
                curr = curr->next;
            }
            curr->next = new Node(dt);
            delete curr;
        }
    }
    void push_front(int dt)
    {
        if(head == nullptr){
            head = new Node(dt);
        }
        else{
            head = new Node(dt,head);
        }
    }

    void push_at(int pos,int dt)
    {
        if(pos == 1){
            push_front(dt);
        }
        else if (head == nullptr){
            cout<<"List is empty add element at position 1"<<endl;
        }
        else{
            int cnt = 1;
            Node * curr = head;
            Node * prev = nullptr;
            while(cnt < pos && curr->next != nullptr){
                prev = curr;
                curr = curr->next;
                cnt++;
            }
            if(cnt == pos){
                Node * temp = new Node(dt);
                temp->next = curr;
                prev->next = temp;
            }
            else{
                curr->next = new Node(dt);
            }

        }
    }

    void print()
    {
        Node * curr = head;
        cout<<"Linked List : ";
        while(curr != nullptr){
            cout<<curr->data<<" ";
            curr = curr->next;
        }
        cout<<endl;
    }

    void pop_back(){
        if(head != nullptr){
             Node * curr = head;
             Node * prev = nullptr;
            while(curr->next != nullptr){
                prev = curr;
                curr = curr->next;
            }
            prev->next = nullptr;
            delete curr;
        }
        else{
            cout<<"There is nothing to pop"<<endl;
        }
    }

    void pop_front(){
        if(head != nullptr){
            Node * temp = head;
            head = head->next;
            delete temp;
        }
        else{
            cout<<"There is nothing to pop"<<endl;
        }
    }

    void pop_at(int pos) {
        if(head != nullptr){
            if(pos == 1)
                pop_front();
            else{
                Node * prev = nullptr;
                Node * curr = head;
                int cnt = 1;
                while(cnt < pos && curr->next != nullptr){
                    prev = curr;
                    curr = curr->next;
                    cnt++;
                }
                cout<<"cnt : "<<cnt<<endl;
                if(cnt == pos){
                    if(curr->next == nullptr){
                        prev->next = nullptr;
                    } else {
                        prev->next = curr->next;
                        curr->next = nullptr;
                    }
                } else {
                    cout<<"Position doesn't exist"<<endl;
                }
            }
        }
        else{
            cout<<"There is nothing to pop"<<endl;
        }
    }

};

int main()
{
    LinkedList ls;
    ls.push_back(10);
    ls.push_back(20);
    ls.push_back(30);
    ls.push_front(40);
    ls.push_front(50);
    ls.print();
    ls.pop_at(3);
    ls.print();
}