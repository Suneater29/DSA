Node* arrtoLL(vector<int>&arr){
    Node* dummy=new Node(-1);
    Node* temp=dummy;
    for (int i=0; i < arr.size(); i++) {
        temp->child = new Node(arr[i]);
        temp = temp->child;
    }
    return dummy->child;
}
Node* flattenLinkedList(Node* head) 
{
    vector<int>arr;
    while(head!=nullptr){
        Node* temp=head;
        while(temp!=nullptr){
            arr.push_back(temp->data);
            temp=temp->child;
        }
        head=head->next;
    }
    sort(arr.begin(),arr.end());
    return arrtoLL(arr);
}