#include <stdio.h>
#include <stdlib.h>

#define INIT_CAPACITY 10

typedef struct {
    int* data;
    int length;
    int capacity;
} SeqList;

// 初始化顺序表
void InitList(SeqList* L) {
    L->data = (int*)malloc(INIT_CAPACITY * sizeof(int));
    L->length = 0;
    L->capacity = INIT_CAPACITY;
}

// 查找元素
int LocateElem(SeqList L, int x) {
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] == x) {
            return i;
        }
    }
    return -1;
}

// 插入元素
void InsertElem(SeqList* L, int pos, int x) {
    if (pos < 0 || pos > L->length) {
        printf("插入位置无效\n");
        return;
    }
    if (L->length == L->capacity) {
        int* newData = (int*)realloc(L->data, 2 * L->capacity * sizeof(int));
        if (!newData) {
            printf("内存分配失败\n");
            return;
        }
        L->data = newData;
        L->capacity *= 2;
    }
    for (int i = L->length; i > pos; i--) {
        L->data[i] = L->data[i - 1];
    }
    L->data[pos] = x;
    L->length++;
}

// 删除元素
void DeleteElem(SeqList* L, int pos) {
    if (pos < 0 || pos >= L->length) {
        printf("删除位置无效\n");
        return;
    }
    for (int i = pos; i < L->length - 1; i++) {
        L->data[i] = L->data[i + 1];
    }
    L->length--;
}

// 输出顺序表
void PrintList(SeqList L) {
    for (int i = 0; i < L.length; i++) {
        printf("%d ", L.data[i]);
    }
    printf("\n");
}

// 撤销顺序表
void DestroyList(SeqList* L) {
    free(L->data);
    L->data = NULL;
    L->length = 0;
    L->capacity = 0;
}

int main() {
    SeqList L;
    InitList(&L);
    int initial[] = { 3, 7, 12, 5, 9, 1, 8 };
    for (int i = 0; i < 7; i++) {
        L.data[i] = initial[i];
    }
    L.length = 7;

    // (1) 查找元素5
    int pos = LocateElem(L, 5);
    printf("元素5的位置: %d\n", pos);  // 输出: 3

    // (2) 在位置3插入15
    InsertElem(&L, 3, 15);
    PrintList(L);  // 输出: 3 7 12 15 5 9 1 8

    // (3) 删除位置5的元素
    DeleteElem(&L, 5);
    PrintList(L);  // 输出: 3 7 12 15 5 1 8

    DestroyList(&L);
    return 0;
}