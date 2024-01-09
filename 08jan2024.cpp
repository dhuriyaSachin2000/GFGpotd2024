class Solution
{
    public:
    
    struct Node* reverse(Node *head) {
     Node *temp = NULL;
     Node *prev = NULL;
    Node *current = head;
    while(current != NULL) {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    return prev;
    }
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        if(node2==NULL)
        {
            return reverse(node1);
        }
        if(node1==NULL)
        {
            return reverse(node2);
        }
        if(node2->data>node1->data)
        {
            return mergeResult(node2,node1);
        }
        Node * curr1=node1;
        Node * prev1=node1;
        Node * curr2=node2->next;
        Node * prev2=node2;

        while(curr1!=NULL && curr2!=NULL)
        {
            if(curr1->data<=curr2->data)
       {
                curr1=curr1->next;
                prev2->next=prev1;
                prev1->next=curr2;
                prev2=prev1;
                prev1=curr1;

                
            }
            else if(curr1->data>curr2->data)
            {
                curr2=curr2->next;
                prev2=prev2->next;
            }
        }
        if(curr1!=NULL)
        {
            prev2->next=curr1;
        }
        
        return reverse(node2);
    }   
};