//�ó���������scanf_s()����������
//Ҫʹ�����������У��ͱ���Ҫ��ÿ��ѭ���еõ�num��һ����ֵ��������status
//����status��Ŀ�����ж��û��������ֵ�Ƿ�������͡������ϣ�������ѭ�����������ϣ��������ֹ
#include <stdio.h>
int main()
{
	int num;
	int sum = 0;
	int status;

	printf("Please enter an integer to be summed ");
	printf("(q to quit):");
	
	status = scanf_s("%d", &num);
	//��һ�����ԣ�scanf_s()���ɹ���ȡһ����������ô�Ὣ�丳��num��������1�����1����status

	//�����ѭ����һ���ۼӵĳ���
	//���û����������������ʱ��ѭ�����������num����ֵ���ݡ�
	// ÿ��ѭ����num���õ����ֶ���ˢ�£�num�ĵ�ǰֵ���ᱻ�ӵ�sum�ϡ�
	//sum���ǵ�ǰ����֮��

	while (status == 1)//== ����˼��ʾ���ڣ����Ǹ�ֵ
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit)");
		status = scanf_s("%d", &num);
	}
	//�����õ��ڶ������ԣ�scanf_s()��ȡʧ�ܵ�ʱ�򣬻᷵��0����ʱstatus��ֵ�����ı䣬�����������whileѭ��������
	//��scanf_s��ת��ֵ֮ǰ�ͳ��������⣬�᷵��EOF������Ҳ����ֹ

	printf("Those integers sum to %d.\n", sum);

	return 0;
}