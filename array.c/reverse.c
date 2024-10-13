#include <stdio.h>

//     for (i=0;i<=3;i++){
//        for(j=3;j>=0;j--){

// if (arr[i]!=arr[j]){
    
//   arr[j]=arr[i];
//   temp= arr[j];
//     printf("%d",arr[i]);
// }
// else{
//       break;
    
// }
//        }
//     }
    int reverse(int arr[]){
      
      for(int i=0,j=3;i<j;i++,j--){
       
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
      j--;

      } 
         }
         int main (){
  
    int arr[]={1,2,3,4};
    reverse(arr);
    for (int i=0; i<=3; i++){
      printf("%d", arr[i] );
    }
}
