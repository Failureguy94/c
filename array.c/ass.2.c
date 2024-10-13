#include <stdio.h>
int main(){
    int i,k,n;
    int arr[8]={1,2,3,4,5,7,8,9};
    for (i=0;i<=7;i++){
        if (arr[i]+1!=arr[i+1]){
            int num=arr[i]+1;
             printf("the missing num is %d", num );
             break;
        }
      
    }

}
