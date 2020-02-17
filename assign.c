#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp;
    char word[102310][20];
    int i =0;
    char dict[102310][20];

    //filename 


    fp = fopen("/usr/share/dict/words","r");
    if(fp == NULL){
        printf("Error opening file\n");
        exit(1);
    }
   
    

    while(/*fscanf(fp,"%s",word[i]) != EOF*/i<=102310){
        //reads file from dictionary
        fgets(dict[i],20,fp);
        i++;

    }
    //reads user inputfile
    
    
    return 0;
}


