/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <mciupek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:41:15 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/18 17:39:14 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int	main(int argc, char **argv)
{
    char *txt = argv[1];
    size_t len = strlen(txt);
    
    //************************** PARTIE 1 ******************************
	// ATOI
    printf("%s\t|\t", ft_atoi(argv[1]) == atoi(argv[1]) ? "TRUE" : "FALSE");
	printf("ft_atoi : %i\t", ft_atoi(argv[1]));
	printf("atoi : %i\n", atoi(argv[1]));
	
	// STRLEN
    printf("%s\t|\t", ft_strlen(argv[1]) == strlen(argv[1]) ? "TRUE" : "FALSE");
	printf("ft_strlen : %i\t", ft_strlen(argv[1]));
	printf("strlen : %lu\n", strlen(argv[1]));
	
	// ISALPHA
    printf("%s\t|\t", ft_isalpha(argv[1][0]) == isalpha(argv[1][0]) ? "TRUE" : "FALSE");
	printf("ft_isalpha : %i\t", ft_isalpha(argv[1][0]));
    printf("isalpha : %i\n", isalpha(argv[1][0]));
	
	// ISDIGIT
    printf("%s\t|\t", ft_isdigit(argv[1][0]) == isdigit(argv[1][0]) ? "TRUE" : "FALSE");
	printf("ft_isdigit : %i\t", ft_isdigit(argv[1][0]));
    printf("isdigit : %i\n", isdigit(argv[1][0]));
	
	// ISALNUM
    printf("%s\t|\t", ft_isalnum(argv[1][0]) == isalnum(argv[1][0]) ? "TRUE" : "FALSE");
	printf("ft_isalnum : %i\t", ft_isalnum(argv[1][0]));
    printf("isalnum : %i\n", isalnum(argv[1][0]));
        
	// ISASCII
    printf("%s\t|\t", ft_isascii(argv[1][0]) == isascii(argv[1][0]) ? "TRUE" : "FALSE");
	printf("ft_isascii : %i\t", ft_isascii(argv[1][0]));
    printf("isascii : %i\n", isascii(argv[1][0]));
        
	// ISPRINT
    printf("%s\t|\t", ft_isprint(argv[1][0]) == isprint(argv[1][0]) ? "TRUE" : "FALSE");
    printf("ft_isprint : %i\t", ft_isprint(argv[1][0]));
    printf("isprint : %i\n", isprint(argv[1][0]));
    
	// TOUPPER
    printf("%s\t|\t", ft_toupper(argv[1][0]) == toupper(argv[1][0]) ? "TRUE" : "FALSE");
    printf("ft_toupper : %c\t", ft_toupper(argv[1][0]));
    printf("toupper : %c\n", toupper(argv[1][0]));

	// TOLOWER
    printf("%s\t|\t", ft_tolower(argv[1][0]) == tolower(argv[1][0]) ? "TRUE" : "FALSE");
    printf("ft_tolower : %c\t", ft_tolower(argv[1][0]));
	printf("tolower : %c\n", tolower(argv[1][0]));

	// STRCHR
    printf("%s\t|\t", ft_strchr(argv[1], argv[2][0]) == strchr(argv[1], argv[2][0]) ? "TRUE" : "FALSE");
    printf("ft_strchr : %s\t", ft_strchr(argv[1], argv[2][0]));
    printf("strchr : %s\n", strchr(argv[1], argv[2][0]));
	
	// STRRCHR
    printf("%s\t|\t", ft_strrchr(argv[1], argv[2][0]) == strrchr(argv[1], argv[2][0]) ? "TRUE" : "FALSE");
    printf("ft_strrchr : %s\t", ft_strrchr(argv[1], argv[2][0]));
    printf("strrchr : %s\n", strrchr(argv[1], argv[2][0]));

	// STRNCMP
    printf("%s\t|\t", ft_strncmp(argv[1], argv[2], ft_strlen(argv[1])) == strncmp(argv[1], argv[2], ft_strlen(argv[1])) ? "TRUE" : "FALSE");
    printf("ft_strncmp : %i\t", ft_strncmp(argv[1], argv[2], ft_strlen(argv[1])));
    printf("strncmp : %i\n", strncmp(argv[1], argv[2], ft_strlen(argv[1])));

	// STRLCPY
    char dest01[len];
    char dest02[len];
    printf("%s\t|\t", ft_strlcpy(dest01, txt, len) == strlcpy(dest02, txt, len) ? "TRUE" : "FALSE");
    printf("ft_strlcpy : %zu\t", ft_strlcpy(dest01, txt, len));
    printf("strlcpy : %zu\n", strlcpy(dest02, txt, len));

	// STRLCAT
    char dest11[len];
    char dest12[len];
    printf("%s\t|\t", ft_strlcat(dest11, txt, len - 2) == strlcat(dest12, txt, len - 2) ? "TRUE" : "FALSE");
    printf("ft_strlcat : %zu\t", ft_strlcat(dest11, txt, len - 2));
    printf("strlcat : %zu\n", strlcat(dest12, txt, len-2));

	// STRNSTR
    printf("%s\t|\t", ft_strnstr(argv[1], argv[2], ft_strlen(argv[1])) == strnstr(argv[1], argv[2], ft_strlen(argv[1])) ? "TRUE" : "FALSE");
    printf("ft_strnstr : %s\t", ft_strnstr(argv[1], argv[2], ft_strlen(argv[1])));
    printf("strnstr : %s\n", strnstr(argv[1], argv[2], ft_strlen(argv[1])));

    //MEMSET
    int i = 0;
    int array1[argc-1];
    int array2[argc-1];
    while (++i < argc)
    {
        array1[i-1]=ft_atoi(argv[i]);
        array2[i-1]=ft_atoi(argv[i]);
    }
    unsigned int size = sizeof(int)*(argc - 1);
    ft_memset(array1, argv[1][0], size);
    memset(array2, argv[1][0], size);
    int b = 1;
    i = -1;
    printf("memset (%c): ", argv[1][0]);
    while (++i < argc - 1)
    {
        printf("%c %c, ", array1[i], array2[i]);
        if (array1[i] != array2[i])
            b = 0;
    }
    printf("\t\t\t|\t%s\n", b == 1 ? "TRUE": "FALSE");

    //BZERO
    ft_bzero(array1, size +1);
    bzero(array2, size+1);
    b = 1;
    i = -1;
    printf("bzero : ");
    while (++i < argc - 1)
    {
        printf("%c %c, ", array1[i], array2[i]);
        if (array1[i] != array2[i])
            b = 0;
    }
    printf("\t\t\t|\t%s\n", b == 1 ? "TRUE": "FALSE");

    //MEMCPY
    char dest1[len];
    char dest2[len];
    char *res1 = ft_memcpy(dest1, txt, len);
    char *res2 = memcpy(dest2, txt, len);
    printf("ft_memcpy : %s\tmemcpy : %s\n", dest1, dest2);
	
    //MEMCCPY
    int ch = argv[2][0];
    char dest21[len];
    char dest22[len];
    char *res21 = ft_memccpy(dest21, txt, ch, len);
    char *res22 = memccpy(dest22, txt, ch, len);
    printf("ft_memccpy : %s\tmemccpy : %s\n", dest21, dest22);

    //MEMMOVE
    char dest31[len];
    char dest32[len];
    char *res31 = ft_memmove(dest31, txt, len);
    char *res32 = memmove(dest32, txt, len);
    printf("ft_memmove : %s\tmemmove : %s\n", dest31, dest32);

    //MEMCHR
    void *found1 = ft_memchr(txt, (int)argv[2][0], len);
    void *found2 = memchr(txt, (int)argv[2][0], len);
	//printf("ft_memchr : %c\tmemchr : %c\n", *((char*) found1), *((char *)found2));
    
    //MEMCMP
    printf("ft_memcmp : %i\t", ft_memcmp(argv[1], argv[2], len));
    printf("memcmp : %i\n", memcmp(argv[1], argv[2], len));
    /*
    //CALLOC
	int *p1 = (int *)ft_calloc(ft_atoi(argv[1]), sizeof(int));
	int *p2 = (int *)calloc(ft_atoi(argv[1]), sizeof(int));
	
    printf("ft_calloc : %s\tcalloc : %s\n", (char *)p1, (char *)p2);

	free(p1);
	free(p2);

	//STRDUP
	char *copy1 = ft_strdup(txt);
	char *copy2 = strdup(txt);
    	printf("ft_strdup : %s\tstrdup : %s\n", copy1, copy2);
	*/
    //************************** PARTIE 2 ******************************
    //SUBSTR
    char *sub1 = ft_substr(txt, argv[2][0], argv[3][0]);
    printf("ft_substr : %s\n", sub1);
    
    //STRJOIN
    char *join1 = ft_strjoin(txt, argv[2]);
    printf("ft_strjoin : %s\n", join1);
    
    //STRTRIM
    char *trim1 = ft_strtrim(txt, argv[2]);
    printf("ft_strtrim : %s\n", trim1);
    
    //SPLIT
    char **split1 = ft_split(txt, argv[2][0]);
    i = -1;
    while (split1[++i])
        printf("ft_split[%i] : %s\n", i, split1[i]);
    
    //ITOA
    printf("itoa : %i = %s\n", ft_atoi(txt), ft_itoa(ft_atoi(txt)));
    printf("itoa : 0 = %s\n", ft_itoa(0));
    printf("itoa : -2147483648LL = %s\n", ft_itoa(-2147483648LL));
    printf("itoa : -1 = %s\n", ft_itoa(-1));
    
    //MAPI
    //printf("ft_strmapi : %s", ft_strmapi(txt, &mapi));
    
    ft_putchar_fd('A', 1);
    ft_putchar_fd('\n', 1);
    ft_putstr_fd("Salut\n", 1);
    ft_putendl_fd("Salut", 1);
    ft_putnbr_fd(123, 1);
    
	return (0);
}
