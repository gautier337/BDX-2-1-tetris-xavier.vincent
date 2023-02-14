/*
** EPITECH PROJECT, 2021
** my header
** File description:
** an header with all my functions
*/

#ifndef MY_H_
    #define MY_H_

// Libs
    #include <fcntl.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <sys/stat.h>

// Functions
void my_putchar(char);
int my_isneg(int);
int my_put_nbr(int);
void my_swap(int *, int *);
int my_putstr(char const *);
int my_strlen(char const *);
int my_getnbr(char const *);
void my_sort_int_array(int *, int);
int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_is_prime(int);
int my_find_prime_sup(int);
char *my_strcpy(const char *);
char *my_strncpy(char *, char const *, int);
char *my_revstr(char *);
char *my_strstr(char *, char const *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
char *my_strupcase(char *);
char *my_strlowcase(char *);
int previous_char_str(char);
char *my_strcapitalize(char *);
int my_str_isalpha(char const *);
int my_str_isnum(char const *);
int my_str_islower(char const *);
int my_str_isupper(char const *);
int my_str_isprintable(char const *);
int my_showstr(char const *);
int my_showmem(char const *, int);
char *my_strcat(char *src, char *dest);
char *my_strncat(char *, char const *, int);
int my_puterror(char const *);
int my_getnbsize(int);
char *my_put_nbr_in_str(int);
char *my_convert_base(long long, char *);
char *my_convert_base_bis(long long, int, char *, char *);
char *my_load_file_in_mem(const char *);
char **str_to_array(char *, char *);
char *next_word(char *, char *);
int lenght_word_in_string(char *, char *);
int count_sep(char *, char *);
int my_free_arr(char **);
int my_strncmp_back(char const *s1, char const *s2, int n);
int my_arrlen(char **arr);
int my_line_contains(char *, char);

#endif /* !MY_H_ */
