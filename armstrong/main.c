#include<stdio.h>

int main(){
    int num, copy_of_num, sum=0, rem;

    //Store input number in variable num
    printf("\n Enter a number: ");
    scanf("%d",&num);

    /* store the value of num in a another variable 
     * to compare the results to at the end
     */

    copy_of_num = num;
    
    // use %10 method patern to get the individual digits
    while (num!=0){
        rem = num % 10;
        sum = sum + (rem*rem*rem); 
        num = num/10;
    }

    printf("sum: %d\n",sum);


    if(copy_of_num == sum)
        printf("\n%d is an Armstrong Number", copy_of_num);
    else
        printf("\n%d is not an Armstrong Number", copy_of_num);
    return(0);
    
}
