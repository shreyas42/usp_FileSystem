#include<stdio.h>
#include"fs.h"

int main(){
    printf("%d\n", sizeof(struct inode));	
    printf("%ld\n",POINTERS_PER_BLOCK);
    return 0;
}
