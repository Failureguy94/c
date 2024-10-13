#include <stdio.h>
#include <math.h>
int main (){
    printf("enter the number");
    int n;
    scanf("%d",n);
    int result= isarm(n);
    if (result==n){
        printf("the entered number is an armstrong number");
        
    }
    else {
        printf("the entered number is not an armstrong number");
    }
}
int isarm(int num){
    int sum =0;
    int count=0;
    int a;
while(a!=0){

    int a=num%10;
   
    count ++;
}
for (int i=0; i<count;i++){
    int a=num%10;
    int num=num/10;
    sum=sum+pow(a,count);
}
return sum;
}