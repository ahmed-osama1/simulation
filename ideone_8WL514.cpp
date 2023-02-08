#include<stdio.h>
int main(){
    int i;
    int l1,l2,l3,l4,l5,l6,l7,l8,l9;
    int mincount = 99999;
    int nums[9];
    int contain[10] = {0};
    for(i = 0; i < 9; i ++){
        scanf("%d", &nums[i]);
    }
    
    for(l1 = 0; l1 < 4; l1 ++){
        for(l2 = 0; l2 < 4; l2 ++){
            for(l3 = 0; l3 < 4; l3 ++){
                for(l4 = 0; l4 < 4; l4 ++){
                    for(l5 = 0; l5 < 4; l5 ++){
                        for(l6 = 0; l6 < 4; l6 ++){
                            for(l7 = 0; l7 < 4; l7 ++){
                                for(l8 = 0; l8 < 4; l8 ++){
                                    for(l9 = 0; l9 < 4; l9 ++){
                                        if((nums[0] + l1 + l2 + l4) % 4 == 0 && (nums[1] + l1 + l2 + l3 + l5) % 4 == 0 
                                        && (nums[2] + l2 + l3 + l6) % 4 == 0 && (nums[3] + l1 + l4 + l5 + l7) % 4 == 0 
                                        && (nums[4] + l1 + l3 + l5 + l7 + l9) %4 ==0 && (nums[5] + l3 + l5 + l6 + l9) % 4 == 0
                                        && (nums[6] + l4 + l7 + l8) % 4 == 0 && (nums[7] + l5 + l7 + l8 + l9) % 4 == 0 
                                        && (nums[8] + l6 + l8 + l9) % 4 == 0){
                                            int count = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9 ;
                                            if(count < mincount){
                                                mincount = count;
                                                contain[1] = l1;
                                                contain[2] = l2;
                                                contain[3] = l3;
                                                contain[4] = l4;
                                                contain[5] = l5;
                                                contain[6] = l6;
                                                contain[7] = l7;
                                                contain[8] = l8;
                                                contain[9] = l9;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for(i = 1; i < 10; i ++){
        while(contain[i] --) printf("%d ", i);
    }
printf("\n");
}