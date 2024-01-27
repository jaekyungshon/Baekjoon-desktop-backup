// Croatia

#include <stdio.h>

int main(){
    char s[101];
    int cnt = 0;
    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == 'd'){
            if(s[i+1] == '-'){
                cnt++;
                i++;
            }
            else if(s[i+1] == 'z'){
                if(s[i+2] == '='){
                    cnt++;
                    i += 2;
                }
                else{
                    cnt += 2;
                    i++;
                }
            }
            else{
                cnt++;
            }
        }
        else if(s[i] == 'c'){
            if(s[i+1] == '=' || s[i+1] == '-'){
                i++;
            }
            cnt++;
        }
        else if(s[i] == 'l' || s[i] == 'n'){
            if(s[i+1] == 'j'){
                i++;
            }
            cnt++;
        }
        else if(s[i] == 's' || s[i] == 'z'){
            if(s[i+1] == '='){
                i++;
            }
            cnt++;
        }
        else{
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}