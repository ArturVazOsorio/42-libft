/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantela- <aantela-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:17:06 by aantela-          #+#    #+#             */
/*   Updated: 2026/05/13 04:20:55 by aantela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
/**
 * @brief ft_isalpha verifica se o valor na tabela ASCII e letra (a-z || A-Z).
 * @param c inteiro do char a verificar.
 * @return 1 para verdadeiro 0 para falso.
 */
int		ft_isalpha(int c);
/**
 * @brief ft_isdigit verifica se o valor na tabela ASCII e numero (0-9).
 * @param c inteiro do char a verificar.
 * @return 1 para verdadeiro 0 para falso.
 */
int		ft_isdigit(int c);
/**
 * @brief ft_isalnum verificar se o valor e letra ou numero.
 * @param c inteiro do char a verificar.
 * @return 1 para verdadeiro 0 para falso.
 */
int		ft_isalnum(int c);
/**
 * @brief ft_isascii verificar se o valor esta contigo na tabela ASCII.
 * @param c inteiro do char a verificar.
 * @return 1 para verdadeiro 0 para falso.
 */
int		ft_isascii(int c);
/**
 * @brief ft_isprint verificar se o valor e imprimivel.
 * @param c inteiro do char a verificar.
 * @return 1 para verdadeiro 0 para falso.
 */
int		ft_isprint(int c);
/**
 * @briel ft_strlen retorna em size_t o tamanho da string percorida.
 * @param str string recebida para verificar.
 * @return valor size_t do tamanho da string. 
 */
size_t	ft_strlen(const char *str);
/**
 * @brief ft_memset
 * preenche os n bytes da memoria apontada por s com o valor c.
 * @param s ponteiro para a memoria a preencher.
 * @param c valor a escrever (convertido para unsigned char).
 * @param n numero de bytes a preencher.
 * @return Ponteiro para a memoria preenchida (s).
 */
void	*ft_memset(void *s, int c, size_t n);
/**
 * @brief ft_bzero
 * prenche os n bytes da memoria apontada por s com o valor de 0.
 * @param s ponteiro para memoria a preencher.
 * @param n numero de bytes a preencher.
 * @return void function.
 */
void	ft_bzero(void *s, size_t n);
/**
 * @brief ft_memcpy copia n bytes da memoria src para dest.
 * comportamento indefinido se as areas se sobrepuserem.
 * @param dest ponteiro para a memoria de destino.
 * @param src  ponteiro para a memoria de origem (nao modificada).
 * @param n    numero de bytes a copiar.
 * @return ponteiro para dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);
/**
 * @brief ft_memmove
 * copia n bytes de src para dest, tratando corretamente areas de
 * memoria sobrepostas.
 * @param dest ponteiro para a memoria de destino.
 * @param src  ponteiro para a memoria de origem.
 * @param n    numero de bytes a copiar.
 * @return ponteiro para dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n);
/**
 * @brief ft_strlcpy
 * copia src para dst garantindo terminacao em '\0'.
 * copia no maximo size - 1 caracteres.
 * @param dst  ponteiro para o buffer de destino.
 * @param src  ponteiro para a string de origem.
 * @param size tamanho total do buffer de destino (incluindo'\0').
 * @return comprimento total de src (sem o '\0').
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
/**
 * @brief ft_strlcat
 * concatena src no fim de dst, garantindo terminacao em '\0'.
 * Escreve no maximo size - dst_len - 1 caracteres.
 * @param dst  Ponteiro para o buffer de destino (deve estar inicializado).
 * @param src  Ponteiro para a string de origem.
 * @param size Tamanho total do buffer de destino (incluindo '\0').
 * @return Comprimento total que tentaria criar (dst_len + src_len).
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);
/**
 * @brief ft_to_upper converte caracteres minusculos para maiusculo.
 * @param c inteiro do char a converter.
 * return maisculo de c se for minusculo. c sem alteracao.
 */
int		ft_toupper(int c);
/**
 * @brief ft_tolower converte um caractere maiusculo para minusculo.
 * @param c inteiro do char a converter.
 * @return minusculo de c se for maiusculo, c sem alteracao.
 */
int		ft_tolower(int c);
/**
 * @brief ft_strchr procura a primeira ocorrencia de c na string s,
 * incluindo o terminador '\0'.
 * @param s ponteiro para a string a pesquisar.
 * @param c caractere a procurar (convertido para char).
 * @return ponteiro para a primeira ocorrencia de c em s,
 * ou NULL se nao encontrado.
 */
char	*ft_strchr(const char *s, int c);
/**
 * @brief ft_strrchr procura a ultima ocorrencia de c na string s,
 * incluindo o terminador '\0'.(procurando de tras para frente).
 * @param s ponteiro para a string a pesquisar.
 * @param c caractere a procurar (convertido para char).
 * @return ponteiro para a ultima ocorrencia de c em s,
 * ou NULL se nao encontrado.
 */
char	*ft_strrchr(const char *s, int c);
/**
 * @brief ft_strncmp compara os primeiros n caracteres de duas strings.
 * @param s1 ponteiro para a primeira string.
 * @param s2 ponteiro para a segunda string.
 * @param n  numero de caracteres a comparar.
 * @return 0 se iguais, valor positivo se s1 > s2,
 *						valor negativo se s1 < s2.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/**
 * @brief ft_memchr
 * procura a primeira ocorrencia do byte c nos primeiros n bytes de s.
 * @param s ponteiro para a memoria a pesquisar.
 * @param c byte a procurar (convertido para unsigned char).
 * @param n numero de bytes a pesquisar.
 * @return ponteiro para a primeira ocorrencia de c,
 * ou NULL se nao encontrado.
 */
void	*ft_memchr(const void *s, int c, size_t n);
/**
 * @brief ft_memcmp compara os primeiros n bytes de duas areas de memoria.
 * @param s1 ponteiro para a primeira area de memoria.
 * @param s2 ponteiro para a segunda area de memoria.
 * @param n  numero de bytes a comparar.
 * @return 0 se iguais, valor positivo se s1 > s2,
 *						valor negativo se s1 < s2.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/**
 * @brief ft_strnstr
 * procura a primeira ocorrencia de little em big,
 * limitado aos primeiros len caracteres.
 * @param big    ponteiro para a string onde pesquisar.
 * @param little ponteiro para a substring a procurar.
 * @param len    numero maximo de caracteres a pesquisar.
 * @return ponteiro para o inicio da ocorrencia em big,
 * NULL se nao encontrado, big se little for vazio.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);
/**
 * @brief ft_atoi converte uma string para inteiro,
 * ignorando espacos iniciais e tratando sinal +/-.
 * @param nptr ponteiro para a string a converter.
 * @return valor inteiro representado pela string.
 */
int		ft_atoi(const char *str);
/**
 * @brief ft_calloc
 * aloca memoria e copia nmemb elementos de tamanho size inicializados a zero.
 * @param nmemb numero de elementos a alocar.
 * @param size  tamanho em bytes de cada elemento.
 * @return Ponteiro para a memoria alocada e zerada,
 * ou NULL em caso de erro ou overflow.
 */
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
