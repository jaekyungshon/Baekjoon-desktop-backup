// Study Words

#include <stdio.h>
#define true 1
#define false 0

char s[1000000];
int numList[91] = {0, };

void changeUpper(){
    // strlen -> O(n)
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= 97 && s[i] <= 122){
            // Change Lower to Upper
            numList[(int)s[i] - 32]++; 
        }
        else{
            numList[(int)s[i]]++;
        }
    }
}

int findOverTwo(int m){
    // Check to Length of Max Alpha 
    int cnt = 0;
    for(int i = 65; i < 91; i++){
        if(numList[i] == m) cnt++;
    }
    if(cnt == 1) return true;
    else return false;
}

void checkMaxToPrint(){
    int nMax = -1;
    int idx = -1;
    for(int i = 65; i < 91; i++){
        if(nMax < numList[i]){
            nMax = numList[i];
            idx = i;
        }
    }
    int flag = findOverTwo(nMax);
    if(flag == true){
        printf("%c\n", idx);
    }
    else{
        printf("?\n");
    }
}

int main(void){
    scanf("%s", s);
    changeUpper();
    checkMaxToPrint();
    return 0;
}