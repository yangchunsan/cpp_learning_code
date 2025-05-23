#include<stdio.h>
#include<string.h>
int main()
{
    char arr[5][81];
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%s", &arr[i]);
    }

    for (i = 1; i < 5; i++)
    {
        char key[81];
        strcpy(key, arr[i]);
        int j = i;

        while (j > 0 && strcmp(key, arr[j - 1]) < 0)
        {
            strcpy(arr[j], arr[j - 1]);
            j--;
        }

        if (j != i)
        {
            strcpy(arr[j], key);
        }
    }

    printf("After sorted:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", arr[i]);
    }

    return 0;
}
//#include <stdio.h>
//
//// 插入排序函数，排列的顺序是从左到右依次变大
//void insertionSort(int arr[], int length) 
//{
//    int i, j;
//    //第一步：将第一个元素视为已排列的数据
//    //跟冒泡排序一样的是，只需要n-1次的for循环就可以了
//    for (i = 1; i < length; i++) //第二步：从输入数据中取出第二个元素（下标i=1）并将其视为要插入前面已排序列的元素
//	{
//        int key = arr[i];//key的作用是暂时储存要插入前面已排序列的元素
//        j = i - 1;//这是用于追踪当前比较的元素在数组中的位置
//
//        // 将 arr[i] 插入到已排序序列 arr[0...i-1] 中的正确位置
//        
//        //一定要明确的是如果符合要求是不需要进入while循环的
//        //因为只要保证前面已排序列的数据的最后一个元素和要插入前面已排序列的元素比较的结果符合顺序
//		//就一定能确保整体都是符合顺序的，前面已排列的数据也是一次一次排列出来的
//		while (j >= 0 && arr[j] > key) 
//		//j >= 0是确保数组不会越界
//		//如果 arr[j] > key 说明相比较的两个元素顺序不符合要求，因此进入while循环进行调整
//		{
//            arr[j + 1] = arr[j];//这一步是将要插入前面已排序列的元素变成被比较的元素
//            j = j - 1;//这是用于追踪当前比较的元素在数组中的位置，成功比较一次之后继续与前面已排序列的元素相比较
//            //然后顺着这个while循环将前面的元素全部都遍历一遍
//            //特别注意的是，每一次while循环，要插入前面已排序列的元素就会发生改变！！！
//        }
//        arr[j + 1] = key;
//    }
//}
//
//int main() 
//{
//    int arr[] = {12, 11, 13, 5, 6, 7};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    insertionSort(arr, n);
//    
//    for (int i = 0; i < n; i++)
//	{
//        printf("%d ", arr[i]);
//	}
//
//    return 0;
//}

//我的疑问在于为何不会有数据的丢失，那么开始逐步记录调试的记录
//12,11,13,5,6,7

//第一次进入for循环，要插入的元素是11，key储存的元素是11，下标j是0，指向的元素是12
  //然后判断是否能进入while循环，发现j>=0 12>11
    //进入while循环
    //将要插入前面已排序列的元素11变成被比较的元素12  12 12 13 5 6 7
    //下标j变成-1
  //判断是否能进入while循环，j < 0 不能进入while循环
  //然后将被比较的元素12变成要插入前面已排序列的元素11  11 12 13 5 6 7
  
//第二次进入for循环，要插入的元素是13，key储存的元素是13，下标j是1，指向的元素是12
  //然后判断是否能进入while循环，发现j>=0 12<13 不能进入while循环
  //将被比较的元素变成要插入前面已排序列的元素，然后会神奇的发现其实什么都没有改变 11 12 13 5 6 7
   
