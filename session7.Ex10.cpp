#include<stdio.h>
int main(){
    int n, dem = 0;
    printf("Moi ban nhap so phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d co gia tri la: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("So nguyen to trong mang la: ");
    for (int a = 0; a < n; a++) {
        dem = 0;
        for (int j = 1; j <= arr[a]; j++) {
            if (arr[a] % j == 0) {
                dem++;
            }
        }
        if (dem == 2) {
            printf("%d ", arr[a]);
        }
    }

    return 0;
}
