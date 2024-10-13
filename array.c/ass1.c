// #include <stdio.h>
// int main ()
// {
//  int n, x,i,arr[]={5,2,7,5,5,7};  
// int sum;
// int found =0;
// for (x=0;x<=5;x++){

// for (i=0;i<=5;i++){
// if (arr[x]==arr[i])
// {
//     // found =1;
//     int pos=i;
//     // break;
//     // if (found ==1){
//     //     for (i=pos ; i<5;i++){
//     //         arr[i]=arr[i+1];
//     //         printf("after deletion");
//     //         for (i=0;i<5;i++){
//     //             printf("%d\n", arr[i]);

//     for (i=0;i<=5;i++){

//     }
            
//         }
//     }

// }

// // sum =count -1;
// // sum=count ;
// // if (arr[x]==)
// printf("the element %d is  duplicate and occurs %d times\n" , arr[x],sum);
// }

#include <stdio.h>
int main ()
{
 int n, x,i,arr[]={5,2,7,5,5,7};  
int sum;
for (x=0;x<=5;x++){
    
for (i=0;i<=5;i++){
if (arr[x]==arr[i])
{
    int pos =i;
    for (int k=0;k<=5;k++){
        if (arr[k]==arr[i]){
            continue;
        }
        else{
        printf("%d",arr[k]);}
    }
}

}
}
}