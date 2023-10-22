#include<stdio.h>
int main(){
    int highestNum, lowestNum, guess;
    char decision;
    printf("User give the Two number from Lowest to Highest number\n");
    printf("Give the Lowets and Highest Number:");
    scanf("%d%d",&lowestNum,&highestNum);
    printf("Pick a number between %d and %d to guess\n",lowestNum,highestNum);
    while(decision!='c'){
        guess=(highestNum + lowestNum)/3;
        printf("The guess number as %d\n",guess);
        printf("If the guess number as correct then press 'c' , Lowest then press 'l' , Highest press 'h':");
        scanf(" %c",&decision);
        if(decision=='l'){
            highestNum+=2;
        }
        else if(decision=='h'){
            lowestNum-=2;
        }
        else{
            printf("Please tell them the number is correct or not\n");
        }
        
        
    }
    printf("Congratulation you guess the number %d\n",guess);
    return 0;
    
}