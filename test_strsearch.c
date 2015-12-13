#include "myString.h"
#include <stdio.h>

int main(int argc, char **argv) {
  if (argc == 3) {
    puts("before processing:");
    printf("haystack: %s\n", argv[1]);
    printf("needle: %s\n\n", argv[2]);
    printf("strsearch() returned: %d\n\n", strsearch(argv[1], strlength(argv[1]), argv[2]));
    puts("after processing:");
    printf("haystack: %s\n", argv[1]);
    printf("needle: %s\n\n\n", argv[2]);
  } else
    return 1;
}
