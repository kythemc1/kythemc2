#include<stdio.h>

void swap (int xp, int yp){
	int temp=xp;
	xp=yp;
	yp=temp;
}


void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    
    for (i = 0; i < n-1; i++)
    {
   
    //min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[i])
       // min_idx = j;
        swap(arr[j], arr[i]);
    }
}
void xuatmang(int arr[],int s){
	int i;
	for(i=0;i<s;i++)
	{
		printf("%d  ",arr[i]);
	}
}

int main(){
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	int arr[n];
	printf("\nnhap mang :");
	for(int j=0;j<n;j++){
		scanf("%d",&arr[j]);
	}
		xuatmang(arr,n);
	selectionSort(arr,n);
	
	xuatmang(arr,n);
	return 0;
		
}
