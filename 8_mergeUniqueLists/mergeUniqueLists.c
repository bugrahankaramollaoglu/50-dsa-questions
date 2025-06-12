#include <stdlib.h>
#include <stdio.h>

int *mergeUniqueLists(int list1[], int size1, int list2[], int size2, int *resultSize)
{
	int uniqueList[100] = {0};

	int *resultList = (int *)malloc(size1 + size2);
	*resultSize = 0;

	for (int i = 0; i < size1; i++)
	{
		if (!uniqueList[list1[i]])
		{
			resultList[(*resultSize)++] = list1[i];
			uniqueList[list1[i]] = 1;
		}
	}
	for (int i = 0; i < size2; i++)
	{

		if (!uniqueList[list2[i]])
		{

			resultList[(*resultSize)++] = list2[i];

			uniqueList[list2[i]] = 1;
		}
	}

	return resultList;
}

int main()
{
	int list1[] = {1, 2, 3};

	int size1 = sizeof(list1) / sizeof(list1[0]);

	int list2[] = {3, 4, 5};

	int size2 = sizeof(list2) / sizeof(list2[0]);

	int resultSize;

	int *result = mergeUniqueLists(list1, size1, list2, size2, &resultSize);

	printf("Merged List: ");

	for (int i = 0; i < resultSize; i++)
	{

		printf("%d ", result[i]);
	}

	printf("\n");

	free(result);

	return 0;
}
