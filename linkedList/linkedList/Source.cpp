#include <iostream>
using namespace std;

// class node {
// public:
//	int data;
//	node* next;
//
//	node(int value) {
//		data = value;
//		next = NULL;
//	}
// };
//
// void insertAtHead(node*& head, int value) {
//	node* n = new node(value);
//	n->next = head;
//	head = n;
// }
//
// void insertAtTAil(node* &head,int value) {
//
//	node* n = new node(value);
//
//	if (head == NULL) {
//		head = n;
//		return;
//	}
//
//	node* temp = head;
//	while (temp->next != NULL) {
//		temp = temp->next;
//	}
//	temp->next = n;
//
// }
//
// bool search(node* head, int key) {
//	node* temp = head;
//	while (temp != NULL) {
//		if (temp->data == key) {
//			return true;
//		}
//		temp = temp->next;
//	}
//	return false;
// }
//
// void display(node* head) {
//	node* temp = head;
//	while (temp != NULL) {
//		cout << temp->data << " ";
//		temp = temp->next;
//	}
// }
//
// int main() {
//
//	node* head = NULL;
//
//	insertAtTAil(head, 1);
//	insertAtTAil(head, 2);
//	insertAtTAil(head, 3);
//
//	insertAtHead(head, 0);
//
//	display(head);
//
//	cout << search(head, 4);
//
//
//	return 0;
// }

class node
{
public:
	int data;
	node* next;

	node(int value)
	{
		data = value;
		next = NULL;
	}
};

void insertAtTail(node*& head, int value)
{
	node* newNode = new node(value);
	if (head == NULL)
	{
		head = newNode;
		return;
	}
	node* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newNode;
}

// void delAtHead(node* head) {
//	node* del = head;
//	head = head->next;
//
//	delete del;
// }
//
// void deleteNode(node*& head,int num) {
//
//	if (head == NULL) {
//		return;
//	}
//
//	if (head->next == NULL) {
//		delAtHead(head);
//		return;
//	}
//
//	node* temp=head;
//	while (temp->next->data != num) {
//		temp = temp->next;
//	}
//
//	node* del = temp->next;
//
//	temp->next = temp->next->next;
//
//	delete del;
// }

void deleteNode(node* head, int value)
{
	if (head == NULL)
	{
		return;
	}

	if (head->next == NULL)
	{
		node* del = head;
		head = head->next;

		delete del;
	}

	node* temp = head;

	while (temp->next != NULL && temp->next->data != value)
	{
		temp = temp->next;
	}
	if (temp->next == NULL && temp->data != value)
	{
		return;
	}
	node* del = temp->next;

	temp->next = temp->next->next;

	delete del;
}

void insertAtHead(node*& head, int value)
{
	node* newNode = new node(value);
	newNode->next = head;
	head = newNode;
}

void display(node* head)
{
	node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL";
}

// node *iterativeReverse(node *&head)
// {
// 	node *prev = NULL;
// 	node *curr = head;
// 	node *next;

// 	while (curr != NULL)
// 	{
// 		next = curr->next;

// 		curr->next = prev;

// 		prev = curr;
// 		curr = next;
// 	}

// 	return prev;
// }

// node *recursiveReverse(node *&head)
// {
// 	node *newHead = recursiveReverse(head->next);
// 	head->next->next = head;
// 	head->next = NULL;

// 	return newHead;
// }

// node *reverseK(node *&head, int k)
// {
// 	node *nextPtr = NULL;
// 	node *prevPtr = NULL;
// 	node *currPtr = head;
// 	int count = 0;
// 	while (currPtr != NULL && count < k)
// 	{
// 		nextPtr = currPtr->next;
// 		currPtr->next = prevPtr;
// 		prevPtr = currPtr;
// 		currPtr = nextPtr;
// 		count++;
// 	}

// 	if (currPtr != NULL)
// 	{
// 		head->next = reverseK(nextPtr, k);
// 	}
// 	return prevPtr;
// }

void reverseK(node*& head, int k)
{
	if (head == NULL) {
		cout << "List is Empty!";
		return;
	}
	node* traverse = head;
	int l = 1;
	while (traverse->next != NULL) {
		l++;
		traverse = traverse->next;
	}
	if (k > l) {
		cout << "Length is out of range!";
		return;
	}
	node* tail = traverse;
	cout << tail->data;
	traverse = head;
	int count = 1;
	int limit = (k - l);
	while (traverse->next != NULL && count != limit)
	{
		count++;
		traverse = traverse->next;
	}
	cout << count;
	node* newTail = traverse;
	node* newHead = traverse->next;
	newTail->next = NULL;
	tail->next = head;

	head = newHead;
}

//int main()
//{
//	node* head = NULL;
//	insertAtTail(head, 1);
//	insertAtTail(head, 2);
//	insertAtTail(head, 3);
//	insertAtTail(head, 4);
//	insertAtTail(head, 5);
//	 deleteNode(head, 2);
//	 display(head);
//	cout << endl;
//
//	 node* newHead = iterativeReverse(head);
//	 display(newHead);
//	 cout << endl;
//
//	 display(iterativeReverse(newHead));
//	 cout << endl;
//
//	 node *kHead = reverseK(head, 2);
//	 display(kHead);
//	 cout << endl;
//
//	reverseK(head, 1);
//
//	display(head);
//	cout << endl;
//	return 0;
//}

