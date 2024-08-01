/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:23:54 by pweber            #+#    #+#             */
/*   Updated: 2024/07/28 17:25:13 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}
/*


//===========================================================
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str > 0)
	{
		i++;
		str++;
	}
	return (i);
}
//===========================================================

int	main(int argc, char *argv[])
{
	char	*src;
	char	*dest_0;
	char	*dest_1;
	int	src_len;
	int	dest_len;

	(void) argv;
	if(argc != 3)
	{
		printf("Enter two strings (dest >= src)");
		return (-1);
	}
	dest_0 = argv[1];	
	dest_1 = argv[1];
	src = argv[2];
	dest_len = ft_strlen(dest_0);
	src_len = ft_strlen(src);
	
	printf("\ndest string = %s, length %d\n", dest_0, dest_len);
	printf("src string = %s, length %d\n", src, src_len);
	if (dest_len < src_len)
	{
		printf("\nERROR: dest can't be shorter than src. Try again\n\n");
		return (-1);
	}
	
	printf("=======================\n");
	printf("using strcpy: dest = %s\n\n", strcpy(dest_0, src));
	printf("=======================\n");	
	ft_strcpy(dest_1, src);
	printf("using ft_strcpy: dest = %s\n\n", dest_1);

	
	return (0);
}
*/
/*======  STRCPY MAN PAGE =====================================================

SYNOPSIS
       #include <string.h>

       char *strcpy(char *dest, const char *src);

       char *strncpy(char *dest, const char *src, size_t n);

DESCRIPTION
       The  strcpy() function copies the string pointed to by src, including the
       terminating null byte ('\0'), to the buffer  pointed  to  by  dest.   The
       strings  may  not  overlap, and the destination string dest must be large
       enough to receive the copy.  Beware of buffer overruns!  (See BUGS.)

       The strncpy() function is similar, except that at most n bytes of src are
       copied.   Warning:  If  there  is no null byte among the first n bytes of
       src, the string placed in dest will not be null-terminated.

       If the length of src is less than n,  strncpy()  writes  additional  null
       bytes to dest to ensure that a total of n bytes are written.

       A simple implementation of strncpy() might be:

           char *
           strncpy(char *dest, const char *src, size_t n)
           {
               size_t i;

               for (i = 0; i < n && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < n; i++)
                   dest[i] = '\0';

               return dest;
           }

RETURN VALUE
       The  strcpy() and strncpy() functions return a pointer to the destination
       string dest.

ISSUES:
if src < dest: fill up with null
if size (src) > size (dest) info gets lost. Should I terminate in null?
if src doesn't end in null byte: How do I know where it ends?



BUGS
       If  the  destination  string of a strcpy() is not large enough, then any‐
       thing might happen.  Overflowing fixed-length string  buffers  is  a  fa‐
       vorite cracker technique for taking complete control of the machine.  Any
       time a program reads or copies data into  a  buffer,  the  program  first
       needs to check that there's enough space.  This may be unnecessary if you
       can show that overflow is impossible, but be careful:  programs  can  get
       changed over time, in ways that may make the impossible possible.

    
*/
