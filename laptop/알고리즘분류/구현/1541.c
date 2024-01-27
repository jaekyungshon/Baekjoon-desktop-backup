// lost ()

#include <stdio.h>
#include <math.h>

int i;

int check(char* s, int j){
    char tmpC[5];
    int tmp=0;
    for(int k=i+1; k!='\0'; k++){
        if(s[k]=='-'){
            i=k;
            break;
        }
        else if(s[k]=='+'){
            int size=--j;
            for(int l=j; l>=0; l--){
                tmp+=((tmpC[size-j]-'0')*((int)pow((double)10,(double)l)));
                j--;
            }
        }
        else{
            tmpC[j++]=s[k];
        }
    }

    int size=--j;
    for(int k=j; k>=0; k++){
        tmp+=((tmpC[size-j]-'0')*((int)pow((double)10,(double)k)));
        j--;
    }
    printf("3: tmp\n", tmp);
    return tmp;
}

int main(){
    int sum=0;
    char s[50];

    scanf("%s", s);
    char c[5];
    int j=0;
    int flag=0;
    for(i=0; s[i]!='\0'; i++){
        printf("%c\n",s[i]);
        if(s[i]!='-' && s[i]!='+'){
            c[j++]=s[i];
        }
        else if(flag==0){
            int size=--j;
            for(int k=j; k>=0; k--){
                sum+=((c[size-j]-'0')*(int)(pow((double)10,(double)k)));
                j--;
            }
            if(s[i]=='-') sum-=check(s,j);
            printf("1: %d\n", sum);
            flag=1;
        }
        else if(s[i]=='-'){
            sum-=check(s,j);
            printf("2: %d\n", sum);
        }
        else if(s[i]=='+'){
            int size=--j;
            for(int k=j; k>=0; k--){
                sum+=((c[size-j]-'0')*(int)(pow((double)10,(double)k)));
                j--;
                printf("4: %d\n", sum);
            }
        }
    }
    
    int size=--j;
    for(int k=j; k>=0; k--){
        sum+=((c[size-j]-'0')*(int)(pow((double)10,(double)k)));
        j--;
    }
    printf("%d",sum);
    return 0;
}