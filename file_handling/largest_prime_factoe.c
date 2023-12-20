
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n;
    long long a[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=n;i!=0;i--)
    {
        printf("%lld ",a[i]);
    }
}