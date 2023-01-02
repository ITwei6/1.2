#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0;i < n;i++)
//		{
//			char pwd[101] = { 0 };
//			scanf("%s", pwd);
//			int lower = 0;//小写字母
//			int higher = 0;//大写字母
//			int digit = 0;//数字
//			int other = 0;//其他
//			if (pwd[0] >= '0' && pwd[0] <= '9')
//			{
//				printf("NO\n");
//				continue;
//			}//密码不能以数字开头
//			if (strlen(pwd) < 8)
//			{
//				printf("NO\n");
//				continue;
//			}
//			for (int i = 0;pwd[i] != '0';i++)
//			{
//				if (pwd[i] >= '0' && pwd[i] <= '9')
//				{
//					digit++;//数字
//				}
//				else if (pwd[i] >= 'a' && pwd[i] <= 'z')
//				{
//					lower++;//小写字母
//				}
//				else if (pwd[i] >= 'A' && pwd[i] <= 'Z')
//				{
//					higher++;//大写字母
//				}
//				else
//					other++;
//			}
//			if (other != 0)
//			{
//				printf("NO\n");
//				continue;
//			}
//			if ((lower > 0) + (higher > 0) + (digit > 0) < 2)
//			{
//				printf("NO\n");
//				continue;
//			}
//			printf("YES\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	char arr[101] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < n;i++)
//	{
//		int lower = 0;
//		int higher = 0;
//		int digit = 0;
//		scanf("%s", arr);
//		int sz = strlen(arr);
//		//判读字符串首元素和长度
//		if (arr[0] >= '0' && arr[0] <= '9' || sz < 8)
//		{
//			printf("NO\n");
//			continue;
//		}
//		//判断条件1，3
//		for (j = 0;j < sz;j++)
//		{
//			if (arr[j] >= 'a' && arr[j] <= 'z')
//				lower++;
//			else if (arr[j] >= 'A' && arr[j] <= 'Z')
//				higher++;
//			else if (arr[j] >= '0' && arr[j] <= '9')
//				digit++;
//			else
//			{
//				printf("NO\n");
//				continue;
//			}
//		}
//		if (lower + higher + digit >= 2)
//		{
//			printf("YES\n"); 
//		}
//	}
//	return 0;
//}

//include <stdio.h>
//int main()
//{
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch % 2 != 0 && (ch >= 'a' && ch <= 'z'))
//			ch = ch - 'a' + 'A';
//		putchar(ch);
//	}
//	printf("\n");
//	return 0;
//}
int dominantIndex(int* nums, int numsSize)
{
    int max = 0;
    int i;
    int count = 0;
    int flag = 0;
    for (i = 0;i < numsSize;i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
            flag = i;
        }
    }
    for (i = 0;i < numsSize;i++)
    {
        if (max >= (2 * nums[i]))
            count++;
    }
    if (count == numsSize)
    {
        return flag;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int nums[] = {3,6,1,0};
    int sz = sizeof(nums) / sizeof(nums[0]);
    int ret=dominantIndex(nums, sz);
    printf("%d", ret);
    return 0;
}