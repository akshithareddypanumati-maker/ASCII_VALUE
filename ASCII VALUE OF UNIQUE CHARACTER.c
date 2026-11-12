#include<stdio.h>
int main(){
    char ch[30];
    fgets(ch,sizeof(ch),stdin);
    int seen[256]={0};
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='\n')
        continue;
        if(seen[ch[i]]==0)
        printf("%c : %d\n",ch[i],ch[i]);
        seen[ch[i]]=1;
        
    }
}

