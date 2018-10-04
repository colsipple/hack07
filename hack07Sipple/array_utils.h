/*
 *Author(s): Collin Sipple, Victor Nguyen, Joe Wyrick
 *Date Created: 10/03/2018
 *Date Modified: 10/03/2018
 *Purpose: Provide a library of array functions.
 */
#include<stdlib.h>
#include<stdio.h>

//Given an array, determine if int x is anywhere within
int contains(const int *arr, int size, int x);

//Determines if x is in between two indices
int containsWithin(const int *arr, int size, int x, int i, int j);

//Deep copies an array into a different size
int * paddedCopy(const int *arr, int oldSize, int newSize);

//Reverses the order of an array
void reverse(int *arr, int size);

//Creates a reversed version of the array
int * reverseCopy(const int *arr, int size);
