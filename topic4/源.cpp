#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define num 8 //定义皇后的数量

int* place = (int*)malloc(sizeof(int) * num);//这个表示是放置皇后的标志，一共有八个
int* y_flag = (int*)malloc(sizeof(int) * num);//这个数组是表示放了皇后之后此时的纵列是能否可以放皇后的标志
int* d1 = (int*)malloc(sizeof(int) * (2 * num - 1));//这个是表示放皇后之后的上对角线能否放的标志
int* d2 = (int*)malloc(sizeof(int) * (2 * num - 1));//这个是表示放皇后后下对角线能否放皇后的标志
//以上的标志数组，其中1表示可以放，0表示不可以放
//原理是判断一个格子的上下左右各四条线是否都满足要求，如果满足要求则总数为四，即放满

//如果放满了就进行打印
void print(int* count) {
	*count += 1;//统计次数
	printf("第%d次：\n", *count);	
	for (int x = 0; x < num; x++) {
		for (int y = 0; y <= num; y++) {
			printf("|");
			if (place[x] == y)
				printf("Q");
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("\n");
}

//执行函数
void generate(int n, int* count) {
	//每一个皇后有8种放置方法
	for (int col = 0; col < num; col++) {
		//如果可以放置的话，那就是这个位置的纵向为1，上对角线和下对角线也为1，就是可以放置
		if (y_flag[col] && d1[n - col + 7] && d2[n + col]) {
			//可以放置的话，那么这4个标志数组就宣告这个位置被占领了
			place[n] = col;
			y_flag[col] = 0;//定义为0，就是这个位置不能放了
			d1[n - col + 7] = 0;
			d2[n + col] = 0;
			//如果没有放完，就进行递归放下一个
			if (n < num - 1)
				generate(n + 1, count);
			//如果放完了，那就打印这个结果
			else
				print(count);
			//放完之后就进行回溯，把当前皇后的位置抹除
			place[n] = 0;
			y_flag[col] = 1;
			d1[n - col + 7] = 1;
			d2[n + col] = 1;
		}
	}
}

int main() {
	//标志数组初始化
	memset(place, 0, sizeof(place));
	memset(y_flag, 1, sizeof(y_flag));
	memset(d1, 1, sizeof(d1));
	memset(d2, 1, sizeof(d2));

	int count = 0;//统计
	generate(0, &count);
}