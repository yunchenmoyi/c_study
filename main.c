#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = {0};
	int temp = 0;
	int j = 0;
	printf("请输入数据:>\n");
	for(i = 0;i < 10;i++)
	{
		printf("arr[%d] =",i);
		scanf("%d",&arr[i]);
	}
	for(i = 0;i < 10;i++)
	{
		for(j = i + 1;j < 10;j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
		printf("\n由小到大排序为:>\n");
		for(i = 0;i < 10;i++)
		{
			printf("%-6d",arr[i]);
		}
		for(i = 0;i < 5;i++)
		{
			temp = arr[i];
			arr[i] = arr[9-i];
			arr[9-i] = temp;
		}
		printf("\n由大到小排序为:>\n");
		for(i = 0;i < 10;i++)
		{
			printf("%-6d",arr[i]);
		}
		printf("\n");
	return 0;
}