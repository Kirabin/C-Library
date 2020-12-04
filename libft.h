/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 11:43:38 by dmilan            #+#    #+#             */
/*   Updated: 2020/12/04 17:36:10 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define TRUE 1
# define FALSE 0
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>

# include <stddef.h>
# include <stdbool.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct		s_point
{
	double			x;
	double			y;
}					t_point;

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
void				ft_strfill(char fill, int n);
char				*ft_strnstr(const char *haystack, const char *needle,
								size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);

const char			*ft_strskip_char(const char *s, char c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_uitoa(unsigned int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putc_fd(char c, int fd);
void				ft_putuc_fd(unsigned char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putstrn_fd(char *s, int n, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_puti_fd(int n, int fd);
void				ft_putui_fd(unsigned int n, int fd);
void				ft_putui_hex_fd(unsigned int n, int is_upper, int fd);
void				ft_putul_hex_fd(unsigned long n, int is_upper, int fd);
void				ft_putcppn_fd(char **arr, int n, int fd);

int					ft_isspace(char c);
int					ft_isblank(char c);
int					ft_leni(int n);
int					ft_lenui(unsigned int n);
int					ft_lenui_hex(unsigned int n);
int					ft_lenul_hex(unsigned long n);
char				*ft_strnew(int n);
char				*ft_strjoinfree(char *s1, const char *s2);
int					ft_strcount(const char *s, char c);
int					ft_min(int a, int b);
int					ft_max(int a, int b);
const char			*ft_strskip(const char *s, int (*is_that)(int));
void				ft_swapi(int *a, int *b);
int					ft_absi(int a);

/*
**  Linked lists
*/

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
int					get_next_line(int fd, char **line);

/*
**  ft_printf
*/

typedef struct		s_format
{
	int				arg_len;
	char			*arg_s;
	int				width;
	int				precision;
	bool			precision_given;
	bool			left_aligned;
	bool			alternate_form;
	char			fill;
	char			sign;
	char			type;
	char			length;
}					t_format;

typedef struct		s_print
{
	int				printed;
	va_list			valist;
	t_format		f;
}					t_print;

int					ft_printf(const char *format, ...);
void				fill_width(char fill, int n);
void				print_c(t_print *print);
void				print_s(t_print *print);
void				print_p(t_print *print);
int					print_di(t_print *print);
int					print_u(t_print *print);
void				print_x(t_print *print, bool is_upper);
void				print_percent(t_print *print);
t_print				default_print(void);
t_format			default_format(void);
const char			*get_f_length(t_print *print, const char *format_string);

/*
**  POINT
*/

t_point				ft_point_add(t_point a, t_point b);

#endif
