#include <stdio.h>

int main(){
    
	int num;
	int flag = 0;

	scanf("%d", &num);


    while (num > 0) {
        if (num%10 == 0) {
            flag = 1;
        }
        num = num / 10;
    }
	
	
	if (flag == 0) {
        printf("KO");
    } else {
        printf("OK");
    }
	

	return 0;

}