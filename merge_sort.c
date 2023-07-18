#include<stdio.h>

void merge(int a[],int si,int ei,int mid)
{
    int i,j,k,c[100];
    i=si;
    j=mid+1;
    k=si;
    while(i<=mid && j<=ei)
    {
        if(a[i]<a[j])
            c[k++]=a[i++];
        else
            c[k++]=a[j++];
    }
    while(i<=mid)
        c[k++]=a[i++];
    while(j<=ei)
        c[k++]=a[j++];
    for(int i=si;i<=ei;i++)
        a[i]=c[i];
}

void mergesort(int a[],int si,int ei){
    if(si<ei){
        int mid=(si+ei)/2;
        mergesort(a,si,mid);
        mergesort(a,mid+1,ei);
        merge(a,si,ei,mid);
    }
}

void main()
{
    int n,a[100];
    printf("Enter number of elements");
    scanf("%d",&n);
    printf("Enter elements");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Sorted array\n");
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
}
