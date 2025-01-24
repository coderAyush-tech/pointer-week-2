#include<Stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int arr[n];
    int *ptr = &arr[0];
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }

    for(int i=n-1;i>=0;i--){
        printf("%d",ptr[i]);
    }
}