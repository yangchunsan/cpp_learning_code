//#include <stdio.h>
//#include <math.h>
//
//double funcos( double e, double x );
//
//int main()
//{    
//    double e, x;
//
//    scanf("%lf %lf", &e, &x);
//    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
//    
//    return 0;
//}
//
//double funcos( double e, double x )
//{
//    double result = 0.0; // ���ڴ洢���Һ����Ľ���ֵ
//    double term = 1.0; // ��ǰ���ֵ
//    int i = 0; // �����������0��ʼ
//
//    // �������Һ�����̩�ռ���չ��ʽ�У�ÿһ�������2�ı��������ǿ���ͨ��i��ֵ������
//    while (fabs(term) >= e)
//    {
//        term = pow(-1, i) * pow(x, 2 * i) / tgamma(2 * i + 1); // ���㵱ǰ�ʹ��tgamma��������׳�
//        result += term; // ����ǰ��ӵ������
//        i++; // �ƶ�����һ��
//    }
//
//    return result; // ���ؼ���õ������Һ����Ľ���ֵ
//}
