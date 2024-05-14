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

Node * findMid(Node * root){
    Node * fast = root;
    Node * slow = root;

    while(fast != nullptr && fast->next != nullptr){
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

Node * reverseLL(Node * root){
    
    Node * curr = root;
    Node * prev = nullptr;
    Node * next = nullptr;

    while(curr != nullptr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool checkPalindrome(Node * root){
    Node * mid = findMid(root);

    mid->next = reverseLL(mid->next);
    Node * temp = mid;
    mid = mid->next;
    while(mid != nullptr){
        if(mid->data != root->data){
            return false;
        }
        mid = mid->next;
        root = root->next;
    }
    temp->next = reverseLL(temp->next);
    return true;
}
void print(Node * head)
{
    Node * curr = head;
    cout<<"Linked List : ";
    while(curr != nullptr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}

int main()
{
    Node * head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);

    print(head);
    if(checkPalindrome(head)){
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
    print(head);
}
