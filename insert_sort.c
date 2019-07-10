#include <stdio.h>

int length(char *arr)
{
	int i;
	for(i=0; i<arr[i]; i++)
	{
	}
	return i;
}

void insert_sort(char *arr)
{
	int len;
	len = length(arr);
	int i, j, tmp;
	for(i=0; i<len; i++)
	{
		for(j=i+1; j<len; j++)
		{
			if(arr[i]>arr[j])
			{
				tmp=arr[j];
				arr[j]=arr[i];
				arr[i]=tmp;
			}
		}
	}
}

int main()
{
	char arr[] = "QWERTYUIOPLKJHGFDSAZXCVBNM";
	printf("old: %s\n", arr);
	insert_sort(arr);
	printf("new: %s\n", arr);
	return 0;
}
