/* This is github test project */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char* argv[])
{
	int N; 
	int temp;
	scanf("%u", &N);
	int* myArray = (int*) malloc(sizeof(int) * N);
	for(int i=0; i<N; i++)
	{
		scanf("%u", &myArray[i]);
	}

	for (int i = N; i > 0; i--)
    {
        for (int j = 0; j < i-1; j++)
        {

            if (myArray[j] > myArray[j + 1])
			{
				temp = myArray[j];
				myArray[j] = myArray[j+1];
				myArray[j+1] = temp;
			}
        }
    }

	for(int i=0; i<N; i++)
	{
		printf("%d, ", myArray[i]);
	}

	system("pause");
	return 0;
}
