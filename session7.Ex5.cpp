#include <stdio.h>
int main() {
    int a[5] = {10, 20, 30, 40, 50},max = a[0],min = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] > max){
        	max = a[i];
		} 
        if (a[i] < min){
        	min = a[i];
		}
    }
    printf("So lon nhat la: %d\n", max);
    printf("So nho nhat la: %d\n", min);

    return 0;
}
