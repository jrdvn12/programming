#include <stdio.h>
#include <stdlib.h>

// Group 2 Members: Balansag, Bruno, Carino, Fundario, Llemos, Talandato, Torres

struct node {
	int data;
	struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;
struct node *temp = NULL;

int isEmpty(struct node *head) {
	if(head==NULL) {
		return 1;
	} else {
		return 0;
	}
}

void insert() {
	int num;
	printf("\nEnter Element for Insert Linked List : ");
	scanf("%d", &num);

	if(isEmpty(head)) {
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=num;
		temp->next=NULL;
		head=temp;
		tail=temp;
	} else {
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=num;
		temp->next=NULL;
		tail->next=temp;
		tail=temp;
	}
}

void delete(struct node *head) {
	struct node *current = head;
	struct node *prev = head;

	if(isEmpty(head)) {
		printf("\nThe list is empty.\n");
		return;
	}

	int pos;
	printf("\nEnter Position for Delete Element : ");
	scanf("%d", &pos);

	if(pos==1) {
		head=current->next;
		free(current);
		current=NULL;
		printf("\nDeleted Successfully\n");
	} else {
		while(pos!=1) {
			prev=current;
			current=current->next;
			pos--;
		}
		prev->next=current->next;
		free(current);
		current=NULL;
		printf("\nDeleted Successfully\n");
	}
}

void display(struct node *head) {
	struct node *dis = head;
	if(isEmpty(head)) {
		printf("\nThe list is empty.\n");
		return;
	} else {
		int count=0;
		printf("\n");
		while(dis!=NULL) {
			printf("# %d #", dis->data);
			count++;
			dis=dis->next;
		}
		printf("\nNo. Of Items In Linked List : %d\n", count);
		return;
	}
}

void count(struct node *head) {
	struct node *cnt = head;
	if(isEmpty(head)) {
		printf("\nThe list is empty.\n");
		return;
	} else {
		int count=0;
		while(cnt!=NULL) {
			count++;
			cnt=cnt->next;
		}
		printf("\nNo. Of Items In Linked List : %d\n", count);
		return;
	}
}

int main() {
	printf("Singly Linked List\n");

	int option;
	while(1) {
		printf("\nOptions\n");
		printf("1 : Insert\n");
		printf("2 : Delete\n");
		printf("3 : Display\n");
		printf("4 : Count\n");
		printf("Others : Exit()\n");
		printf("Enter your option: ");
		scanf("%d", &option);

		switch(option) {
			case 1:
				insert();
				break;
			case 2:
				delete(head);
				break;
			case 3:
				display(head);
				break;
			case 4:
				count(head);
				break;
			default:
				exit(0);
		}
	}
}
