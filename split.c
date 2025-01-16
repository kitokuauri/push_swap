/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:44:19 by aursuare          #+#    #+#             */
/*   Updated: 2025/01/09 18:00:42 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t  ft_strlen(const char *str)
{
    size_t  i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

static unsigned int ft_count(const char *str, char c)
{
    unsigned int    count;

    count = 0;
    while (*str)
    {
        while (*str && c == *str)
            str++;
        if (*str)
            count++;
        while (*str && *str != c)
            *str++;
    }
    return (count);
}

static char *ft_strdup(const char *str. int start, int finish)
{
    size_t  i;
    char    *dup;

    dup = malloc((finish - start + 1) * sizeof(char))
    if (!dup)
        return (NULL);
    i = 0;
    while (start < finish)
        dup[i++] = str[start++];
    dup[i] = '\0';
    return (dup);
}

static char *ft_strcpy(size_t n, char const *str, char c, char **split)
{
    int     i;
    size_t  j;

    i = -1;
    j = 0;
    while (n <= ft_strlen(str))
    {
        if (str[n] != c && i < 0)
            i = n;
        else if ((str[n] == c || n == ft_strlen(str)) && i >= 0)
        {
            split[j++] = ft_strdup(str, i, n);
            i = -1;
        }
        n++;
    }
    split[j] = 0;
    return (split[j]);
}

char    **ft_split(char const *str, char c)
{
    size_t  i;
    char    **split;

    if (!str)
        return (NULL);
    split = malloc((ft_count(str, c) + 1) * sizeof(char *));
    if (!split)
        return (NULL);
    i = 0;
    ft_strcpy(i, str, c, split);
    return (split);
}