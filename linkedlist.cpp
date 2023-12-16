#include <iostream>

class node {
	public:
	int data;
	node* next;
};

class linkedlist {
	private:
	node* head;
	public:
	linkedlist() {
		head = nullptr;
	}
	
	void insert(int val) {
		node* newnode = new node();
		newnode->data = val;
		newnode->next = head;
		head = newnode;
	}
	
	void display() {
		node* temp = head;
		while(temp != nullptr) {
			std::cout << temp->data;
			temp = temp->next;
			if(temp->next != nullptr)
				std::cout <<"->";
		}
	}
};

int main() {
	linkedlist list;
	list.insert(5);
	list.insert(6);
	list.insert(1);
	list.display();
	
	return 0;
}
