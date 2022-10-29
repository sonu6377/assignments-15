/* 1
#include<stdio.h>
int largest(int a[],int n);
int main()
{
    int n,a[100],s;
    printf("enter the size of an arrays ");
    scanf("%d",&n);
    s=largest(a,n);
    printf("the largest numbers of an array [%d] ",s);
    return 0;
}
int largest(int a[],int n)
{
    int i,largest=0,secondlargest=0;
    printf("enter the arrays elements ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    largest=a[0];
    for(i=1;i<n;i++)
    {
        if(largest<a[i])
        {
            secondlargest=largest;
            largest=a[i];
        }
    }
    return largest;
}*/
/* 2
#include<stdio.h>
int smallest(int a[],int n);
int main()
{
    int n,a[100],s;
    printf("enter the size of an arrays ");
    scanf("%d",&n);
    s=smallest(a,n);
    printf("smallest numbers of an arrays [%d]",s);
    return 0;
}
int smallest(int a[],int n)
{
    int i,largest=0,secondlargest=0;
    printf("enter the elements of an arrays ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        secondlargest=a[0];
        for(i=1;i<n;i++)
        {
            if(secondlargest>a[i])
            {
                largest=secondlargest;
                secondlargest=a[i];
            }
        }
        return secondlargest;

}*/
/* 3
#include<stdio.h>
void sort(int a[],int n);
int main()
{
    int n,a[100];
    printf("enter the size of an arrays ");
    scanf("%d",&n);
    sort(a,n);
    return 0;
}
void sort(int a[],int n)
{
    int i,j,temp=0,x,y;
    printf("enter the an arrays elements ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
            printf(" %d ",a[i]);

        }


}*/
/* 4
#include<stdio.h>
void display(int n, int a[]);
int rotated(int n, int da, int a[]);
int main()
{
    int n,da,a[100];
    printf("enter the size of an arrays ");
    scanf("%d",&n);
    printf("enter the numbers how many time rotated an arrays ");
    scanf("%d",&da);
    rotated(n,da,a);
    display(n,a);
    return 0;
}
int rotated(int n, int da, int a[])
{
    int i,temp=0;
    printf("enter the arrays elements ");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     while(da)
     {
         temp=a[0];
         for(i=0;i<n;i++)
         {
             a[i]=a[i+1];
         }
          a[n-1]=temp;
         da--;
     }

}
void display(int n, int a[])
{
    int i;
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);
}*/
/* 5
#include<stdio.h>
int occurrence(int a[],int n);
int main()
{
    int n,a[100],s;
    printf("enter the size of an arrays ");
    scanf("%d",&n);
    s=occurrence(a,n);
    printf("first occurrence numbers an arrays %d  ",s);
    return 0;
}
int occurrence(int a[],int n)
{
    int i;
    printf("enter the numbers of an arrays ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
            return a[i];
    }
}*/
/* 6
#include<stdio.h>
void reverse(int a[],int n);
int main()
{
    int n,a[100];
    printf("enter the size of an array ");
    scanf("%d",&n);
    reverse(a,n);
    return 0;
}
void reverse(int a[],int n)
{
    int i;
    printf("enter the an arrays elements ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n arrays reverse order\n ");
    for(i=n-1;i>=0;i--)
        printf(" %d ",a[i]);
}*/
/* 7
#include<stdio.h>
int duplicate(int a[],int n);
int main()
{
    int n ,a[100],s;
    printf("enter the size of an arrays ");
    scanf("%d",&n);
    s=duplicate(a,n);
    printf("duplicate value %d ",s);
    return 0;
}
int duplicate(int a[],int n)
{
    int i,j,count=0;
    printf("enter the arrays elements ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
                if(a[i]==a[j])
                count++;
        }
    return count;
}*/
/* 8
#include<stdio.h>
void unique(int a[],int n);
int main()
{
    int n,a[100];
    printf("enter the size of an arrays ");
    scanf("%d",&n);
    unique(a,n);
    return 0;
}
void unique(int a[],int n)
{
    int i,j, count=1;
    printf("enter the arrays elements ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
                if(a[i]==a[j]&&i!=j)
            break;}
            if(j==n)
        {printf("\n unique elements [%d] %d ",count,a[i]);
        count++;
        }
    }


}*/

/* 9
#include<stdio.h>
void sort(int a[],int b[],int c[],int n1,int n2,int n3);
int main()
{
    int n1,n2,n3;
    int a[100],b[100],c[200];
    printf("enter the size of first arrays ");
    scanf("%d",&n1);
    printf("\n enter the size of second arrays  ");
    scanf("%d",&n2);
    n3=n1+n2;
    sort(a,b,c,n1,n2,n3);
    return 0;
}
void   sort(int a[],int b[],int c[],int n1,int n2,int n3)
{
    int i,j,temp=0;
    printf("enter the first arrays elements ");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    printf("\n enter the second arrays elements ");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    printf("\n ");
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<n2;i++)
    {
        c[i+n1]=b[i];
    }
    printf("\n merge array \n");
    for(i=0;i<n3;i++)
        printf(" %d ",c[i]);
        printf("\n ************************************************ \n");
    for(i=0;i<n3;i++)
    {
        for(j=0;j<n3;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
      for(i=0;i<n3;i++)
        printf(" %d ",c[i]);

}*/

#include<stdio.h>
void frequnecy(int a[],int b[],int n);
int main()
{
    int n,a[100],b[100];
    printf("enter the size of first arrays ");
    scanf("%d",&n);
    frequnecy(a,b,n);
    return 0;
}
void frequnecy(int a[],int b[],int n)
{
    int i,j,count=0;
    printf("enter the first arrays elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                b[j]=0;
            }
        }
        if(b[i]!=0)
            b[i]=count;

    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(b[i]!=0)
        printf("\n frequency numbers [%d] : %d",a[i],b[i]);
    }
}
