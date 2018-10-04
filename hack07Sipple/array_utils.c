/*
 *Author(s): Collin Sipple, Victor Nguyen, Joe Wyrick
 *Date Created: 10/03/2018
 *Date Modified: 10/04/2018
 */
#include<stdlib.h>
#include<stdio.h>
#include"array_utils.h"

int contains(const int *arr, int size, int x) {
  if(arr == NULL) {
	return 1;
  }
  
  for(int i = 0; i < size; i++) {
    if(x == arr[i]) {
      return 0;
    }
  }
  return 1;
}

int containsWithin(const int *arr, int size, int x, int i, int j) {
  if(arr == NULL) {
    return 1;	
  }
  
  if(i < 0 || i >= size) {
	return 1;
  } else if(j < 0 || j >= size) {
	return 1;
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
	  return 0;
	}
  }
  return 1;
}

int * paddedCopy(const int *arr, int oldSize, int newSize) {
  
  if(arr == NULL) {
	return NULL;
  }
  int newArr[newSize];
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
	arr[n] = ptArray[i];
	n++;
  }
  return;
}

int * reverseCopy(const int *arr, int size) {
  if(arr == NULL) {
	return NULL;
  }
  int n = 0;
  int *newArr = paddedCopy(arr, size, size);
  for(int i = (size - 1); i >= 0; i--) {	
	newArr[n] = arr[i];
	n++;
  }
  return newArr;
}