#include <stdio.h>
#include <string.h>

// O(logn) : Use to Recursion
int recursion_pow(int x, int n){
    if(n==0) return 1;
    else if(n%2==0) return recursion_pow(x*x,n/2);
    else return x*recursion_pow(x*x,(n-1)/2);
}

int main(){
    char arr[9];
    while(1){
        scanf("%s",arr);
        if(strcmp(arr,"#")==0) break;
        int size=strlen(arr)-1;
        int ans=0;
        for(int i=0; arr[i]!='\0'; i++){
            if(arr[i]=='-'){
                continue;
            }
            else if(arr[i]=='\\'){
                if(size!=0) ans+=1*recursion_pow(8,size);
                else ans+=1;
            }
            else if(arr[i]=='('){
                if(size!=0) ans+=2*recursion_pow(8,size);
                else ans+=2;
            }
            else if(arr[i]=='@'){
                if(size!=0) ans+=3*recursion_pow(8,size);
                else ans+=3;
            }
            else if(arr[i]=='?'){
                if(size!=0) ans+=4*recursion_pow(8,size);
                else ans+=4;
            }
            else if(arr[i]=='>'){
                if(size!=0) ans+=5*recursion_pow(8,size);
                else ans+=5;
            }
            else if(arr[i]=='&'){
                if(size!=0) ans+=6*recursion_pow(8,size);
                else ans+=6;
            }
            else if(arr[i]=='%'){
                if(size!=0) ans+=7*recursion_pow(8,size);
                else ans+=7;
            }
            else if(arr[i]=='/'){
                if(size!=0) ans+=-1*recursion_pow(8,size);
                else ans+=-1;
            }
            size--;
        }
        printf("%d\n",ans);
    }
}