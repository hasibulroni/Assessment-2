// problem statement: Write a programme based on a recursive function to calculate the determinant of an nxn matrix. 
#include<conio.h>
//this is an input and output library. 
#include<stdio.h>

//program declarations 
int a[20][20],k;
int determinant(int f[20][20],int a);

//main function
int main()

{

 int i,j;

 printf("\n\n Enter a matrix number: ");

 scanf("%d",&k);

 printf("\n Matrix elements \n");
//ittereative function for matrix number where user can neter matrix number 
 for(i=1;i<=k;i++)

 {
//itterative function for nXn matrix
 for(j=1;j<=k;j++)

 {

 printf("a[%d][%d] = ",i,j);

 scanf("%d",&a[i][j]);

 }

 }
//print matrix number which 
 printf("\n\n-Matrix is nXn--\n");    

 for(i=1;i<=k;i++)

    {

         printf("\n");

         for(j=1;j<=k;j++)

         {    

              printf("\t%d \t",a[i][j]);

         }

    }

 printf("\n \n");

 printf("\n Determinant of Matrix A is %d .",determinant(a,k));

 getch();

}

//determinant the matrix number  
int determinant(int f[20][20],int x)

{

 int pr,c[20],d=0,b[20][20],j,p,q,t;

 if(x==2)
//conditation for determinator
 {

   d=0;

   d=(f[1][1]*f[2][2])-(f[1][2]*f[2][1]);

   return(d);

  }

 else

 {

   for(j=1;j<=x;j++)

   {        

     int r=1,s=1;

     for(p=1;p<=x;p++)

       {

         for(q=1;q<=x;q++)

           {

             if(p!=1&&q!=j)

             {

               b[r][s]=f[p][q];

               s++;

               if(s>x-1)

                {

                  r++;

                  s=1;

                 }

              }

            }

        }

    for(t=1,pr=1;t<=(1+j);t++)

    pr=(-1)*pr;

    c[j]=pr*determinant(b,x-1);

    }

    for(j=1,d=0;j<=x;j++)

    {

      d=d+(f[1][j]*c[j]);

     }
//final return value 
    return(d);

  }

}

