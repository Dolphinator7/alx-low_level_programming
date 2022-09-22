#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
 * void prototypes()
 * int prototypes()
 * char prototypes()
 */

int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_number(int n);

#endif /* MAIN_H */
