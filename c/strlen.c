#include <stdio.h>
int main() {
    char name[250];
    scanf("%s",name);
    int count;
    int sum=0;
    int i=0;
    while(name[i]!='\0'){
        i++;
    }
    int k=i;
    printf("Size of the string is : %d\n",i);
    //for even positions
    printf("characters at even position :\n");
    for(int j=0;j<=k;j=j+2){
        printf("characters at %d position : %c \n",j,name[j]);
    }
    //for odd positions
    printf("characters at odd position :\n");
    for(int j=1;j<=k;j=j+2){
        printf("characters at %d position : %c \n",j,name[j]);
    }
    return 0;
