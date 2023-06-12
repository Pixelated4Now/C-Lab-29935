#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    do {
        printf("Enter an alphabetic character: ");
        scanf(" %c", &c);
    } while (!isalpha(c));

    switch(tolower(c)) {
      case 'a':
          printf("It's a vowel.\n");
          break;
      case 'e':
          printf("It's a vowel.\n");
          break;
      case 'i':
          printf("It's a vowel.\n");
          break;
      case 'o':
          printf("It's a vowel.\n");
          break;
      case 'u':
          printf("It's a vowel.\n");
          break;
      default:
        printf("It's a consonant.\n");
    }



    return 0;
}
