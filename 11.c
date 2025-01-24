#include<stdio.h>
int main(){
    char str [100];
    fgets(str,100,stdin);
    int j=0;
    char *ptr = str;
    while ( ptr[j])
    {
        if(ptr[j]=='\n'){
            ptr[j]='\0';
            break;
        }
        j++;
    }


    char str1 [100];
    fgets(str1,100,stdin);
    int k=0;
    char *ptr1 = str1; 
    while (ptr1[k])
    {
        if(ptr1[k]=='\n'){
            ptr1[k]='\0';
            break;
        }
        k++;
    }

int l =j+k+1;
char merge[l];
char *ptrmerge=merge;
for(int i=0;i<j;i++){
    merge[i]=ptr[i];
}

for(int i=0;i<k;i++){
    merge[j+i]=ptr1[i];
}
merge[j+k]='\0';

printf("%s\n",merge);
    
    
}
