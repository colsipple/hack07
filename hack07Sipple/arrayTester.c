/*
 *Author(s): Collin Sipple
 *Date Created: 10/03/2018
 *Date Modified: 10/05/2018
 *Purpose: Test the functions in array_utils.h
 */

#include<stdlib.h>
#include<stdio.h>
#include"array_utils.h"

int main(int argc, char **argv) {
  int numCases = 0;
  int casePass = 0;

  //Test for function contains()
  int sampArray[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
  //Test for a correct value
  int test = contains(sampArray, 10, 8);
  numCases++;
  if(test == 1) {
    printf("Test Case %d passed!\n", numCases);
    casePass++;
  } else {
    printf("Test Case %d failed! Expected correct value!\n", numCases);
  }
  //Test for wrong value
  test = contains(sampArray, 10, 12);
  numCases++;
  if(test == 0) {
    printf("Test Case %d passed!\n", numCases);
	casePass++;
  } else {
	printf("Test Case %d failed! Expected incorrect value!\n", numCases);
  }
  //Test for NULL pointer error
  test = contains(NULL, 10, 8);
  numCases++;
  if(test == 0) {
	printf("Test Case %d passed!\n", numCases);
	casePass++;
  } else {
	printf("Test Case %d failed! Expected NULL pointer error!\n", numCases);
  }
  
  //Test for function containsWithin()
  //Test for Correct Value
  test = containsWithin(sampArray, 10, 13, 5, 9);
  numCases++;
  if(test == 1) {
	printf("Test Case %d passed!\n", numCases);
	casePass++;
  } else {
	printf("Test Case %d failed! Expected correct value!\n", numCases);
  }
  //Test for Correct Value outside of boundaries
  test = containsWithin(sampArray, 10, 13, 0, 4);
  numCases++;
  if(test == 0) {
	printf("Test Case %d passed!\n", numCases);
	casePass++;
  } else {
	printf("Test Case %d failed! Expected correct value outside of boundaries!\n", numCases);
  }
  //Test for Correct Value with flipped indices
  test = containsWithin(sampArray, 10, 13, 9, 5);
  numCases++;
  if(test == 1) {
	printf("Test Case %d passed!\n", numCases);
	casePass++;
  } else {
	printf("Test Case %d failed! Expected correct value!\n", numCases);
  }
  printf("Passed %d out of %d cases.\n", casePass, numCases);
  
  //Test for function paddedCopy()
  //Test for new array of two greater than old array
  int *newArr = paddedCopy(sampArray, 10, 12);
  printf("Your old array listed: [");
  for(int i = 0; i < 10; i++) {
	if(i < 9) {
      printf("%d, ", sampArray[i]);
	} else {
	  printf("%d]\n", sampArray[i]);
	}
  }
  printf("Your new array listed: [");
  for(int i = 0; i < 12; i++) {
	if(i < 11) {
      printf("%d, ", newArr[i]);
	} else {
	  printf("%d]\n", newArr[i]);
	}
  }
  //Test for new array smaller than old array
  newArr = paddedCopy(sampArray, 10, 8);
  printf("Your old array listed: [");
  for(int i = 0; i < 10; i++) {
	if(i < 9) {
      printf("%d, ", sampArray[i]);
	} else {
	  printf("%d]\n", sampArray[i]);
	}
  }
  printf("Your new array listed: [");
  for(int i = 0; i < 8; i++) {
	if(i < 7) {
      printf("%d, ", newArr[i]);
	} else {
	  printf("%d]\n", newArr[i]);
	}
  }
  
  //Test for function reverse()
  printf("Your old array listed: [");
  for(int i = 0; i < 10; i++) {
	if(i < 9) {
      printf("%d, ", sampArray[i]);
	} else {
	  printf("%d]\n", sampArray[i]);
	}
  }
  reverse(sampArray, 10);
  printf("Your new array listed: [");
  for(int i = 0; i < 10; i++) {
	if(i < 9) {
      printf("%d, ", sampArray[i]);
	} else {
	  printf("%d]\n", sampArray[i]);
	}
  }
  
  //Test for function reverseCopy()
  printf("Your sample array listed: [");
  for(int i = 0; i < 10; i++) {
	if(i < 9) {
      printf("%d, ", sampArray[i]);
	} else {
	  printf("%d]\n", sampArray[i]);
	}
  }
  int *tstNewArray = reverseCopy(sampArray, 10);
  printf("Your new array listed: [");
  for(int i = 0; i < 10; i++) {
	if(i < 9) {
      printf("%d, ", tstNewArray[i]);
	} else {
	  printf("%d]\n", tstNewArray[i]);
	}
  }
  return 0;
}