/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:20:47 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/15 20:03:56 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * @brief Tests if the argument is an alphabetic character.
 * @param c The character to test.
 * @return Non-zero if the character is an alphabetic character, zero if not.
 */
int		ft_isalpha(int c);
/**
 * @brief Test if the argument is a decimal digit character.
 * @param c The character to test.
 * @return Non-zero if the character is a decimal digit character, zero if not.
 */
int		ft_isdigit(int c);
/**
 * @brief Test if the argument is an alphanumeric character.
 * @param c The character to test.
 * @return Non-zero if the character is true for ft_isalpha or ft_isdigit,
	zero if not.
 */
int		ft_isalnum(int c);
/**
 * @brief Test if the argument is an ASCII character.
 * @param c The character to test.
 * @return Non-zero if the character is an ASCII character, zero if not.
 */
int		ft_isascii(int c);
/**
 * @brief Test if the argument is a printable character.
 * @param c The character to test.
 * @return Non-zero if the character is a printable character, zero if not.
 */
int		ft_isprint(int c);
/**
 * @brief Computes the length of the string s.
 * @param s The string to compute the length of.
 * @return The number of characters that precede the terminating NUL character.
 */
size_t	ft_strlen(const char *s);
/**
 * @brief Writes len bytes of value c (converted to an u. char) to the string b.
 * @param b The string to write to.
 * @param c The value to write.
 * @param len The number of bytes to write.
 * @return The first argument.
 */
void	*ft_memset(void *b, int c, size_t len);
/**
 * @brief Writes n zeroed bytes to the string s. If n is zero, it does nothing.
 * @param s The string to write to.
 * @param n The number of bytes to write.
 */
void	ft_bzero(void *s, size_t n);
/**
 * @brief Copies n bytes from memory area src to memory area dst.
 * If dst and src overlap, behavior is undefined. 
 * @param dst The string to copy to.
 * @param src The string to copy from.
 * @param n The number of bytes to copy.
 * @return The original value of dst.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);
/**
 * @brief Copies len bytes from string src to string dst. 
 * The two strings may overlap; the copy is done in a non-destrucive manner.
 * @param dst The string to copy to.
 * @param src The string to copy from.
 * @param len The number of bytes to copy.
 * @return The original value of dst.
 */
void	*ft_memmove(void *dst, const void *src, size_t len);
/**
 * @brief Copy up to dstsize - 1 characters from string src to the string dst 
 * guaranteeing NULL-terminate character if dstsize is not 0. 
 * If the src and dst strings overlap, the behaivor is undefined. 
 * @param dst The string to copy to.
 * @param src The string to copy from.
 * @param dstsize The number of bytes to copy, guaranteeing of NULL-terminate.
 * @return The total length of src.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
/**
 * @brief Appends the NULL-terminated string src to the end of dst. 
 * It will append at most dstsize - strlen(dst) - 1 bytes, 
 * NULL-terminating the result. If the src and dst string overlap, undefined. 
 * @param dst The string to copy to.
 * @param src The string to copy from.
 * @param dstsize The number of bytes to copy, guaranteeing of NULL-terminate.
 * @return The initial length of dst plus the length of src.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
/**
 * @brief Converts a lower-case letter to the corresponding upper-case letter.
 * @param c The character to convert. 
 * Must be representable as an unsigned char or the value of EOF.
 * @return The corresponding upper-case letter if there is one; 
 * otherwise, the argument is returned unchanged.
 */
int		ft_toupper(int c);
/**
 * @brief Converts an upper-case letter to the corresponding lower-case letter.
 * @param c The character to convert. 
 * Must be representable as an unsigned char or the value of EOF.
 * @return The corresponding lower-case letter if there is one; 
 * otherwise, the argument is returned unchanged.
 */
int		ft_tolower(int c);
/**
 * @brief Locates the first occurrence of c (converted to char) in the string 
 * pointed by s. If c is '\0', the functions locate the terminating '\0'.
 * @param s The string where to search.
 * @param c The character to search.
 * @return A pointer to the located character, 
 * or NULL if the character does not appear in the string.
 */
char	*ft_strchr(const char *s, int c);
/**
 * @brief Locates the last occurrence of c (converted to char) in the string 
 * pointed by s. If c is '\0', the functions locate the terminating '\0'.
 * @param s The string where to search.
 * @param c The character to search.
 * @return A pointer to the located character, 
 * or NULL if the character does not appear in the string.
 */
char	*ft_strrchr(const char *s, int c);
/**
 * @brief Compares n characters from strings s1 and s2. 
 * The comparison is done using unsigned characters, so '\200' > '\0'.
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @param n The maximum number of characters to compare.
 * @return An integer less than, equal to, or greater than zero if s1 is found, 
 * respectively, to be less than, to match, or be greater than s2.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/**
 * @brief Locates the first occurrence of c (converted to u. char) in string s.
 * @param s The string where to search.
 * @param c The character to search.
 * @param n The maximum number of characters to search.
 * @return A pointer to the byte located, 
 * or NULL if no such byte exist within n bytes.
 */
