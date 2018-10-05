/*
 *Author(s): Collin Sipple, Victor Nguyen, Joe Wyrick
 *Date Created: 10/03/2018
 *Date Modified: 10/05/2018
 */
#include<stdlib.h>
#include<stdio.h>
#include"array_utils.h"

//Something in this library is causing segfaults
int contains(const int *arr, int size, int x) {
  if(arr == NULL) {
	return 0;
  }
  
  for(int i = 0; i < size; i++) {
    if(x == arr[i]) {
      return 1;
    }
  }
  return 0;
}

int containsWithin(const int *arr, int size, int x, int i, int j) {
  if(arr == NULL) {
    return 0;	
  }
  
  if(i < 0 || i >= size) {
	return 0;
  } else if(j < 0 || j >= size) {
	return 0;
  }
  
  //Make the indices flexible; one can start before the other without consequence
  int start = 0;
  int end = 0;
  if(i < j) {
	start = i;
	end = j;
  } else {
	start = j;
	end = i;
  }
  
  for(int index = start; index <= end; index++) {
	if(x == arr[index]) {
	  return 1;
	}
  }
  return 0;
}

int * paddedCopy(const int *arr, int oldSize, int newSize) {
  
  int *newArr = (int *) malloc(sizeof(int) * newSize);
  int i = 0;
  while(i < oldSize) {
	newArr[i] = arr[i];
	i++;
  }
  while(i < newSize) {
	newArr[i] = 0;
	i++;
  }
  return newArr;
}

void reverse(int *arr, int size) {
  int n = 0;
  int *ptArray = paddedCopy(arr, size, size);
  for(int i = (size - 1); i >= 0; i--) {
	ptArray[i] = arr[n];
	n++;
  }
  arr = ptArray;
  return;
}

int * reverseCopy(const int *arr, int size) {
  
  int n = 0;
  int *newArr = (int *) malloc(sizeof(int) * size);
  int *arrNaught = paddedCopy(arr, size, size);
  for(int i = (size - 1); i >= 0; i--) {	
	newArr[n] = arrNaught[i];
	n++;
  }
  return newArr;
}