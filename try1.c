#include<stdio.h>
int swap(int **ptr,int **ptr1){
    int t;

   t = **ptr;
   **ptr=**ptr1;
   **ptr1=t;

}
int main(){
    int a=5,b=3;
   int *ptr = &a;
    int *ptr1 =&b;
    
    swap(&ptr,&ptr1);
    printf("%d",a);
    printf("%d",b);
    return 0;
}