void	*ft_memchr(const void *s, int c, size_t n);
/**
 * @brief Compares byte string s1 against byte string s2. 
 * Both strings are assumed to be n bytes long.
 * @param s1 The first byte string to compare.
 * @param s2 The second byte string to compare.
 * @param n The maximum number of bytes to compare.
 * @return Zero if the two strings are identical, 
 * otherwise returns the difference between the first two differing bytes. 
 * Zero-length strings are always identical.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/**
 * @brief Locates the first occurrence of the str needle in the str haystack, 
 * where not more than len characters are searched. 
 * @param haystack The string where to search.
 * @param needle The string to search.
 * @param len The maximum number of characters to search.
 * @return haystack if needle is an empty string, 
 * NULL if needle occurs nowhere in haystack, 
 * otherwise a pointer to the first character of the first occurrence of needle.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
/**
 * @brief Converts the initial portion of the string pointed to by str to int.
 * @param str The string to convert.
 * @return The converted value.
*/
int		ft_atoi(const char *str);
/**
 * @brief Contigously allocates enough space for count objects 
 * that are size bytes of memory each. 
 * The allocated memory is filled with bytes of value zero.
 * @param count The number of elements to allocate.
 * @param size The size of the memory to allocate.
 * @return a pointer to allocated memory. 
 * If there is an error, they return a NULL pointer and set errno to ENOMEM. 
 */
void	*ft_calloc(size_t count, size_t size);
/**
 * @brief Allocates sufficient memory for a copy of the string s1, 
 * does the copy and returns the string.
 * @param s1 The string to copy.
 * @return A pointer to the copy, or NULL if insufficient memory was available.
*/
char	*ft_strdup(const char *s1);
/**
 * @brief Allocates with malloc and returns a substring from the string s.
 * @param s The string from which to create the substring. 
 * @param start The inicial index of the substring in the string s.
 * @param len The maximum length of the substring.
 * @return NULL if the allocation fails, a pointer to the substring if there is.
 */
char	*ft_substr(const char *s, unsigned int start, size_t len);
/**
 * @brief Allocates with malloc and returns a new string, 
 * which is the result of the concatenation of s1 and s2.
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return The new string. NULL if the allocation fails.
 */
char	*ft_strjoin(const char *s1, char const *s2);
/**
 * @brief Allocates with malloc and returns a copy of the s1 with the characters
 * specified in set removed from the beginning and the end of the string.
 * @param s1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return The trimmed string. NULL if the allocation fails.
 */
char	*ft_strtrim(const char *s1, char const *set);
/**
 * @brief Allocates with malloc and returns an array of strings obtained 
 * by splitting s using the character c as a delimiter. 
 * The array must be ended by a NULL pointer.
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return The array of new strings resulting from the split. 
 * NULL if the allocation fails.
 */
char	**ft_split(const char *s, char c);
/**
 * @brief Allocates with malloc and returns a string representing the integer 
 * received as an argument. Negative numbers must be handled.
 * @param n The integer to convert.
 * @return The string representing the integer. NULL if the allocation fails.
 */
char	*ft_itoa(int n);
/**
 * @brief Applies the function f to each character of the string s, 
 * and passing its index as first argument to create a new string with malloc 
 * resulting from succesive applications of f.
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return The string created from the successive applications of f. 
 * NULL if the allocation fails.
 */
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
/**
 * @brief Applies the function f to each character of the string passed 
 * as argument, passing its index as first argument. 
 * Each character is passed by address to f to be modified if necessary.
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 */
void	*ft_striteri(char *s, void (*f)(unsigned int, char *));
/**
 * @brief Outputs the character ’c’ to the given file descriptor.
 * @param c The character to output.	
 * @param fd The file descriptor on which to write.
 */
void	ft_putchar_fd(char c, int fd);
/**
 * @brief Outputs the string ’s’ to the given file descriptor.
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putstr_fd(char *s, int fd);
/**
 * @brief Outputs the string ’s’ to the given file descriptor, 
 * followed by a newline.
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putendl_fd(char *s, int fd);
/**
 * @brief Outputs the integer ’n’ to the given file descriptor.
 * @param n The integer to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putnbr_fd(int n, int fd);
/**
 * @brief Allocates with malloc and returns a new node. 
 * The member variable content is initialized with the value of the parameter 
 * content. The variable next is initialized to NULL.
 * @param content The content to create the new node with.
 * @return The new node.
 */
t_list	*ft_lstnew(void *content);
/**
 * @brief Adds the node ’new’ at the beginning of the list.
 * @param lst The address of a pointer to the first link of a list. 
 * @param new The address of a pointer to the node to be added to the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new);
/**
 * @brief Counts the number of nodes in a list.
 * @param lst The beginning of the list.
 * @return The length of the list.
 */
int		ft_lstsize(t_list *lst);
/**
 * @brief Returns the last node of the list.
 * @param lst The beginning of the list.
 * @return The last node of the list.
 */
t_list	*ft_lstlast(t_list *lst);
/**
 * @brief Adds the node ’new’ at the end of the list.
 * @param lst The address of a pointer to the first link of a list. 
 * @param new The address of a pointer to the node to be added to the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);
/**
 * @brief Takes as a parameter a node and frees the memory of the node’s content
 * using the function del given as a parameter and free the node. 
 * The memory of next must not be freed.
 * @param lst The node to free.
 * @param del The address of the function used to delete the content.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));
/**
 * @brief Deletes and frees the given node and every successor of that node, 
 * using the function del and free. 
 * Finally, the pointer to the list must be set to NULL.
 * @param lst The address of a pointer to a node.
 * @param del The address of the function used to delete the content of the node
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));
/**
 * @brief Iterates the list lst and applies the function f 
 * to the content of each node.
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on the list.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));
/**
 * @brief Iterates the list lst and applies the function f to the content of 
 * each node. Creates a new list resulting of the successive applications of 
 * the function f. 
 * The del function is used to delete the content of an element if needed.
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on the list.
 * @param del The address of the function used to delete the content of an 
 * element if needed.
 * @return The new list. NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif /*LIBFT_H*/
