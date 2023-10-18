#include<stdio.h>
int main(){
    int highestNum, lowestNum, guess;
    char decision;
    printf("User give the Two number Highest and lowest number\n");
    printf("Give the Highest and Lowest Number:");
    scanf("%d%d",&highestNum,&lowestNum);
    printf("Pick a number between %d and %d to guess\n",highestNum,lowestNum);
    while(decision!='c'){
        guess=(highestNum + lowestNum)/3;
        printf("The guess number as %d\n",guess);
        printf("If the guess number as correct then press 'c' , Lowest then press 'l' , Highest press 'h':");
        scanf(" %c",&decision);
        if(decision=='l'){
            highestNum-=2;
        }
        else if(decision=='h'){
            lowestNum+=2;
        }
        else{
            printf("Please tell them the number is correct or not\n");
        }
        
        
    }
    printf("Congratulation you guess the number %d\n",guess);
    return 0;
    
}