# Libft42

Objetivo deste projeto é codificar uma biblioteca C reagrupando funções usuais que poderemos usar em todos os outros projetos em 42

Objective of this project is to code a C library regrouping usual functions that we will be able to use in all other projects in 42<br/>

A maior parte está na biblioteca C (veja man).  Outros não estão na biblioteca C, mas será muito útil ainda mais.  Estas funções estão descritas no assunto.

The most part is in C library (see man). Others are'nt in the C library but it will be so usefull further. This functions are described in subject.<br/>

## Badge

<img src="libftm.png">

## SKills

 - Imperative programming
 - Rigor
 - Algorithms & AI

 ## My grade

 <img src="score_libft.png"> 

🚧 project:<br/>
```
Libft42 $ make
```
:shower: Clean Obj files:<br/>
```
Libft42 $ make clean
```
:shower: :shower: Clean All (obj files + binary):<br/>
```
Libft42 $ make fclean
```
:shower: :shower: 🚧 Clean All + build:<br/>
```
Libft42 $ make re
```

<br/>See Makefile<br/>

<table border="1" width="300"> 
 <tr>
  <td  align="center"colspan="4">C Library ctype.h</td>
 </tr>
 
 <tr>
  <td align="center">Libft </td>
  <td align="center">Description </td>
 </tr>

 <tr>
  <td>ft_isalnum</td>
  <td>Checks if the character passed is alphanumeric.</td>
 </tr>
 
 <tr>
  <td>ft_isalpha</td>
  <td>Checks if the character passed is alphabetic.</td>
 </tr>
 
 <tr>
  <td>ft_isascii</td>
  <td>Checks if the character passed is ASCII.</td>
 </tr>
 
 <tr>
  <td>ft_digit</td>
  <td>Checks if the character passed is decimal digit.</td>
 </tr>
 
 <tr>
  <td>ft_isprint</td>
  <td>Checks if the character passed is printable, including space.</td>
 </tr>
 
 <tr>
  <td>ft_tolower</td>
  <td>Converts uppercase letters to lowercase.</td>
 </tr>
 
  <tr>
  <td>ft_toupper</td>
  <td>Converts lowercase letters to uppercase.</td>
 </tr>
 
 <tr>
  <td  align="center"colspan="4"> C Library Sting.h</td>
 </tr>
 
  <tr>
  <td>ft_bzero</td>
  <td>Resets the dynamic memory region replacing whatever is there by null to clear it of junk values.</td>
 </tr>
 
 <tr>
  <td>ft_memchr</td>
  <td>Looks for the first occurrence of the character c (an unsigned character) in the first n bytes of the pointed string, by the str argument.</td>
 </tr>
 
 <tr>
  <td>ft_memcmp</td>
  <td>Compares the first n bytes of memory area str1 and memory area str2.</td>
 </tr>
 
 <tr>
  <td>ft_memcpy</td>
  <td>assign each character of src pointer to dest pointer as counter is less than the size, and returns the dest pointer.</td>
 </tr>
 
  <tr>
  <td>ft_memmove</td>
  <td>Copy bytes of length from buffer pointed to by src to buffer pointed to by std. Copying overlapping regions is handled safely.</td>
 </tr>
 
 <tr>
  <td>ft_memset</td>
  <td>Fills length bytes starting at dst with the value C.</td>
 </tr>
 
 <tr>
  <td>ft_strchr</td>
  <td>finds the first occurrence of C (converted to a char) in the string pointed to by S.</td>
 </tr>
 
  <tr>
  <td>ft_strlcat</td>
  <td>appends the NULL terminated string src to the end of dst.</td>
 </tr>
 
 <tr>
  <td>ft_strlcpy</td>
  <td>Copy up to length 1 character from NULL terminated string src to dst, ending in NULL the result.</td>
 </tr>
 
  <tr>
  <td>ft_strlen</td>
  <td>Counts how many characters there are while the parameter passed is not null.</td>
 </tr>
 
 <tr>
  <td>ft_strncmp</td>
  <td>Compares at most the first n bytes of str1 and str2.</td>
 </tr>
 
 <tr>
  <td>ft_strnstr</td>
  <td>Finds the first occurrence of the null term string nated s2 in string s1, where no more than n characters are searched.</td>
 </tr>
 
 <tr>
  <td>ft_strrchr</td>
  <td>look for the last occurrence of the character c (an unsigned character) in the string pointed to by the str argument</td>
 </tr>
 
 <tr>
  <td  align="center"colspan="4">C Library Stdlib.h</td>
 </tr>
 
 <tr>
  <td>ft_atoi</td>
  <td>converts the initial portion of the string pointed to by nptr to int. Atoi() does not detect errors</td>
 </tr>
 
 <tr>
  <td>ft_calloc</td>
  <td>allocates memory for an array of nmemb elements of size each and returns a pointer to the allocated memory.</td>
 </tr>
 
 <tr>
  <td  align="center"colspan="4">Non-stantard C Library</td>
 </tr>
 
 <tr>
  <td>ft_itoa</td>
  <td>Converts the int to a string (type char *).</td>
 </tr>
 
 <tr>
  <td>ft_putchar_fd</td>
  <td>Displays the 'c' character for the given file descriptor.</td>
 </tr>
 
 <tr>
  <td>ft_putendl_fd</td>
  <td>Displays the string 's' for the given file descriptor, followed by a newline.</td>
 </tr>
 
 <tr>
  <td>ft_putnbr_fd</td>
  <td>Display the integer 'n' for the given file descriptor.</td>
 </tr>
 
 <tr>
  <td>ft_putstr_fd</td>
  <td>Display the string 's' for the given descriptor file.</td>
 </tr>
 
 <tr>
  <td>ft_strdup</td>
  <td>Returns a pointer to a new string that is a duplicate of string s.</td>
 </tr>
 
 <tr>
  <td>ft_strjoin</td>
  <td>returns a newstring, which is the result of concatenating 's1' and 's2'.</td>
 </tr>
 
 <tr>
  <td>ft_strmapi</td>
  <td>Apply the 'f' function to each character of the string 's' to create a new string.</td>
 </tr>
 
 <tr>
  <td>ft_strtrim</td>
  <td>returns a copy of 's1' with the characters specified in 'set' removed from beginning and end of string.</td>
 </tr>
 
 <tr>
  <td>ft_substr</td>
  <td>Returns a substring of the string 's'. The substring starts at index 'start' and is of maximum length 'len'.</td>
 </tr>
 
 <tr>
  <td  align="center"colspan="4"> Chained lists manipulation</td>
 </tr>
 
 <tr>
  <td>ft_lstadd_back</td>
  <td>Adds the element at the end of the list.</td>
 </tr>
 
  <tr>
  <td>ft_lstadd_front</td>
  <td>Adds the element at the beginning of the list.</td>
 </tr>
 
  <tr>
  <td>ft_lstclear</td>
  <td>Deletes and frees the given element and every successor of that element, using a given function and free.</td>
 </tr>
 
  <tr>
  <td>ft_lstdelone</td>
  <td>Takes as a parameter an element and frees the memory of the element’s content using a function given as a parameter and free the element.</td>
 </tr>
 
  <tr>
  <td>ft_lstiter</td>
  <td>Iterates the list and applies a function to the content of each element.</td>
 </tr>
 
  <tr>
  <td>ft_lstlast</td>
  <td>Returns the last element of the list.</td>
 </tr>
 
  <tr>
  <td>ft_lstmap</td>
  <td>Iterates the list and applies a function to the content of each element. Creates a new list resulting of the successive applications of the function. A 'del' function is used to delete the content of an element if needed.</td>
 </tr>
 
  <tr>
  <td>ft_lstnew</td>
  <td>Returns a new element.</td>
 </tr>
 
  <tr>
  <td>ft_lstsize</td>
  <td>Counts the number of elements in a list.</td>
 </tr>

 </table>

