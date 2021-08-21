
#include<stdio.h>
int main()

{
    int i,j,a[100],n,m;
    int count=0;
    scanf("%d%d",&n,&m);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]>=a[m-1] && a[i]>0){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
