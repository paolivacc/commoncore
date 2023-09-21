/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:20:47 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/21 18:16:52 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

/**
 * @brief Tests if the argument is an alphabetic character.
 * @param c The character to test.
 * @returns one if the character is an alphabetic character, zero if not.
 */
int ft_isalpha(int c);
/**
 * @brief Test if the argument is a decimal digit character.
 * @param c The character to test.
 * @returns one if the character is a decimal digit character, zero if not.
*/
int ft_isdigit(int c);
 /**
  * @brief Test if the argument is an alphanumeric character.
  * @param c The character to test.
  * @returns one if the character is true for ft_isalpha or ft_isdigit, zero if not.
 */
int ft_isalnum(int c);
/**
 * @brief Test if the argument is an ASCII character.
 * @param c The character to test.
 * @returns one if the character is an ASCII character, zero if not.
 */
int ft_isascii(int c);
/**
  * @brief Test if the argument is a printable character.
  * @param c The character to test.
  * @returns one if the character is a printable character, zero if not.
 */
int ft_isprint(int c);
/**
 * @brief Computes the length of the string s.
 * @param s The string to compute the length of.
 * @returns The number of characters that precede the terminating NUL character.
*/
size_t ft_strlen(const char *s);
/**
 * @brief Writes len bytes of value c (converted to an unsigned char) to the string b.
 * @param b The string to write to.
 * @param c The value to write.
 * @param len The number of bytes to write.
*/
void *ft_memset(void *b, int c, size_t len);
/**
 * @brief Writes n zeroed bytes to the string s. If n is zero, it does nothing.
 * @param s The string to write to.
 * @param n The number of bytes to write.
 */
void ft_bzero(void *s, size_t n);
/*The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined.  Applications in which dst and src might overlap should use memmove(3) instead.
The memcpy() function returns the original value of dst.*/
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
/*The memmove() function copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-destructive manner.
The memmove() function returns the original value of dst.*/
void *ft_memmove(void *dst, const void src, size_t len);
/*The strlcpy() and strlcat() functions copy and concatenate strings with the same input parameters and output result as snprintf(3).  They are designed to be safer, more consistent, and less error prone replacements for the easily misused functions strncpy(3) and strncat(3).
     strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is room.  Note that room for the NUL should be included in dstsize.
	 strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.
	 If the src and dst strings overlap, the behavior is undefined.
Besides quibbles over the return type (size_t versus int) and signal handler safety (snprintf(3) is not entirely safe on some systems), the following two are equivalent:
           n = strlcpy(dst, src, len);
           n = snprintf(dst, len, "%s", src);
 Like snprintf(3), the strlcpy() and strlcat() functions return the total length of the string they tried to create.  For strlcpy() that means the length of src.  For strlcat() that means the initial length of dst plus the length of src.
     If the return value is >= dstsize, the output string has been truncated.  It is the caller's responsibility to handle this.*/
size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
/*The strlcpy() and strlcat() functions copy and concatenate strings with the same input parameters and output result as snprintf(3).  They are designed to be safer, more consistent, and less error prone replacements for the easily misused functions strncpy(3) and strncat(3).
	 strlcat() appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as it means that either dstsize is incorrect or that dst is not a proper string).
Besides quibbles over the return type (size_t versus int) and signal handler safety (snprintf(3) is not entirely safe on some systems), the following two are equivalent:
           n = strlcpy(dst, src, len);
           n = snprintf(dst, len, "%s", src);
 Like snprintf(3), the strlcpy() and strlcat() functions return the total length of the string they tried to create.  For strlcpy() that means the length of src.  For strlcat() that means the initial length of dst plus the length of src.
     If the return value is >= dstsize, the output string has been truncated.  It is the caller's responsibility to handle this.*/
size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
/* The toupper() function converts a lower-case letter to the corresponding upper-case letter.  The argument must be representable as an unsigned char or the value of EOF.
     Although the toupper() function uses the current locale, the toupper_l() function may be passed a locale directly. See xlocale(3) for more information.
RETURN VALUES
     If the argument is a lower-case letter, the toupper() function returns the corresponding upper-case letter if there is one; otherwise, the argument is returned unchanged.*/
int ft_toupper(int c);
/*The tolower() function converts an upper-case letter to the corresponding lower-case letter.  The argument must be representable as an unsigned char or the value of EOF.
     Although the tolower() function uses the current locale, the tolower_l() function may be passed a locale directly. See xlocale(3) for more information.
RETURN VALUES
     If the argument is an upper-case letter, the tolower() function returns the corresponding lower-case letter if there is one; otherwise, the argument is returned unchanged.*/
int ft_tolower(int c);
/*DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is `\0',the functions locate the terminating `\0'.
 The strrchr() function is identical to strchr(), except it locates the last occurrence of c.
RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located character, or NULL if the character does not appear in the string.*/
char *ft_strchr(const char *s, int c);
/* The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is `\0', the functions locate the terminating `\0'.
The strrchr() function is identical to strchr(), except it locates the last occurrence of c.
RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located character, or NULL if the character does not appear in the string.*/
char *ft_strrchr(const char *s, int c);
/* The strncmp() function compares not more than n characters.  Because strncmp() is designed for comparing strings rather than binary data, characters that appear after a `\0' character are not compared.
RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2.  The comparison is done using unsigned characters, so that `\200' is greater than `\0'.*/
int ft_strncmp(const char *s1, const char *s2, size_t n);
/*The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.
RETURN VALUES
     The memchr() function returns a pointer to the byte located, or NULL if no such byte exists within n bytes.*/
void *ft_memchr(const void *s, int c, size_ n);
/*The memcmp() function compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.
RETURN VALUES
     The memcmp() function returns zero if the two strings are identical, otherwise returns the difference between the first two differing bytes (treated as unsigned char values, so that `\200' is greater than `\0', for example).  Zero-length strings are always identical.  This behavior is not required by C and portable code should only depend on the sign of the returned value.*/
int ft_memcmp(const void *s1, const void *s2, size_t n);
/*The strnstr() function locates the first occurrence of the null-terminated string needle in the string
     haystack, where not more than len characters are searched.  Characters that appear after a `\0' character are not searched.  Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.
RETURN VALUES
     If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned; otherwise a pointer to the first character of the first occurrence of needle is returned.*/
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
/* The atoi() function converts the initial portion of the string pointed to by str to int representation.
     It is equivalent to:
           (int)strtol(str, (char **)NULL, 10);
     While the atoi() function uses the current locale, the atoi_l() function may be passed a locale directly. See xlocale(3) for more information.
IMPLEMENTATION NOTES
     The atoi() and atoi_l() functions are thread-safe and async-cancel-safe.
ERRORS
     The function atoi() need not affect the value of errno on an error.*/
int ft_atoi(const char *str);
/* The calloc() function contiguously allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory.  The allocated memory is filled with bytes of value zero.
RETURN VALUES
     If successful, calloc(), malloc(), realloc(), reallocf(), valloc(), and aligned_alloc() functions return a pointer to allocated memory.  If there is an error, they return a NULL pointer and set errno to ENOMEM.*/
void *ft_calloc(size_t count, size_t size);
/* The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.  The pointer may subsequently be used as an argument to the function free(3).
    If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
*/
char *ft_strdup(const char *s1);
#endif /*LIBFT_H*/