//intersection 

int length(node*& head) {
	node* temp = head;
	int count = 0;

	while (temp != NULL) {
		temp = temp->next;
		count++;
	}
	return count;
}
void intersect(node*& head0, node*& head1, int position) {
	node* temp0 = head0;
	//position--;
	while (position) {
		temp0 = temp0->next;
		position--;
	}
	node* temp1 = head1;
	while (temp1->next != NULL) {
		temp1 = temp1->next;
	}
	temp1->next = temp0;
}

int checkIntersection(node*& head0, node*& head1) {

	int head0Length = length(head0);
	int head1Length = length(head1);

	node* temp0;
	node* temp1;

	int d = 0;

	if (head0Length > head1Length) {
		d = head0Length - head1Length;
		temp0 = head0;
		temp1 = head1;
	}
	else {
		d = head1Length - head0Length;
		temp0 = head1;
		temp1 = head0;
	}
	while (d) {
		temp0 = temp0->next;
		if (temp0 == NULL) {
			return -1;
		}
		d--;
	}
	while (temp0 != NULL && temp1 != NULL) {
		if (temp0 == temp1) {
			return temp0->data;
		}
		temp0 = temp0->next;
		temp1 = temp1->next;

	}
	return -1;
}

node* merge(node* head0, node* head1) {
	node* t0 = head0;
	node* t1 = head1;
	node* dummyNode = new node(-1);
	node* t3 = dummyNode;

	while (t0 != NULL && t1 != NULL) {
		if (t0->data < t1->data) {
			t3->next = t0;
			t0 = t0->next;
		}
		else {
			t3->next = t1;
			t1 = t1->next;
		}

		t3 = t3->next;
	}
	while (t1 != NULL) {
		t3->next = t1;
		t1 = t1->next;
		t3 = t3->next;
	}
	while (t0 != NULL) {
		t3->next = t0;
		t0 = t0->next;
		t3 = t3->next;
	}
	return dummyNode->next;
}

node* mergeRecursive(node* head0, node* head1) {
	if (head0 == NULL) {
		return head1;

	}
	if (head1 == NULL) {
		return head0;
	}
	node* result;
	if (head0->data < head1->data) {
		result = head0;
		result->next=mergeRecursive(head0->next, head1);
	}
	else {
		result = head1;
		result->next=mergeRecursive(head0, head1->next);
	}
	return result;
}
int main() {
	node* head0 = NULL;
	//int arr0[] = { 1,4,5,7 };
	int arr0[] = { 1,2,3,4 };
	for (int i = 0; i < 4; i++)
	{
		insertAtTail(head0, arr0[i]);
	}


	node* head1 = NULL;
	//int arr1[] = { 2,3,6 };
	int arr1[] = { 1,2,3 };
	for (int i = 0; i < 3; i++)
	{
		insertAtTail(head1, arr1[i]);
	}

	/*intersect(head, head0, 3);
	cout << endl;
	cout << checkIntersection(head, head0);
	cout << endl;
	display(head);
	cout << endl;
	display(head0);*/

	
	//node* newList = merge(head0, head1);
	node* newList = mergeRecursive(head0, head1);

	display(newList);
	cout << endl << endl << endl;
	return 0;
}

// doubly linked list

// class doubly{
// 	public:
// 	int val;
// 	doubly* next;
// 	doubly* prev;
// 	doubly(int value){
// 		val=value;
// 		next=NULL;
// 		prev=NULL;
// 	}
// };
// void insertAtHead(doubly*& head,int val){
// 	doubly* n=new doubly(val);
// 	n->next=head;
// 	if(head!=NULL){
// 	head->prev=n;
// 	}
// 	head=n;
// }
// void insertAtTail(doubly* &head,int val){
// 	if(head==NULL){
// 		insertAtHead(head,val);
// 		return;
// 	}
// 	doubly* n=new doubly(val);
// 	doubly* temp=head;

// 	while(temp->next!=NULL){
// 		temp=temp->next;
// 	}
// 	temp->next=n;
// 	n->prev=temp;
// }

// void display(doubly *head){
// 	doubly* temp=head;
// 	cout<<"NULL<-";
// 	while(temp!=NULL){
// 		cout<<temp->val<<"->";
// 		temp=temp->next;
// 	}
// 		cout<<"NULL";
// 		cout<<endl;
// }

// void deleteAtHead(doubly* &head){
// 	doubly* temp=head;
// 	head->next->prev=NULL;
// 	head=head->next;

// 	delete temp;
// }

// void deleteNode(doubly* &head,int key){
// 	if(key==1){
// 		deleteAtHead(head);
// 		return;
// 	}
// 	doubly* temp=head;
// 	int count=1;
// 	while(temp!=NULL && count!=key){
// 		temp=temp->next;
// 		count++;
// 	}

// 	if(temp->next!=NULL){
// 	temp->next->prev=temp->prev;
// 	}
// 	temp->prev->next=temp->next;
// 	delete temp;
// }

// int main(){
// 	doubly* head=NULL;
// 	insertAtTail(head,1);
// 	insertAtTail(head,2);
// 	insertAtTail(head,3);
// 	insertAtTail(head,4);
// 	insertAtTail(head,5);

// 	display(head);

// 	deleteNode(head,2);

// 	display(head);

// 	deleteAtHead(head);

// 	display(head);

// 	return 0;
// }