#include<stdio.h>
int main(){
    int amt;
    int notes[]={2000,500,200,100,50,20,10,5,2,1};
    int n=sizeof(notes)/sizeof(notes[0]);
    scanf("%d",&amt);
    for(int i=0;i<n;i++){
        int count=amt/notes[i];
        amt=amt%notes[i];
        printf("%d : %d\n",notes[i],count);
    }
}


