#include<stdio.h>

void invertirArray(int arr[], int start, int end)
{
	int temp;
	while (start < end) //0 < n-1 = 6
	{
		temp = arr[start]; //temp = 1
		arr[start] = arr[end]; //la posición 0 ahora vale la ultima posición menos 1 = 6
		arr[end] = temp; //temp = 1 -> a la ultima posición menos 1 = 6 -> 1
		start++; //Se recorre la posición de 0 a 1
		end--; //Se disminuye la posición de 6 a 5
	} //Así mientras que end se mayor a start
}	

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	printf("El array es: \n");
	for(int i=0;i<n;i++)
	{
	    printf("%d ",arr[i]);
	}
	printf("\n");

	
	invertirArray(arr, 0, n-1); //Valores de la función
	printf("El array invertido es: \n");
	for(int i=0;i<n;i++)
	{
	    printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}
