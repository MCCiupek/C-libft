/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek </var/mail/mciupek>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:41:15 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/17 22:21:50 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int	main(int argc, char **argv)
{
	// ATOI
	printf("ft_atoi : %i\t", ft_atoi(argv[1]));
	printf("atoi : %i\t", atoi(argv[1]));
	printf("\t\t\t|\t%s\n", ft_atoi(argv[1]) == atoi(argv[1]) ? "TRUE" : "FALSE");
	
	// STRLEN
	printf("ft_strlen : %i\t", ft_strlen(argv[1]));
	printf("strlen : %lu\t", strlen(argv[1]));
	printf("\t\t\t|\t%s\n", ft_strlen(argv[1]) == strlen(argv[1]) ? "TRUE" : "FALSE");
	
	// ISALPHA
	printf("ft_isalpha : %i\t", ft_isalpha(argv[1][0]));
        printf("isalpha : %i\t", isalpha(argv[1][0]));
	printf("\t\t\t|\t%s\n", ft_isalpha(argv[1][0]) == isalpha(argv[1][0]) ? "TRUE" : "FALSE");
	
	// ISDIGIT
	printf("ft_isdigit : %i\t", ft_isdigit(argv[1][0]));
        printf("isdigit : %i\t", isdigit(argv[1][0]));
	printf("\t\t\t|\t%s\n", ft_isdigit(argv[1][0]) == isdigit(argv[1][0]) ? "TRUE" : "FALSE");
	
	// ISALNUM
	printf("ft_isalnum : %i\t", ft_isalnum(argv[1][0]));
        printf("isalnum : %i\t", isalnum(argv[1][0]));
        printf("\t\t\t|\t%s\n", ft_isalnum(argv[1][0]) == isalnum(argv[1][0]) ? "TRUE" : "FALSE");

	// ISASCII
	printf("ft_isascii : %i\t", ft_isascii(argv[1][0]));
        printf("isascii : %i\t", isascii(argv[1][0]));
        printf("\t\t\t|\t%s\n", ft_isascii(argv[1][0]) == isascii(argv[1][0]) ? "TRUE" : "FALSE");

	// ISPRINT
        printf("ft_isprint : %i\t", ft_isprint(argv[1][0]));
        printf("isprint : %i\t", isprint(argv[1][0]));
        printf("\t\t\t|\t%s\n", ft_isprint(argv[1][0]) == isprint(argv[1][0]) ? "TRUE" : "FALSE");
	
	// TOUPPER
        printf("ft_toupper : %c\t", ft_toupper(argv[1][0]));
        printf("toupper : %c\t", toupper(argv[1][0]));
        printf("\t\t\t|\t%s\n", ft_toupper(argv[1][0]) == toupper(argv[1][0]) ? "TRUE" : "FALSE");

	// TOLOWER
        printf("ft_tolower : %c\t", ft_tolower(argv[1][0]));
	printf("tolower : %c\t", tolower(argv[1][0]));
        printf("\t\t\t|\t%s\n", ft_tolower(argv[1][0]) == tolower(argv[1][0]) ? "TRUE" : "FALSE");

	// STRCHR
        printf("ft_strchr : %s\t", ft_strchr(argv[1], argv[2][0]));
        printf("strchr : %s\t", strchr(argv[1], argv[2][0]));
        printf("\t\t\t|\t%s\n", ft_strchr(argv[1], argv[2][0]) == strchr(argv[1], argv[2][0]) ? "TRUE" : "FALSE");
	
	// STRRCHR
        printf("ft_strrchr : %s\t", ft_strrchr(argv[1], argv[2][0]));
        printf("strrchr : %s\t", strrchr(argv[1], argv[2][0]));
        printf("\t\t\t|\t%s\n", ft_strrchr(argv[1], argv[2][0]) == strrchr(argv[1], argv[2][0]) ? "TRUE" : "FALSE");

	// STRNCMP
        printf("ft_strncmp : %i\t", ft_strncmp(argv[1], argv[2], ft_strlen(argv[1])));
        printf("strncmp : %i\t", strncmp(argv[1], argv[2], ft_strlen(argv[1])));
        printf("\t\t\t|\t%s\n", ft_strncmp(argv[1], argv[2], ft_strlen(argv[1])) == strncmp(argv[1], argv[2], ft_strlen(argv[1])) ? "TRUE" : "FALSE");

/*	// STRLCPY
        printf("ft_strlcpy : %u\t", ft_strlcpy(argv[1], argv[2], ft_strlen(argv[1])));
        printf("strlcpy : %zu\t", strlcpy(argv[1], argv[2], ft_strlen(argv[1])));
        printf("\t\t\t|\t%s\n", ft_strlcpy(argv[1], argv[2], ft_strlen(argv[1])) == strlcpy(argv[1], argv[2], ft_strlen(argv[1])) ? "TRUE" : "FALSE");

	// STRLCAT
        printf("ft_strlcat : %u\t", ft_strlcat(argv[1], argv[2], 1 + ft_strlen(argv[1])));
        printf("strlcat : %zu\t", strlcat(argv[1], argv[2], 1 + ft_strlen(argv[1])));
        printf("\t\t\t|\t%s\n", ft_strlcat(argv[1], argv[2], 1 + ft_strlen(argv[1])) == strlcat(argv[1], argv[2], 1 + ft_strlen(argv[1])) ? "TRUE" : "FALSE");

*/		// STRNSTR
        printf("ft_strnstr : %s\t", ft_strnstr(argv[1], argv[2], ft_strlen(argv[1])));
        printf("strnstr : %s\t", strnstr(argv[1], argv[2], ft_strlen(argv[1])));
        printf("\t\t\t|\t%s\n", ft_strnstr(argv[1], argv[2], ft_strlen(argv[1])) == strnstr(argv[1], argv[2], ft_strlen(argv[1])) ? "TRUE" : "FALSE");

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
			printf("%i %i, ", array1[i], array2[i]);
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
		char *txt = argv[1];
		unsigned int len = strlen(txt);
		char dest1[len];
		char dest2[len];
		printf("%i\n", len);	
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

	return (0);
}
