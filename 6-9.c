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
//    double result = 0.0; // 用于存储余弦函数的近似值
//    double term = 1.0; // 当前项的值
//    int i = 0; // 项的索引，从0开始
//
//    // 由于余弦函数的泰勒级数展开式中，每一项的幂是2的倍数，我们可以通过i的值来计算
//    while (fabs(term) >= e)
//    {
//        term = pow(-1, i) * pow(x, 2 * i) / tgamma(2 * i + 1); // 计算当前项，使用tgamma函数计算阶乘
//        result += term; // 将当前项加到结果中
//        i++; // 移动到下一项
//    }
//
//    return result; // 返回计算得到的余弦函数的近似值
//}
