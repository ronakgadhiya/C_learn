#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "LearnVern", str2[] = "learnvern", str3[] = "LearnVern";
  int result;

  // comparing strings str1 and str2
  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);

  // comparing strings str1 and str3
  result = strcmp(str1, str3);
  printf("strcmp(str1, str3) = %d\n", result);

  return 0;
}


// const char str[] = "Welcome to LearnVern";
//    const char ch = 'L';
//    char *ret;

//    ret = strchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);




// printf("After reversing string is =%s",strrev(str));



// printf("After converting string to uppercase =%s",strupr(str));



// printf("After converting string to lowercase =%s",strlwr(str));