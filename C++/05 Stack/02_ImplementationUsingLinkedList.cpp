#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node * next;
    Node(int v): val(v), next(nullptr) {};
    Node(int v, Node *n): val(v), next(n) {};
};

class Stack 
{
    Node * head = nullptr;
    Node * TOP = head;
    int sizeCount = 0;

    public:
    void push(int n){
        if(head != nullptr){
            TOP = new Node(n,TOP);
        }
        else{
            head = new Node(n);
            TOP = head;
        }
        sizeCount++;
    }

    int top(){
        if(TOP != nullptr){
            return TOP->val;
        }
        else{
            return -1;
        }
    }

    int pop()
    {
        int poped = -1;
        if(sizeCount > 0){
            if(TOP != nullptr){
                poped = TOP->val;
                TOP = TOP->next;
                sizeCount--;
            }
        }
        else{
            cout<<"Stack is Empty\n";
        }
        return poped;
    }

    int size()
    {
        return sizeCount;
    }

    void displayStack(){
        Node * curr = TOP;
        cout<<"Stack : ";
        if(sizeCount > 0){
            while(curr != nullptr){
                cout<<curr->val<<" ";
                curr = curr->next;
            }
        }
        else{
            cout<<"Stack is Empty";
        }
        cout<<endl;
    }
};

int main()
{
    Stack s1;
    int mc;
    do{
        cout<<"==========MENU=========="<<endl;
        cout<<"1. Push Element"<<endl;
        cout<<"2. Pop Element"<<endl;
        cout<<"3. Top Element"<<endl;
        cout<<"4. Size of Stack"<<endl;
        cout<<"5. Display Stack"<<endl;
        cout<<"6. Exit Menu"<<endl;
        cout<<"========================"<<endl;
        cout<<"Enter your choice : ";
        cin>>mc;

        switch (mc)
        {
        case 1:
            cout<<"\nEnter element : ";
            int temp;
            cin>>temp;
            s1.push(temp);
            cout<<endl;
            break;
        case 2:
            cout<<"\nElement "<<s1.pop()<<" Poped from Stack"<<endl<<endl;
            break;
        case 3:
            cout<<"\nTop Element "<<s1.top()<<endl<<endl;
            break;
        case 4:
            cout<<"\nSize of Stack "<<s1.size()<<endl<<endl;
            break;
        case 5:
            cout<<endl;
            s1.displayStack();
            cout<<endl;
            break;
        case 6:
            cout<<"Closing....";
            break;
        default:
            cout<<"-----------Wrong Menu Choice---------"<<endl;
            break;
        }
    }
    while(mc != 6);
}