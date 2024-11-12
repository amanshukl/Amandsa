#include <stdio.h>

int main() {
    int n,handshake;
    printf("enter the no. of people :");
    scanf("%d", &n);
    handshake=((n*(n-1))/2);
  printf("total no. of  unique handshake %d",handshake);


    return 0;
}
