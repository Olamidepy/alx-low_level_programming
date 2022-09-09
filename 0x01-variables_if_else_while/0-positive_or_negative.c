#!/bin/bash
#include <stdio.h>

int main()
{
	int n;
	printf("enter n:")
	scanf("%d", &n);

	if(n>0) {
        	printf("is positive\n");
	}

	else if(n==0) {
        	printf("is zero\n");
	}

	else(n<0) {
        	printf("is negative\n");
	}

	return 0;

}


			
	
