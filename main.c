/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelicia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 17:39:34 by cdelicia          #+#    #+#             */
/*   Updated: 2019/10/04 23:32:50 by cdelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int	main(void)
{
	char str[84] = "Hello, world! Hello, world! Hello, world! Hello, world! Hello, world! Hello, world!";
	int	ret;
	char dst_big[84];
	char dst_mid[14];
	char dst_sml[1];
	char buf[100];
	char buf2[100];
	char buf3[100];
	char buf4[100];
	int my_ret;
	int fd;
	/***************************************************/printf("\n\n");
	printf("[        test ft_strlen        ...\n");
	ret = 0;
	my_ret = 0;
	ret = strlen("Hello, world!");
	my_ret = ft_strlen("Hello, world!");
	printf("   len=%d\n", ret);
	printf("my_len=%d\n", my_ret);
	ret = 0;
	my_ret = 0;
	ret = strlen("");
	my_ret = ft_strlen("");
	printf("   len=%d\n", ret);
	printf("my_len=%d\n", my_ret);
	ret = 0;
	my_ret = 0;
	ret = strlen(str);
	my_ret = ft_strlen(str);
	printf("   len=%d\n", ret);
	printf("my_len=%d\n", my_ret);
	printf("...        end ft_strlen        ]\n");
	/***************************************************/printf("\n\n");
	printf("[        test ft_strcpy        ...\n");
	ft_strcpy(dst_sml, "");
	printf("empty: '%s'\n", dst_sml);
	ft_strcpy(dst_mid, "Hello, world!");
	printf("middle: '%s'\n", dst_mid);
	ft_strcpy(dst_big, str);
	printf("big: '%s'\n", dst_big);
	printf("...        end ft_strcpy        ]\n");
	/***************************************************/printf("\n\n");
	printf("[        test ft_strcmp        ...\n");
	printf("equal:  %d and %d\n", ft_strcmp("ab-c", "ab-c"), strcmp("ab-c", "ab-c"));
	printf("lower:  %d and %d\n", ft_strcmp("ab-c", "ab-d"), strcmp("ab-c", "ab-d"));
	printf("bigger: %d and %d\n", ft_strcmp("ab-d", "ab-c"), strcmp("ab-d", "ab-c"));
	printf("empty:  %d and %d\n", ft_strcmp("", ""), strcmp("", ""));
	printf("...        end ft_strcmp        ]\n");
	/***************************************************/printf("\n\n");
	printf("[        test ft_strdup        ...\n");
	char *ptr_sml = ft_strdup("");
	printf("empty: '%s'\n", ptr_sml);
	char *ptr_mid = ft_strdup("Hello, world!");
	printf("middle: '%s'\n", ptr_mid);
	char *ptr_big = ft_strdup(str);
	printf("big: '%s'\n", ptr_big);
	printf("...        end ft_strdup        ]\n");
	/***************************************************/printf("\n\n");
	printf("[        test ft_write        ...\n");
	fd = open("test", O_CREAT | O_WRONLY | O_TRUNC, S_IRWXU);
	printf(" - my: %d\n", (int)ft_write(1, "Hello", 5));
	printf(" - st: %d\n", (int)write(1, "Hello", 5));
	printf("-> NULL ptr ->\n");
	printf("my: %d + my errno: %d\n", (int)ft_write(1, NULL, 5), errno);
	printf("st: %d + st errno: %d\n", (int)write(1, NULL, 5), errno);
	printf("my: %d\n", (int)ft_write(fd, "Hello, world!", 13));
	printf("st: %d\n", (int)write(fd, "Hello, world!", 13));
	printf("-> bad fd ->\n");
	printf("my: %d + my errno: %d\n", (int)ft_write(1111, "Hello", 5), errno);
	printf("st: %d + st errno: %d\n", (int)write(1111, "Hello", 5), errno);
	printf("...        end ft_write        ]\n");
	/***************************************************/printf("\n\n");
	printf("[        test ft_read        ...\n");
	fd = open("test", O_RDONLY);
	printf("-> from fd ->\n");
	printf("my: %d\n", (int)ft_read(fd, buf, 6));
	printf("my: '%s'\n", buf);
	printf("st: %d\n", (int)read(fd, buf2, 6));
	printf("st: '%s'\n", buf2);
	printf("-> my stdin (10) -> ");
	printf("my: %d\n", (int)ft_read(0, buf3, 10));
	printf("my: '%s'\n", buf3);
	printf("-> st stdin (10) -> ");
	printf("st: %d\n", (int)read(0, buf4, 10));
	printf("st: '%s'\n", buf4);
	printf("-> bad fd ->\n");
	printf("my: %d + my errno: %d\n", (int)ft_read(1111, buf, 5), errno);
	printf("st: %d + st errno: %d\n", (int)read(1111, buf, 5), errno);
	printf("...        end ft_read        ]\n");
	close(fd);
	return (0);
}
