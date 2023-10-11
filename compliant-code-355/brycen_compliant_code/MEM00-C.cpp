// MEM00-C Brycen Fulscher

/**
 * @file MEM00-C.c
 *
 * @brief This code demonstrates dynamic memory allocation and checking for minimum size.
 */

#include <stdio.h>
#include <stdlib.h>

/** @def minimum_size
 *  The minimum size allowed for the allocated memory.
 */
enum { minimum_size = 10 };

/**
 * @brief Check if the given size is greater than or equal to the minimum size.
 *
 * If the size is less than the minimum size, it prints an error message.
 *
 * @param list The list to check.
 * @param size The size of the list.
 *
 * @return 0 if the size is valid, no return value for errors.
 */
int check_size(const char *list, size_t size) {
  if (size < minimum_size) {
    fprintf(stderr, "Error: Size is less than the minimum allowed size!\n");
  }
  return 0;
}

/**
 * @brief Process a list of a given size.
 *
 * This function allocates memory for a list and checks its size.
 *
 * @param number The size of the list to allocate.
 */
void process_list(size_t number) {
  char *list = (char *)malloc(number);
  if (list == NULL) {
      fprintf(stderr, "Error: Memory allocation issue!\n");
  }
  if (check_size(list, number) == -1) {
    free(list);
    return;
  }

  /* Continue processing the list here */

  free(list);
}

/**
 * @brief The main function.
 *
 * It sets the size to allocate and calls the process_list function.
 *
 * @return 0 to indicate successful execution.
 */
int main() {
  size_t size_to_allocate = 5;

  process_list(size_to_allocate);

  return 0;
}
