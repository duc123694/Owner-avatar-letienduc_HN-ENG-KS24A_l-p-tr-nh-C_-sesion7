#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int lenght=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<lenght;i++){
		printf("%d \n",arr[i]);
	}
	printf("Do dai cua mang la: %d \n",lenght);
	return 0;
}
