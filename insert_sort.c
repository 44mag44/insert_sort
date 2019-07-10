#include <stdio.h>

int length(char *arr)
{
	int i;
	for(i=0; i<arr[i]; i++)
	{
	}
	return i;
}

void insertion_sort(char *arr)
{
	int len;
	len =length(arr);
	int i, j, tmp;
	for(i=1; i<len; i++)
	{
		tmp=arr[i];
		for(j=i-1; j>=0; j--)
		{
			if(arr[j]<tmp)
				break;
	
			arr[j+1]=arr[j];
			arr[j]=tmp;
		}
	}	
}

int main()
{
	char arr[] = "qwertyuiopasdfghjklzxcvbnm";
	insertion_sort(arr);
	printf("new: %s\n", arr);

	return 0;
}
