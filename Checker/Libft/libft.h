/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:03:30 by poriou            #+#    #+#             */
/*   Updated: 2024/02/06 15:55:15 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>
# include <fcntl.h>

void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
long	ft_atol(const char *nptr);
int		ft_atoi(const char *nptr);
int		ft_atoi_base(char *nb, char *base);
int		ft_check_base(char *base);
int		ft_countwords(char *str, char *charset);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_ischarset(char c, char *set);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_numlen(int n);
int		ft_numlen_base(int n, char *base);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	**ft_split(char const *s, char *set);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
char	*ft_itoa(int n);
char	*ft_itoa_base(int n, char *base);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));

/********** FT_PRINTF **********/

typedef struct s_print
{
	va_list	args;
	int		width;
	int		color;
	int		total_length;
	int		spaces;
}			t_print;

int		ft_printf(const char *str, ...);
int		pf_eval_format(t_print *tab, const char *str, int index);
int		pf_itoa_base(unsigned long int n, char *base);
int		pf_unbrlen(long unsigned int n, char *base);
void	pf_checkcase(t_print *tab, char c);
void	pf_print_char(t_print *tab);
void	pf_print_colored_str(t_print *tab);
void	pf_print_int(t_print *tab);
void	pf_print_hexal(t_print *tab);
void	pf_print_hexau(t_print *tab);
void	pf_print_pointer(t_print *tab);
void	pf_print_str(t_print *tab);
void	pf_print_uint(t_print *tab);

/********** GET_NEXT_LINE **********/

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
char	*gl_strchr(char *s, int c);
char	*gl_substr(char *s, unsigned int start, size_t len);
char	*gl_strjoin(char *s1, char *s2);
char	*gl_strdup(char *s);
size_t	gl_strlen(char *s);

#endif
