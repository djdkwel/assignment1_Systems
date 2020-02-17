#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp;
    int i= 0;
    char dict[102310][20];
    

    //filename 


    fp = fopen("userInput.txt","r");
    for(i; fscanf(fp,"%s",dict[i]) != EOF; i++)
    {
        printf("%s \n",dict[i]);
        printf("%d",i);
    }
    

    
    return 0;
}


