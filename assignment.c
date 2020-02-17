#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp2;
    FILE *fp;
    //FILE *fp2;
    char word[50000][30];
    int i,j,k,l =0;
    char dict[50000][30];
    char user[50000][30];
    int found = 0;

    //filename 

    fp2 = fopen("userInput.txt","r");
    fp = fopen("linux.words","r");
    //fp2 = fopen("userIntput.txt","r");
    if(fp == NULL){
        printf("Error opening file\n");
        exit(1);
    }
    while( fgets(dict[i],sizeof(dict[i]),fp) != NULL){

        i++;
    }
    for(j; fscanf(fp2,"%s",user[j]) != EOF; j++)
    {
        
    }
    
    //checks to see if user input is in dictionary
    while(k<j)
    {
        while(l<45427)
        {
            if(user[k]==dict[l]){
                found = 1;
                l=0;
                printf("Yes");
                break;
                
            }
            
            l++;

        }
            k++;
        }
        k =0;
        //printf("%s 1",user[k]);
        printf("%swhat is in this",dict[30825]);
       if(user[k]==dict[30825]){ 
            printf("Yes");
    }

}
      

   
