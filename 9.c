#include<stdio.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    char *ptr = str;
    char j=0;
while (ptr[j])
    {
        if(ptr[j]=='\n'){
            ptr[j]='\0';
            break;
        }
        j++;
    }
    printf("%d",j);
}