// #include<stdio.h>
// void main()
// {
// int a[3][3],b[3][3],c[3][3],i,j;
// printf("Input A - Matrix\n");
// for(i=0;i<3;i++)
//   for(j=0;j<3;j++)
//    scanf("%d",&a[i][j]);
// printf("Input B - Matrix\n");
// for(i=0;i<3;i++)
// for(j=0;j<3;j++)
//    scanf("%d",&b[i][j]);
// for(i=0;i<3;i++)
// for(j=0;j<3;j++)
//   c[i][j]=a[i][j]+b[i][j];
// printf("Sum of A and B Matrix=\n");
// for(i=0;i<3;++i)
// {
//   for(j=0;j<3;++j)
//     printf("%d",c[i][j]);
//  printf("\n");
// }
// }
// #include<stdio.h>
// void main()
// {
// int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q,k;
// printf("Input row and column of A matrix \n");
// scanf("%d %d",&n,&m);
// printf(" Input row and column of B matrix \n");
// scanf("%d %d",&p,&q);
// if(m==p)
// {
//    printf(" Matrices can be Multiplied: \n");
//      printf(" Input A-matrix \n");
//        for(i=0;i<n;++i)
//         for(j=0;j<m;++j)
//             scanf("%d",&a[i][j]);

// printf(" Input B-matrix \n");
// for(i=0;i<p;++i)
//    for(j=0;j<q;++j)
//      scanf("%d",&b[i][j]);
// printf("The resultant matrix is\t:\n");
// for(i=0;i<n;++i)
// {
// for(j=0;j<m;++j)
// {
//     c[i][j]=0;
//       for(k=0;k<p;++k)
//         c[i][j]=c[i][j] + a[i][k] * b[k][j];
//  printf("%d",c[i][j]);
// }
// printf("\n");
// }
// else{
// printf("Matrices cannot be multiplied \n");}
// }
// }
