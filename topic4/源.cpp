#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define num 8 //����ʺ������

int* place = (int*)malloc(sizeof(int) * num);//�����ʾ�Ƿ��ûʺ�ı�־��һ���а˸�
int* y_flag = (int*)malloc(sizeof(int) * num);//��������Ǳ�ʾ���˻ʺ�֮���ʱ���������ܷ���ԷŻʺ�ı�־
int* d1 = (int*)malloc(sizeof(int) * (2 * num - 1));//����Ǳ�ʾ�Żʺ�֮����϶Խ����ܷ�ŵı�־
int* d2 = (int*)malloc(sizeof(int) * (2 * num - 1));//����Ǳ�ʾ�Żʺ���¶Խ����ܷ�Żʺ�ı�־
//���ϵı�־���飬����1��ʾ���Էţ�0��ʾ�����Է�
//ԭ�����ж�һ�����ӵ��������Ҹ��������Ƿ�����Ҫ���������Ҫ��������Ϊ�ģ�������

//��������˾ͽ��д�ӡ
void print(int* count) {
	*count += 1;//ͳ�ƴ���
	printf("��%d�Σ�\n", *count);	
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

//ִ�к���
void generate(int n, int* count) {
	//ÿһ���ʺ���8�ַ��÷���
	for (int col = 0; col < num; col++) {
		//������Է��õĻ����Ǿ������λ�õ�����Ϊ1���϶Խ��ߺ��¶Խ���ҲΪ1�����ǿ��Է���
		if (y_flag[col] && d1[n - col + 7] && d2[n + col]) {
			//���Է��õĻ�����ô��4����־������������λ�ñ�ռ����
			place[n] = col;
			y_flag[col] = 0;//����Ϊ0���������λ�ò��ܷ���
			d1[n - col + 7] = 0;
			d2[n + col] = 0;
			//���û�з��꣬�ͽ��еݹ����һ��
			if (n < num - 1)
				generate(n + 1, count);
			//��������ˣ��Ǿʹ�ӡ������
			else
				print(count);
			//����֮��ͽ��л��ݣ��ѵ�ǰ�ʺ��λ��Ĩ��
			place[n] = 0;
			y_flag[col] = 1;
			d1[n - col + 7] = 1;
			d2[n + col] = 1;
		}
	}
}

int main() {
	//��־�����ʼ��
	memset(place, 0, sizeof(place));
	memset(y_flag, 1, sizeof(y_flag));
	memset(d1, 1, sizeof(d1));
	memset(d2, 1, sizeof(d2));

	int count = 0;//ͳ��
	generate(0, &count);
}