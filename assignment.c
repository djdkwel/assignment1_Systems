#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp;
    char dict[102310][20];
    int i =0;
    char word[102310][20];

    fp = fopen("linux.words","r");
    if(fp == NULL){
        printf("Error opening file\n");
        exit(1);
    }
    //fgets(word[], 102310, fp);
    

    while(/*fscanf(fp,"%s",word[i]) != EOF*/i<=102310){
        fgets(word[i],20,fp);
       
        i++;
        //strcpy(dict ,word); 
    }
    printf("%s",word[1]);
    
    //printf("%s",dict);
    return 0;
}


