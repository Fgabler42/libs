/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:56:04 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/25 16:25:01 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef LIBFT_H
# define LIBFT_H

/* get_next_line */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <limits.h>
# include <fcntl.h>
# include <stddef.h>

# ifndef CUSTOM_CONTENT
#  define CUSTOM_CONTENT

typedef void	*t_content;

# endif

/* STRUCTS */
typedef enum e_bool{false, true}	t_bool;

/* double circular lists */
typedef enum e_direction{clockwise, counter_clockwise}	t_direction;

typedef struct s_list
{
	t_content				*content;
	struct s_list			*next;
}	t_list;

typedef union u_union
{
	t_content	split;
	void		*ptr;
	char		*s;
	int			i;
}	t_union;

typedef struct s_dubl_list
{
	t_union					content;
	struct s_dubl_list		*prev;
	struct s_dubl_list		*next;
}	t_dubl_list;

/* libft */
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
size_t			ft_strlen(const char *s);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t n);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(
					const char *haystack, const char *needle, size_t len);
int				ft_atoi(const char *str);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);
int				count_doupple_arry_quantity(char **array);
void			free_dubble_array(char **arr);
char			**copy_dubble_array(char **array);
long			ft_strtol(const char *str);
unsigned char	*ft_strjoin_mod_uns(char *s1, char *s2);

/* dubble cirular lists */
void			ft_clstadd_back(t_dubl_list **lst, t_dubl_list *new);
t_dubl_list		*ft_clstnew(t_union content);
void			ft_clstclear(t_dubl_list **lst);
void			ft_clstadd_front(t_dubl_list **lst, t_dubl_list *new);

/* additional */
char			*ft_substr(const char *s, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(const char *s1, const char *set);
char			**ft_split(const char *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

/* bonus */
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(
					t_list *lst, void *(*f)(void *), void (*del)(void *));

/* ft_printf */
int				ft_printf(const char *_restrict_, ...);
void			put_char_mod(char _restrict_, int *ret_len);
void			ft_print_hex(unsigned int num, const char format, int *ret_len);
void			ft_print_str(const char *ret_from_arg, int *ret_len);
void			ft_print_ptr(unsigned long int num, int *ret_len);
void			ft_print_num(int ret_from_arg, int *ret_len);
void			ft_print_uns(unsigned int ret_from_arg, int *ret_len);

/* get_next_line */
char			*ft_strjoin_mod(char *s1, char *s2);
char			*get_next_line(int fd);

#endif
