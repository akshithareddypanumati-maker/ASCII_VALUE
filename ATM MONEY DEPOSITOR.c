#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int amt;
    scanf("%d",&amt);
    if(amt%100==0){
        if(amt>20000){
            printf("Please enter a lesser denomination");
        }
        else{
            if(amt<=500){
                printf("%d hundreds",(amt/100));
            }
            else{
                int f=0,h=5;
                f=(amt-500)/500;
                h=h+((amt-500)%500)/100;
                if(h>5){
                    f=f+1;
                    h=h-5;
                }
                printf("%d:500s %d:100s",f,h);
            }
        }
    }
    else{
        printf("Please enter the amount in multiples of 100");
    }
}

