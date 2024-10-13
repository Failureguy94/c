// Copy array in another array
// #include <stdio.h>
// int main() {
// int i, arr1[5] = {3, 4, 5, 1, 2}; // Correctly initialize the array
// int arr2[5]; // Declare the second array to hold the copied elements
// // Copy elements from arr1 to arr2
// for(i = 0; i < 5; i++) {
// arr2[i] = arr1[i];
// }
// // Output arr2 to verify the copy
// printf("Elements in arr2: ");
// for(i = 0; i < 5; i++) {
// printf("%d ", arr2[i]);
// }
// return 0;
// }
// //Calculate the sum and average
// #include <stdio.h>
// int main()
// {
// int i, sum = 0;
// float average;
// int marks[5] = {4,5,1,2,3};
// for(i = 0; i < 5; i++)
// {
// sum = sum +marks[i];
// }
// average = (float)sum/5;
// printf("%.2f\n", average);
// printf("%d",sum);
// return 0;
// }
//Finding the largest element
// #include <stdio.h>
// int main()
// {
// int i, max;
// int arr[10] = {4,5,6,1,2,3,7,8,9,10};
// max = arr[0];
// for (int i = 0; i < 10; i++)
// {
// if (arr[i] > max)
// max = arr[i];
// }
// printf("Largest element = %d", max);
// return 0;
// }
// Search element
// #include <stdio.h>
// int main() {
// int i, n, val, flag = 0;
// int arr[10] = {4, 5, 1, 7, 2, 8, 9, 3, 6, 10}; // Example array
// n = sizeof(arr) / sizeof(arr[0]); // Determine the size of the array
// // Ask user for the value to search
// printf("Enter the value to search: ");
// scanf("%d", &val);
// // Search for the element in the array
// for (i = 0; i < n; i++) {
// if (arr[i] == val) {
// flag = 1; // Set flag to indicate element is found
// break; // Exit the loop as element is found
// }
// }
// // Check if the element was found and print the result
// if (flag == 1) {
// printf("Element is found at Position %d\n", i + 1); // Position is i+1 for 1-based index
// } else {
// printf("Element not found\n"); // Element was not found in the array
// }
// return 0;
// }
//entering data into an array & Reading data from an array
// #include<stdio.h>
// int main()
// {
// int arr[10],i,n;
// printf("\n Enter N Elements");
// scanf("%d",&n);
// if(n<=10 && n>=1 )
// {
// for(i=0;i<n;i++)
// {
// printf("enter arr[%d]=",i);
// scanf("%d",&arr[i]);
// }
// for(i=0;i<n;i++)
// {
// printf("%d\n",arr[i]);
// }
// }
// else
// {
// printf("Envalid input");
// }
// return 0;
// }


// #include <stdio.h>
// int main ()
// {
//  int n, x,i,arr[]={5,2,7,5,5,7};
// //     int arr2[5];
//    int max,max2;
//      max=arr[0];
    
//    for (i=0;i<=5;i++){
    
//    if (max<arr[i]){
//     max=arr[i];

//    }
//    else {
//     max=max+0;       
//    }
//    }  
//    max2=arr[0];
//    for (i=0;i<=5;i++){
//     if (arr[i]>max2){
//          if (arr[i]==max){
//             continue;
//          }
//          max2=arr[i];
         

//     }
//     else {
//         max2=max2+0;
//     }

//    }
//    printf("%d\n%d", max, max2);
// }
 

   
// //         arr2[i]=arr[i];}
// //         for(i=0;i<=4;i++){
// //  printf("%d\n",arr2[i]);
// //         }
   
//    printf("%d\n",max);
//    printf("%d",max2);

// code for duplicates
#include <stdio.h>
int main ()
{
 int n, x,i,arr[]={5,2,7,5,5,7};  
int sum;
for (x=0;x<=5;x++){
    int count  =0;
for (i=0;i<=5;i++){
if (arr[x]==arr[i])
{
    count = count +1;    
}
}
// sum =count -1;
sum=count ;
// if (arr[x]==)
printf("the element %d is  duplicate and occurs %d times\n" , arr[x],sum);
}
}
