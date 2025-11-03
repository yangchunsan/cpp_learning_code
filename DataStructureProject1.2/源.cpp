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
void CreateList(LinkedList L, int arr[], int n) {
    Node* tail = L;
    for (int i = 0; i < n; i++) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = arr[i];
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }
}

// 查找元素前驱
Node* FindPrev(LinkedList L, int x) {
    Node* p = L;
    while (p->next != NULL) {
        if (p->next->data == x) {
            return p;
        }
        p = p->next;
    }
    printf("元素 %d 不存在\n", x);
    return NULL;
}

// 在指定数据节点后插入（数据节点从1开始计数）
void InsertAfterDataNode(LinkedList L, int pos, int x) {
    if (pos < 1) {
        printf("插入位置无效\n");
        return;
    }

    Node* p = L->next;  // 指向第一个数据节点
    int count = 1;

    // 找到第pos个数据节点
    while (p != NULL && count < pos) {
        p = p->next;
        count++;
    }

    if (p == NULL || count != pos) {
        printf("插入位置无效\n");
        return;
    }

    // 在p节点后插入新节点
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = p->next;
    p->next = newNode;
}

// 删除指定位置的数据节点（从1开始计数）
void DeleteDataNode(LinkedList L, int pos) {
    if (pos < 1) {
        printf("删除位置无效\n");
        return;
    }

    Node* p = L;  // 从表头开始
    int count = 0;

    // 找到要删除节点的前驱节点
    while (p->next != NULL && count < pos - 1) {
        p = p->next;
        count++;
    }

    if (p->next == NULL || count != pos - 1) {
        printf("删除位置无效\n");
        return;
    }

    Node* temp = p->next;
    p->next = temp->next;
    free(temp);
}

// 输出链表
void PrintList(LinkedList L) {
    Node* p = L->next;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    LinkedList L;
    InitList(&L);
    int arr[] = { 3, 7, 12, 5, 9 };
    CreateList(L, arr, 5);

    printf("初始链表: ");
    PrintList(L);  // 输出: 3 7 12 5 9

    // (1) 查找元素5的前驱
    Node* prev = FindPrev(L, 5);
    if (prev != NULL) {
        printf("元素5的前驱节点值: %d\n", prev->data);  // 应该输出: 12
    }

    // (2) 在第2个数据节点后插入15
    // 第2个数据节点是7，在其后插入15
    InsertAfterDataNode(L, 2, 15);
    printf("插入15后的链表: ");
    PrintList(L);  // 输出: 3 7 15 12 5 9

    // (3) 删除第4个数据节点（值为5的节点）
    // 注意：插入15后，数据节点位置：
    // 第1个:3, 第2个:7, 第3个:15, 第4个:12, 第5个:5, 第6个:9
    // 题目要求删除第4个数据节点，应该是值为5的节点
    // 但插入15后，值为5的节点变成了第5个数据节点
    // 所以我们需要删除第5个数据节点

    DeleteDataNode(L, 5);  // 删除第5个数据节点（值为5）
    printf("删除第5个数据节点后的链表: ");
    PrintList(L);  // 应该输出: 3 7 15 12 9

    return 0;
}