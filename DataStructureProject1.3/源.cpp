#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node, * LinkedList;

// 初始化链表
void InitList(LinkedList* L) {
    *L = (Node*)malloc(sizeof(Node));
    (*L)->next = NULL;
}

// 创建链表
void CreateList(LinkedList L) {
    int arr[] = { 3, 7, 12, 5, 9 };
    Node* tail = L;
    for (int i = 0; i < 5; i++) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = arr[i];
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }
}

// 逆置链表（原地逆置）
void ReverseList(LinkedList L) {
    if (L->next == NULL || L->next->next == NULL) return;

    Node* prev = NULL;         // 前驱节点
    Node* curr = L->next;      // 当前节点
    Node* next = NULL;         // 后继节点

    while (curr != NULL) {
        next = curr->next;    // 保存下一个节点
        curr->next = prev;    // 反转指针
        prev = curr;          // 前移prev
        curr = next;          // 前移curr
    }

    L->next = prev;  // 表头指向新的第一个节点
}

// 输出链表
void PrintList(LinkedList L) {
    Node* p = L->next;
    printf("链表内容: ");
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// 撤销链表
void DestroyList(LinkedList L) {
    Node* p = L->next;
    while (p != NULL) {
        Node* temp = p;
        p = p->next;
        free(temp);
    }
    free(L);
}

int main() {
    LinkedList L;
    InitList(&L);
    CreateList(L);

    printf("逆置前: ");
    PrintList(L);  // 输出: 3 7 12 5 9

    ReverseList(L);

    printf("逆置后: ");
    PrintList(L);  // 输出: 9 5 12 7 3

    DestroyList(L);
    return 0;
}