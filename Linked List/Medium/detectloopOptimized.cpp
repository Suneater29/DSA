bool loop(Node* head){
    Node* fast=head;
    Node* slow=head;
    fast=fast->next->next;
    slow=slow->next;
    if(fast==nullptr || fast->next==nullptr){
        return false;
    }
    else{
        return true;
    }
}