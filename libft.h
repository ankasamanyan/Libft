/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akasaman <akasaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 01:23:23 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/07/20 19:42:43 by akasaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef   LIBFT_H
# define   LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include "ft_printf/ft_printf.h"
# include "get_next_line/get_next_line.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlcpy( char *dst, const char *src, size_t siz);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strrchr(const char *str, int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_atoi(const char*str);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memchr(const void *str, int c, size_t len);
int		ft_memcmp(const void *str1, const void *str2, size_t len);
void	ft_bzero(void *s, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
char	*ft_strrev(char *stringy);
int		ft_intlen(int n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strtrim(const char *str, const char *set);
char	**ft_split(char const *s, char c);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif