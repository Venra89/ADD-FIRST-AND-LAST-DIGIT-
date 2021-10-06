#include <stdio.h>

int main(void) {
    //no of casess
    int t;
    scanf("%d",&t);
    //to run one by one 
    while(t--){
        
        int val,lastdigit=0,firstdigit=0,sum=0;
        //declare number
        scanf("%d",&val);
        
        //lastdigit
        lastdigit=val%10;
        while(val>=10){
            val=val/10;
        }
        firstdigit=val;
        sum = firstdigit+lastdigit;
        printf("%d\n",sum);
        
    }
	return 0;
}

