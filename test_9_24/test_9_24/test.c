#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Data {
	char name[10];
	int dj;
}ElemType;

typedef struct ListNode {
	ElemType data;
	struct ListNode* next;
}Node;

Node* initList() {
	Node* head = (Node*)malloc(sizeof(Node));
	head->next = NULL;
	return head;
}

void printList(Node* head) {
	Node* cur = head->next;
	while (cur) {
		printf("%s   %d\n", cur->data.name, cur->data.dj);
		cur = cur->next;
	}
}

void headInsert(Node* head, ElemType e) {
	Node* new = (Node*)malloc(sizeof(Node));
	new->data = e;
	new->next = head->next;
	head->next = new;
}

void del(Node* head, char* s) {
	Node* cur = head;
	while (cur->next) {
		if (strcmp(cur->next->data.name, s) == 0) {
			Node* del = cur->next;
			cur->next = del->next;
			free(del);
		}
		cur = cur->next;
	}
}
void xiugai(Node* head, char* s) {
	Node* cur = head->next;
	while (cur) {
		if (strcmp(cur->data.name, s) == 0) {
			cur->data.dj = 8;
			return;
		}
		cur = cur->next;
	}
}

void save(Node* head) {
	FILE* fp = fopen("吉伊卡哇.txt", "w");
	if (fp == NULL) {
		perror("save failed");
		return;
	}
	Node* cur = head->next;
	while (cur) {
		fprintf(fp, "%s %d\n", cur->data.name, cur->data.dj);
		cur = cur->next;
	}
	fclose(fp);
}

void read() {
	FILE* fp = fopen("吉伊卡哇.txt", "r");
	if (fp == NULL) {
		perror("read failed");
		return;
	}
	Node* newList = (Node*)malloc(sizeof(Node));
	newList->next = NULL;
	Node* tail = newList;
	Node* newNode = (Node*)malloc(sizeof(Node));
	while (1){
		if (feof(fp)) {
			break;
		}
		fscanf(fp, "%s %d\n", newNode->data.name, &newNode->data.dj);
		newNode->next = NULL;
		tail->next = newNode;
		tail = newNode;
		newNode = (Node*)malloc(sizeof(Node));
	}
	free(newNode);
	printList(newList);
	fclose(fp);
}
int main() {
	struct Data arr[3] = { {"吉伊", 0}, {"小八", 5}, {"乌萨奇", 3} };
	Node* head = initList();
	headInsert(head, arr[2]);
	headInsert(head, arr[1]);
	headInsert(head, arr[0]);
	xiugai(head, "小八");
	/*save(head);
	read();*/
	printList(head);
	return 0;
}





















































