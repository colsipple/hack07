/*
 *Editor(s): Collin Sipple, David
 *Date Modified: 10/05/2018
 */
/**
 * A structure that represents a single pixel value using
 * the RGB (red-blue-green) color model.  Each integer
 * value is in the range [0, 255].
 */
typedef struct {
  int red;
  int green;
  int blue;
} Pixel;

/**
 * Loads an image file specified by the given file path/name.
 * The height and width are indicated in the two pass-by-reference variables.
 * The image is returned as a two-dimensional array of Pixel values
 * of dimension (height x width) where the pixel at [0][0] corresponds to
 * the top-left most pixel value.
 */
Pixel **loadImage(const char *filePath, int *height, int *width);

/**
 * Saves the given image (which is assumed to have the same format as in
 * loadImage() and is of the given height x width) to the file specified
 * by the given path/name.
 */
void saveImage(const char *filePath, Pixel **image, int height, int width);

/**
 * TODO: add documentation
 * Produces a deep copy array of a given image with the same height and width
 */
Pixel ** copyImage(Pixel **image, int height, int width);

/**
 * TODO: add documentation
 * Takes the image where the rows are reversed, otherwise the same
 */
void flipHorizontal(Pixel **image, int height, int width);

/**
 * TODO: add documentation
 * Like the function above, takes the image array and reverses columns, otherwise the same
 */
void flipVertical(Pixel **image, int height, int width);

/**
 * TODO: add documentation
 * Create a new array where, height = width, width = height
 * First column becomes first row and so on
 * The bottom left becomes the top left and so on
 */
Pixel ** rotateClockwise(Pixel **image, int height, int width);
