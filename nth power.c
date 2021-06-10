#include<stdio.h>
#include<math.h>

 int main(){
    int x, y, ans, counter = 1;
    printf("Enter X: ");
    scanf("%d", &x);// 2

    printf("Enter Y: ");
    scanf("%d", &y);// 3

    printf("\n%d ^ %d = %.4f\n", x, y, pow(x,y));
    return 0;
}
