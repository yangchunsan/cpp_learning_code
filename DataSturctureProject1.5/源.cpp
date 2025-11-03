#include <stdio.h>
#include <stdlib.h>

// 多项式节点结构
typedef struct PolyNode {
    float coef;    // 系数
    int expn;      // 指数
    struct PolyNode* next;
} PolyNode, * Polynomial;

// 创建多项式（带表头节点）
void CreatePoly(Polynomial* P) {
    *P = (PolyNode*)malloc(sizeof(PolyNode));
    (*P)->next = NULL;
}

// 插入多项式项（按指数降序排列）
void InsertTerm(Polynomial P, float coef, int expn) {
    if (coef == 0) return;  // 零系数项不插入

    PolyNode* prev = P;
    PolyNode* curr = P->next;

    // 找到插入位置（按指数降序）
    while (curr != NULL && curr->expn > expn) {
        prev = curr;
        curr = curr->next;
    }

    // 如果指数相同，合并同类项
    if (curr != NULL && curr->expn == expn) {
        curr->coef += coef;
        if (curr->coef == 0) {
            // 系数为零，删除该节点
            prev->next = curr->next;
            free(curr);
        }
    }
    else {
        // 创建新节点
        PolyNode* newNode = (PolyNode*)malloc(sizeof(PolyNode));
        newNode->coef = coef;
        newNode->expn = expn;
        newNode->next = curr;
        prev->next = newNode;
    }
}

// 创建多项式A(x)=3x^4+5x^2-2x+7
void CreatePolyA(Polynomial A) {
    InsertTerm(A, 3.0, 4);
    InsertTerm(A, 5.0, 2);
    InsertTerm(A, -2.0, 1);
    InsertTerm(A, 7.0, 0);
}

// 创建多项式B(x)=2x^5-5x^2+4x
void CreatePolyB(Polynomial B) {
    InsertTerm(B, 2.0, 5);
    InsertTerm(B, -5.0, 2);
    InsertTerm(B, 4.0, 1);
}

// 输出多项式
void PrintPoly(Polynomial P) {
    PolyNode* p = P->next;
    int first = 1;  // 标记是否为第一项

    if (p == NULL) {
        printf("0\n");
        return;
    }

    while (p != NULL) {
        // 处理符号
        if (!first) {
            if (p->coef > 0) {
                printf(" + ");
            }
            else {
                printf(" - ");
            }
        }
        else {
            if (p->coef < 0) {
                printf("-");
            }
        }

        // 处理系数
        float abs_coef = (p->coef < 0) ? -p->coef : p->coef;
        if (abs_coef != 1.0 || p->expn == 0) {
            if (abs_coef == (int)abs_coef) {
                printf("%.0f", abs_coef);
            }
            else {
                printf("%.1f", abs_coef);
            }
        }

        // 处理指数
        if (p->expn > 0) {
            printf("x");
            if (p->expn > 1) {
                printf("^%d", p->expn);
            }
        }

        first = 0;
        p = p->next;
    }
    printf("\n");
}

// 多项式相加
Polynomial AddPoly(Polynomial A, Polynomial B) {
    Polynomial C;
    CreatePoly(&C);

    PolyNode* pa = A->next;
    PolyNode* pb = B->next;

    while (pa != NULL || pb != NULL) {
        if (pa == NULL) {
            // A多项式已遍历完，添加B的当前项
            InsertTerm(C, pb->coef, pb->expn);
            pb = pb->next;
        }
        else if (pb == NULL) {
            // B多项式已遍历完，添加A的当前项
            InsertTerm(C, pa->coef, pa->expn);
            pa = pa->next;
        }
        else {
            if (pa->expn > pb->expn) {
                // A的当前项指数大于B的当前项
                InsertTerm(C, pa->coef, pa->expn);
                pa = pa->next;
            }
            else if (pa->expn < pb->expn) {
                // B的当前项指数大于A的当前项
                InsertTerm(C, pb->coef, pb->expn);
                pb = pb->next;
            }
            else {
                // 指数相同，系数相加
                float sum = pa->coef + pb->coef;
                if (sum != 0) {
                    InsertTerm(C, sum, pa->expn);
                }
                pa = pa->next;
                pb = pb->next;
            }
        }
    }

    return C;
}

// 多项式相乘
Polynomial MultPoly(Polynomial A, Polynomial B) {
    Polynomial C;
    CreatePoly(&C);

    PolyNode* pa = A->next;
    while (pa != NULL) {
        PolyNode* pb = B->next;
        while (pb != NULL) {
            float coef = pa->coef * pb->coef;
            int expn = pa->expn + pb->expn;
            InsertTerm(C, coef, expn);
            pb = pb->next;
        }
        pa = pa->next;
    }

    return C;
}

// 撤销多项式（释放内存）
void DestroyPoly(Polynomial P) {
    PolyNode* p = P->next;
    while (p != NULL) {
        PolyNode* temp = p;
        p = p->next;
        free(temp);
    }
    free(P);
}

int main() {
    Polynomial A, B;

    // 创建多项式A
    CreatePoly(&A);
    CreatePolyA(A);
    printf("A(x) = ");
    PrintPoly(A);

    // 创建多项式B
    CreatePoly(&B);
    CreatePolyB(B);
    printf("B(x) = ");
    PrintPoly(B);

    // 多项式相加
    Polynomial C = AddPoly(A, B);
    printf("A(x) + B(x) = ");
    PrintPoly(C);

    // 多项式相乘
    Polynomial D = MultPoly(A, B);
    printf("A(x) * B(x) = ");
    PrintPoly(D);

    // 撤销多项式
    DestroyPoly(A);
    DestroyPoly(B);
    DestroyPoly(C);
    DestroyPoly(D);

    return 0;
}