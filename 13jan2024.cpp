class Solution
{
    public:
    Node* insertionSort(struct Node* head)
    {
        if(!head || !head->next) return head;
        
        Node* dummy=new Node(-1);
        dummy->next=head;
        Node* temp=head;
        Node* it=head->next;
        head->next=NULL;
        
        while(it){
            Node* curr=it;
            Node* next=curr->next;
            curr->next=NULL;
            
            Node* prev=dummy;
            while(temp){
                if(temp->data >= curr->data) break;
                temp=temp->next;
                prev=prev->next;
            }
            prev->next=curr;
            curr->next=temp;
            
            temp=dummy->next;
            it=next;
        }
        
        return dummy->next;
    }
    
};