//第三次进入for循环，要插入的元素是5，key储存的元素是5，下标j是2，指向的元素是13
  //然后判断是否能进入while循环，发现j>=0 13>5 
    //进入while循环
    //将要插入前面已排序列的元素5变成被比较的元素13  11 12 13 13 6 7
    //下标j变成1
  //判断是否能进入while循环，j>0 12>5 
    //进入while循环
    //将要插入前面已排序列的元素13变成被比较的元素12  11 12 12 13 6 7
    //下标变成0
  //判断是否能进入while循环，j>=0 11>5 
    //进入while循环
    //将要插入前面已排序列的元素12变成被比较的元素11  11 11 12 13 6 7
  //判断是否能进入while循环，j < 0 不能进入while循环
  //将被比较的元素11变成要插入前面已排序列的元素5  5 11 12 13 6 7

//第四次进入for循环，要插入的元素是6，key储存的元素是6，下标j是3，指向的元素是13
  //然后判断是否能进入while循环，发现j>=0 13>6
    //进入while循环
    //将要插入前面已排序列的元素6变成被比较的元素13  5 11 12 13 13 7
    //下标变成2
  //判断是否能进入while循环，j>=0 12>6
    //进入while循环
    //将要插入前面已排序列的元素13变成被比较的元素12  5 11 12 12 13 7
    //下标变成1
  //判断是否能进入while循环，j>=0 11>6
    //进入while循环
    //将要插入前面已排序列的元素12变成被比较的元素11  5 11 11 12 13 7
    //下标变成0
  //判断是否能进入while循环，j>=0 11>6
    //进入while循环
    //将要插入前面已排序列的元素11变成被比较的元素6  5 6 11 12 13 7
    //下标变成-1
  //判断是否能进入while循环，j < 0 不能进入while循环  
  //将被比较的元素变成要插入前面已排序列的元素，然后会神奇的发现其实什么都没有改变  5 6 11 12 13 7
  
//第五次进入for循环，要插入的元素是7，key储存的元素是7，下标j是4，指向的元素是13
  //然后判断是否能进入while循环，发现j>=0 13>7
    //进入while循环
    //将要插入前面已排序列的元素7变成被比较的元素13  5 6 11 12 13 13
    //下标变为3
  //判断是否能进入while循环，j>=0 12>7
    //进入while循环
    //将要插入前面已排序列的元素13变成被比较的元素12  5 6 11 12 12 13
    //下标变为2
  //判断是否能进入while循环，j>=0 11>7
    //将要插入前面已排序列的元素12变成被比较的元素11  5 6 11 12 12 13
    //下标变为1
  //判断是否能进入while循环，j>=0 6<7 不能进入while循环
  //将被比较的元素11变成要插入前面已排序列的元素7  5 6 7 11 12 13
  
//所以发现是不会漏任何数据的
    

#include <stdio.h>
#include <string.h>

int main() 
{
    char arr[5][81];
    int i, j;
    
    // 输入
    for (i = 0; i < 5; i++) 
	{
        scanf("%s", &arr[i]);
    }
    
    for (i = 1; i < 5; i++) 
	{
        char key[81];
        strcpy(key, arr[i]);
        j = i - 1;
        
        while (j >= 0 && strcmp(arr[j], key) > 0) 
		{
            strcpy(arr[j + 1], arr[j]);
            j = j - 1;
        }
        strcpy(arr[j + 1], key);
    }
    
    printf("After sorted:\n");
    for (i = 0; i < 5; i++) 
	{
         printf("%80s\n", arr[i]);
    }
    
    return 0;
}
  
  #include<stdio.h>
  #include<string.h>
  int main()
  {
      char arr[5][81];
      int i = 0;
      for (i = 0; i < 5; i++)
      {
          scanf("%s", &arr[i]);
      }
  
      for (i = 1; i < 5; i++)
      {
          char key[81];
          strcpy(key, arr[i]);
          int j = i - 1;
  
          while (j >= 0 && strcmp(key, arr[j]) < 0)
          {
              strcpy(arr[j + 1], arr[j]);
              j = j - 1;
          }
          strcpy(arr[j + 1], key);
      }
  
      printf("After sorted:\n");
      for (i = 0; i < 5; i++)
      {
          printf("%s\n", arr[i]);
      }
  
      return 0;
  }
    
    
