# LIBFT
<img src="lib.png" style="width:10rem"/>

*This project has been created as part of the curriculum of 42 by legomez*

## Description
**Libft** is our first project on the common core cursus in 42.
The project involves creating our first library with c code.
A basic sumary of what **Libft** has is:
 - Char functions (`char`)
 - Integer functions (`int`)
 - String functions (`char *`)
 - Memory functions (`void *`)
 - Dynamic memory (`malloc(3)` & `free(3)`)
 - Linked lists

### Char functions `char`

This functions control how is represented a character (ASCII code).

```c
void			ft_putchar_fd(char c, int fd);

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

int				ft_toupper(int c);

int				ft_tolower(int c);
```

### Integer functions `int`

This functions control how is an integer represented.

```c
int				ft_atoi(const char *src);

char			*ft_itoa(int n);

void			ft_putnbr_fd(int n, int fd);
```

### String functions `char *`

This functions control how strings (chains of `char` values) are managed.

```c
char			*ft_strdup(const char *src);

char			**ft_split(char const *s, char c);

char			*ft_strchr(const char *s, int c);

char			*ft_strrchr(const char *s, int c);

char			*ft_strtrim(char const *s1, char const *set);

char			*ft_strjoin(char const *s1, char const *s2);

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char			*ft_strnstr(const char *big, const char *little, size_t len);

char			*ft_substr(char const *s, unsigned int start, size_t len);

void			ft_striteri(char *s, void (*f)(unsigned int, char*));

void			ft_putstr_fd(char *s, int fd);

void			ft_putendl_fd(char *s, int fd);

int				ft_strncmp(const char *s1, const char *s2, size_t n);

size_t			ft_strlcat(char *dest, const char *src, size_t size);

size_t			ft_strlcpy(char *dest, const char *src, size_t size);

size_t			ft_strlen(const char *c);
```

### Memory functions `void *`

This functions control memory sections in the `RAM` memory of the computer.

```c
void			ft_bzero(void *s, size_t n);

void			*ft_memset(void *s, int c, size_t n);

void			*ft_memchr(const void *s, int c, size_t n);

void			*ft_memcpy(void *dest, const void *src, size_t n);

void			*ft_memmove(void *dest, const void *src, size_t n);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

```

### Dynamic memory `malloc(3)` & `free(3)`

This is the only functions in this category, because `ft_calloc` is based on improve the `calloc`function, because it reserves memory, but puts that memory at zero.
This difference is very important because makes the memory reservation more secure.

> Many functions uses `malloc(3)` and `free(3)` as a part of them, but `ft_calloc` is only based on dynamic memory reservation.

```c
void			*ft_calloc(size_t num, size_t size);
```

### Linked lists

In this case, we are using a `struct`named `t_list`.
```c
typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```
This functions control the creation of a new node, add nodes at the begining or at the end of the chain, returns the chain size, apply functions to all the nodes or can delete nodes or the entire chain.

```c
t_list			*ft_lstnew(void *content);

void			ft_lstadd_front(t_list **lst, t_list *new);

void			ft_lstadd_back(t_list **lst, t_list *new);

void			ft_lstiter(t_list *lst, void (*f)(void *));

void			ft_lstdelone(t_list *lst, void (*del)(void *));

void			ft_lstclear(t_list **lst, void (*del)(void *));

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list			*ft_lstlast(t_list *lst);

unsigned int	ft_lstsize(t_list *lst);
```

## Instructions

**Libft** has a `Makefile` file that combines all the `.c` files and the `libft.h` header file in one file (`libft.a`) which is the library.
The `Makefile` contains some *recipies* for the compilation of the `libft.a` file.

- `make` builds the file.
- `make clean` deletes the `libft.a` created.
- `make fclean` calls `clean` and deletes all the *trash* created in the process.
- `make re` calls `fclean`to erase all the *trash* and the builds `libft.a`.

## Resources
 - [Python tutor](https://pythontutor.com/c.html#mode=edit) to see the code worklow.
 - [Google](https://google.com) to search information related to some content.
 - Console `man` command to learn how to develop some functions.
