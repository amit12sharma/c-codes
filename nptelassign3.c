/*#include<stdio.h>
int find_odd(int k);

int find_odd(int k){
    if(k % 2 != 0){
        return 1;
    }
    return -1;
}

int main()
{
    int k,num,occur_index=0,occur = -1,is_odd;
    scanf("%d",&k);

    scanf("%d",&num);
    if(num != -1){
        while(num != -1){
            is_odd = find_odd(num);
            if(is_odd == 1){
                occur_index += 1;
            }
            if(occur_index == k && is_odd == 1){
                occur =num;
            }
            scanf("%d",&num);
        }
    }
    printf("%d",occur);
    return 0;
}


#include<stdio.h>

int main()
{
    float prev,curr;
    scanf("%f",&prev);

    if(prev != -1){
        scanf("%f",&curr);
        while(curr != -1){
            printf("%.1f",(prev+curr)/2);
            prev = curr;
            scanf("%f",&curr);
            if(curr != -1){
                printf("");
            }
        }
    }else{
        printf("%d",-1);
    }
    return 0;
}*/

#include<stdio.h>

int main()
{
    int num,fact=1,fact_index = 2;
    scanf("%d",&num);

    while(fact <= num){
        printf("%d",fact);
        fact = fact * fact_index;
        fact_index += 1;
        if(fact <= num){
            printf(" ");
        }

    }
    return 0;
}