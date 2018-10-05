#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("malloc tests:\n\n");
    int *x=(int*)malloc(4);
    *x=8;
    printf("Pointer to allocated memory for int x: %p\nValue after allocation: %d\n",x,*x);
    char *empty=(char *)malloc(0);
    printf("Pointer if size=0: %p\nValue at that pointer: %d\n\n",empty,*empty);
    //printf("free malloc:\n\n");
    //free(x);
    //printf("Pointer to x after free is used: %p\nValue of x after free is used: %d\n",x,*x);
    //free(empty);
    //printf("Pointer if size=0 after free: %p\nValue at that pointer: %d\n\n",empty,*empty);


    printf("calloc tests:\n\n");
    int *ar=(int*)calloc(2,4);
    for(int i=0;i<2;i++){
        ar[i]=i+2;
        printf("values in allocated memory:%d\n",ar[i]);
    }
    printf("Pointer allocated to an integer array of size 2: %p\n\n",ar);
    //free(ar);
    for(int i=0;i<2;i++){
    //    printf("values in allocated memory after free:%d\n",ar[i]);
    }
    printf("realloc tests:\n\n");
    empty=realloc(empty,4);
    printf("memory reallocated to pointer initally allocated 0:%p\n",empty);
    printf("value after reallocation: %d\n",*empty);


    return 0;
}