#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//n*(n+1)/2 is the tc after removin if condition
//e.g. n=10
//*
//**
//***
//****
//*****
//******
//*******
//********
//*********
//**********
