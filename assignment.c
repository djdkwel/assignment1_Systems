#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp2;
    FILE *fp;
    //FILE *fp2;
    char word[50000];
    int i,j,k,l,m =0;
    char dict[50000][30];
    char user[50000][30];
    int found = 0;
    int n=0;

    //filename 

    fp2 = fopen("userInput.txt","r");
    fp = fopen("linux.words","r");
    //fp2 = fopen("userIntput.txt","r");
    if(fp == NULL){
        printf("Error opening file\n");
        exit(1);
    }
    while( fscanf(fp,"%s",dict[i]) != EOF){
        
        i++;
    }
    //strcpy(word,dict);

    while( fscanf(fp2,"%s",user[j]) != EOF){
            //strcpy(word[i],dict);
            j++;
        }
    int size = sizeof(user)/sizeof(int);
    //checks to see if user input is in dictionary
    while(k<j){ 
        while(l<45427)
        {
            if(strcmp(user[k],dict[l])==0){
                found = 1;
                //printf("%s \n",dict[l]);
                m=l;
                l=0;
                
                break;
            }
             else if(l==45426){
                 strcpy(word,user[k]);
                 //printf("%s\n",word);
                 n++;
                 l=0;
                 break;

             }
            l++;
        }
            k++;
        }
        k =0;
        printf(" %s\n",word[0]);
       /* 
       int result = strcmp(user[0],dict[308]);
       printf("%d",result);
       if(strcmp(user[0],dict[30825])==0){
           printf("Yes");
       }*/
        
        

}
      

   
