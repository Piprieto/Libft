/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piprieto <piprieto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:33:45 by piprieto          #+#    #+#             */
/*   Updated: 2024/10/24 09:43:43 by piprieto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*extract_word(const char *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

static const char	*advance_to_next(const char *s, char c)
{
	while (*s && *s != c)
		s++;
	if (*s)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;
	size_t	i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc((words + 1) * sizeof (char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			result[i] = extract_word(s, c);
			i++;
			s = advance_to_next(s, c);
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
/*
int main(void)
{
    // Ejemplos de cadenas a dividir
    char *s1 = "Hello, this is a test";
    char *s2 = "    Split    this    string  ";
    char *s3 = "word1,word2,word3";
    char *s4 = "one--two--three";
    
    // Caracteres delimitadores
    char delim1 = ' ';
    char delim2 = ',';
    char delim3 = '-';
void    print_split(char **result)
{
    if (!result)
    {
        printf("Result is NULL\n");
        return;
    }
    for (int i = 0; result[i]; i++)
    {
        printf("result[%d]: '%s'\n", i, result[i]);
    }
}

int main(void)
{
    char **result;

    // Caso 1: Cadena vacía
    printf("Caso 1: Cadena vacía\n");
    result = ft_split("", ' ');
    print_split(result);
    free(result);

    // Caso 2: Cadena sin el delimitador
    printf("\nCaso 2: Cadena sin el delimitador\n");
    result = ft_split("HelloWorld", ' ');
    print_split(result);
    free(result);

    // Caso 3: Cadena solo con delimitadores
    printf("\nCaso 3: Cadena solo con delimitadores\n");
    result = ft_split("   ", ' ');
    print_split(result);
    free(result);

    // Caso 4: Delimitador al principio y al final
    printf("\nCaso 4: Delimitador al principio y al final\n");
    result = ft_split("  Hello  World  ", ' ');
    print_split(result);
    free(result);

    // Caso 5: Delimitadores consecutivos
    printf("\nCaso 5: Delimitadores consecutivos\n");
    result = ft_split("Hello,,,,World", ',');
    print_split(result);
    free(result);

    // Caso 6: Cadena nula
    printf("\nCaso 6: Cadena nula\n");
    result = ft_split(NULL, ' ');
    print_split(result);
    // No es necesario liberar memoria porque el resultado debería ser NULL.

    return 0;
}
    // Llamadas a ft_split con diferentes cadenas y delimitadores
    char **result1 = ft_split(s1, delim1);
    char **result2 = ft_split(s2, delim1);
    char **result3 = ft_split(s3, delim2);
    char **result4 = ft_split(s4, delim3);

    // Función auxiliar para imprimir los resultados
    void print_split(char **result)
    {
        int i = 0;
        if (!result)
        {
            printf("NULL result\n");
            return;
        }
        while (result[i] != NULL)
        {
            printf("Word %d: '%s'\n", i, result[i]);
            free(result[i]);  // Liberar cada palabra después de imprimirla
            i++;
        }
        free(result);  // Liberar el array de punteros
    }

    // Imprimir los resultados de las divisiones
    printf("Result for s1 (space-delimited):\n");
    print_split(result1);
    
    printf("\nResult for s2 (space-delimited):\n");
    print_split(result2);
    
    printf("\nResult for s3 (comma-delimited):\n");
    print_split(result3);

    printf("\nResult for s4 (hyphen-delimited);
 }
*/
/* 
//comprobacion casos especiales
void    print_split(char **result)
{
    if (!result)
    {
        printf("Result is NULL\n");
        return;
    }
    for (int i = 0; result[i]; i++)
    {
        printf("result[%d]: '%s'\n", i, result[i]);
    }
}

int main(void)
{
    char **result;

    // Caso 1: Cadena vacía
    printf("Caso 1: Cadena vacía\n");
    result = ft_split("", ' ');
    print_split(result);
    free(result);

    // Caso 2: Cadena sin el delimitador
    printf("\nCaso 2: Cadena sin el delimitador\n");
    result = ft_split("HelloWorld", ' ');
    print_split(result);
    free(result);

    // Caso 3: Cadena solo con delimitadores
    printf("\nCaso 3: Cadena solo con delimitadores\n");
    result = ft_split("   ", ' ');
    print_split(result);
    free(result);

    // Caso 4: Delimitador al principio y al final
    printf("\nCaso 4: Delimitador al principio y al final\n");
    result = ft_split("  Hello  World  ", ' ');
    print_split(result);
    free(result);

    // Caso 5: Delimitadores consecutivos
    printf("\nCaso 5: Delimitadores consecutivos\n");
    result = ft_split("Hello,,,,World", ',');
    print_split(result);
    free(result);

    // Caso 6: Cadena nula
    printf("\nCaso 6: Cadena nula\n");
    result = ft_split(NULL, ' ');
    print_split(result);
    // No es necesario liberar memoria porque el resultado debería ser NULL.

    return 0;
}*/