### Made with: <br/>
### Jorge Alves
<div style="display: inline_block">
 <a href="https://github.com/jorgeedualves/jorgeedualves" target="_blank"><img align="center" alt="Github_Jorge" height="30" width="30" src="https://cdn-icons-png.flaticon.com/128/1051/1051275.png" target="_blank"></a>
 <a href="https://www.linkedin.com/in/jorge-eduardo-alves-094b4331/" target="_blank"><img align="center"src="https://img.shields.io/badge/-LinkedIn-%230077B5?style=for-the-badge&logo=linkedin&logoColor=white" target="_blank"></a> 
</div>

### Alfredo Neto
<div style="display: inline_block">
 <a href="https://github.com/Alfredo-Neto" target="_blank"><img align="center" alt="Github_Jorge" height="30" width="30" src="https://cdn-icons-png.flaticon.com/128/1051/1051275.png" target="_blank"></a>
 <a href="https://www.linkedin.com/in/alfredo-neto-a2515814b/" target="_blank"><img align="center"src="https://img.shields.io/badge/-LinkedIn-%230077B5?style=for-the-badge&logo=linkedin&logoColor=white" target="_blank"></a> 
</div>

### Alexandre Zamarion
<div style="display: inline_block">
 <a href="https://github.com/alezamarion" target="_blank"><img align="center" alt="Github_Jorge" height="30" width="30" src="https://cdn-icons-png.flaticon.com/128/1051/1051275.png" target="_blank"></a>
 <a href="https://www.linkedin.com/in/alexandre-zamarion-cepeda-a3766323a/" target="_blank"><img align="center"src="https://img.shields.io/badge/-LinkedIn-%230077B5?style=for-the-badge&logo=linkedin&logoColor=white" target="_blank"></a> 
</div>
