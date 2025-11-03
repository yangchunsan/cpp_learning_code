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

// 链表排序（使用插入排序算法）
void SortList(LinkedList L) {
    if (L->next == NULL || L->next->next == NULL)
        return;  // 空链表或只有一个节点无需排序

    Node* sorted = NULL;      // 已排序部分的头节点
    Node* current = L->next;  // 当前待排序节点

    while (current != NULL) {
        Node* next = current->next;  // 保存下一个节点

        // 在已排序链表中找到插入位置
        Node** ptr = &sorted;
        while (*ptr != NULL && (*ptr)->data < current->data) {
            ptr = &((*ptr)->next);
        }

        // 插入节点
        current->next = *ptr;
        *ptr = current;

        current = next;  // 处理下一个节点
    }

    L->next = sorted;  // 更新链表头
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

    printf("排序前: ");
    PrintList(L);  // 输出: 3 7 12 5 9

    SortList(L);

    printf("排序后: ");
    PrintList(L);  // 输出: 3 5 7 9 12

    DestroyList(L);
    return 0;
}