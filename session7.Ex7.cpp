#include<stdio.h>
int main(){
	int n;
	printf("Moi nhap so phan tu cua mang");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Phan tu trong mang %d la so le la: ",i+1);
		while(1){
			int num;
			scanf("%d",&num);
			if(num%2!=0){
				arr[i]=num;
				break;
			}else{
				printf("Moi ban nhap lai so ");
			}
		}
	}
	printf("Mang ban da nhap la:");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

