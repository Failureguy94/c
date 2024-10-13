#include <stdio.h>
         int main (){
  
    int arr[]={1,2,3,2,1};
    for(int i=0,j=3;i<j;i++,j--){
       
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
      j--;
      if (arr[i]==temp){
        printf("the given array is a palindrome");
    }
      else{
        printf("the given array is not a palindrome");
      }

      } 
    for (int i=0; i<=3; i++){
      printf("%d", arr[i] );
    }
}