
#include <stdlib.h>
#include <stdio.h>

#include "imageUtils.h"

int main(int argc, char **argv) {

  int h, w;
  Pixel **image = loadImage("suddenspoiling.jpeg", &h, &w);
  printf("Loading image works!\n");
  Pixel **newImage = copyImage(image, h, w);
  printf("Copying image works!\n");
  saveImage("copy.jpg", newImage, h, w);
  printf("Saving image works!\n");
  flipHorizontal(image, h, w);
  printf("Flipping image works!\n");
  saveImage("copy1.jpg", image, h, w);
  printf("Saving image works!\n");
  flipVertical(newImage, h, w);
  printf("Flipping image works!\n");
  saveImage("flipflop.jpg", newImage, h, w);
  printf("Saving image works!\n");
  
  Pixel **rotImage = rotateClockwise(newImage, h, w);
  printf("Rotating image works!\n");
  saveImage("Rotate.jpg", rotImage, w, h);
  printf("Saving image works!\n");
  
  rotImage = rotateClockwise(rotImage, w, h);
  printf("Rotating image works!\n");
  saveImage("Rotate_180.jpg", rotImage, h, w);
  printf("Saving image works!\n");
  rotImage = rotateClockwise(rotImage, h, w);
  printf("Rotating image works!\n");
  saveImage("Rotate_270.jpg", rotImage, w, h);
  printf("Saving image works!\n");
  rotImage = rotateClockwise(rotImage, w, h);
  printf("Rotating image works!\n");
  saveImage("Rotate_360.jpg", rotImage, h, w);
  printf("Saving image works!\n");
  return 0;
}
