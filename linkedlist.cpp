#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void inserttail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void inserthead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deleteathead(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}
void deletion(node *&head, int var)
{ //this will give an error in corner case
    node *temp = head;
    if (head == NULL)
    { //if linked list is empty
        return;
    }
    if (head->next == NULL)
    { //if list have only one element
        deleteathead(head);
        return;
    }
    while (temp->next->data != var)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
}

node *reverserecurive(node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newhead = reverserecurive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
node *reverseknode(node *&head, int k)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    int count = 0;
    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
        head->next = reverseknode(nextptr, k);

    return prevptr;
}
void makecycle(node *&head, int pos)
{
    node *temp = head;
    node *startnode;

    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
            startnode = temp;

        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}
bool detectcycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
void removecycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}
int length(node *&head)
{
    int l = 0;
    node *temp = head;
    while (temp != 0)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
node *kappend(node *&head, int k)
{
    node *newhead;
    node *newtail;
    node *tail = head;

    int l = length(head);
    k = k % l;
    int count = 1;
    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newtail = tail;
        }
        if (count == l - k + 1)
        {
            newhead = tail;
        }
        tail = tail->next;
        count++;
    }
    newtail->next = NULL;
    tail->next = head;

    return newhead;
}
void intersect(node *&head1, node *&head2, int pos)
{
    node *temp1 = head1;
    pos--;
    while (pos--)
    {
        temp1 = temp1->next;
    }
    node *temp2 = head2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    temp2->next = temp1;
}

int intersection(node *&head1, node *&head2)
{
    int l1 = length(head1);
    int l2 = length(head2);

    int d = 0;
    node *ptr1;
    node *ptr2;

    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (d)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }

        d--;
    }
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}
node* mergelinklist(node* &head1, node* &head2){
    node* p1 = head1;
    node* p2 = head2;
    node* dummynode = new node(-1);
    node* p3 = dummynode;

    while (p1!=NULL && p2!= NULL)
    {
        if(p1->data<p2->data)
        {
            p3->next=p1;
            p1= p1->next;
        }
        else {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }


    while (p1!= NULL)
    {
        p3->next=p1;
        p1= p1->next;
        p3 = p3->next;
        
    }
    
    while (p2!= NULL)
    {
        p3->next=p2;
        p2= p2->next;
        p3 = p3->next;
    }
    return dummynode->next;
}
node* mergerecursive(node* &head1,node* &head2){
    node* result;
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    
    if (head1->data < head2->data)
    {
        result = head1;
        result->next = mergerecursive(head1->next,head2);
    }
    else{
        result = head2;
        result->next = mergerecursive(head1,head2->next);
    }
    return result;
}
void evenafterodd(node* &head){
    node* even = head->next;
    node* odd = head;
    node* evenstart = even;
    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;        
    }
    odd->next = evenstart;
    if (odd->next!= 0)
    {
        even->next = NULL;
    }   
}
int main()
{
    // node *head = NULL;
    // inserttail(head, 1);
    // inserttail(head, 2);
    // inserttail(head, 3);
    // // display(head);
    // inserttail(head, 4);
    // inserttail(head, 5);
    // inserttail(head, 6);
    // display(head);

    //search
    // // cout<<search(head,1)<<endl;

    //deletion
    // // deletion(head,2);
    // // display(head);
    // // deleteathead(head);
    // // display(head);

    // reverse linked list
    // // node *newhead = reverse(head);
    // // display(newhead);
    // // node* newhead1 = reverserecurive(head);
    // // display(newhead1);

    //reverse knode
    // // node *newhead2 = reverseknode(head, 2);
    // // display(newhead2);

    //cycle
    // makecycle(head, 3);
    // // display(head);
    // cout << detectcycle(head) << endl;
    // removecycle(head);
    // cout << detectcycle(head);
    // display(head);

    //kappend
    // //     node* head = NULL;
    // //   int arr[] = {1,2,3,4,5,6};
    // //     for (int i = 0; i < 6; i++)
    // //     {
    // //        inserttail(head,arr[i]);
    // //   }
    // //   display(head);
    // //   node* newhead = kappend(head,3);
    // //   display(newhead);

    //intersect and intersection
    // // inserttail(head1,4);
    // // node* head1 = NULL;
    // // node* head2 =NULL;//
    // // inserttail(head1,1);
    // // inserttail(head1,2);
    // // inserttail(head1,3);
    // // inserttail(head1,5);
    // // inserttail(head1,6);
    // // inserttail(head2,9);
    // // inserttail(head2,10);
    // // intersect(head1,head2,3);
    // // display(head1);
    // // display(head2);
    // // cout<<intersection(head1,head2)<<endl;



//merge linked list
    node* head1 = NULL;
    node* head2 = NULL;
    int arr1[] = {1,4,5,7};
    int arr2[] = {2,3,6};
    for (int i = 0; i < 4; i++)
    {
        inserttail(head1,arr1[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        inserttail(head2,arr2[i]);
    }
    display(head1);
    display(head2);
    node* newhead = mergelinklist(head1,head2);
    display(newhead);

    // node* newhead1 = mergerecursive(head1,head2);
    // display(newhead1);

//even after odd
    // node* head = NULL;
    // int arr[] ={1,2,3,4,5,6};
    // for (int i = 0; i < 6; i++)
    // {
    //     inserttail(head,arr[i]);
    // }
    // display(head);
    // evenafterodd(head);
    // display(head);

    return 0;
}