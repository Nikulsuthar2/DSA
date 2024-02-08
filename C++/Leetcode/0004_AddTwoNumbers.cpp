#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* ans;
    ListNode* temp;
    int carry = 0;
    if(l1 != nullptr && l2 != nullptr){
        int sum = l1->val + l2->val + carry;
        carry = sum / 10;
        sum %= 10;
        ans = new ListNode(sum);
        temp = ans;
        l1 = l1->next;
        l2 = l2->next;
    }
    while(l1 != nullptr && l2 != nullptr){
        int sum = l1->val + l2->val + carry;
        //cout<<"suming "<<l1->val<<" + "<<l2->val<<" + (carry)"<<carry<<endl;
        carry = sum / 10;
        sum %= 10;

        //cout<<"after suming sum :"<<sum<<", new carry "<<carry<<endl;
        temp->next = new ListNode(sum);
        temp = temp->next;
        l1 = l1->next;
        l2 = l2->next;
    }
    while(l1 != nullptr){
        int sum = l1->val + carry;
        carry = sum / 10;
        sum %= 10;
        temp->next = new ListNode(sum);
        temp = temp->next;
        l1 = l1->next;
    }
    while(l2 != nullptr){
        int sum = l2->val + carry;
        carry = sum / 10;
        sum %= 10;
        temp->next = new ListNode(sum);
        temp = temp->next;
        l2 = l2->next;
    }
    if(carry != 0){
        temp->next = new ListNode(carry);
    }
    return ans;
}
void print(ListNode* root){
    cout<<"hello : ";
    while(root != nullptr){
        cout<<root->val<<" ";
        root = root->next;
    }
    cout<<endl;
}

int main()
{
    ListNode * l1;
    ListNode * l2;

    l1 = new ListNode(2);
    l2 = new ListNode(5);
    l1->next = new ListNode(4);
    l2->next = new ListNode(6);
    l1->next->next = new ListNode(3);
    l2->next->next = new ListNode(4);

    print(l1);
    print(l2);
    cout<<"--------------------"<<endl;
    ListNode* ans = addTwoNumbers(l1,l2);
    print(ans);
}
