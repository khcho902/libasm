segment .text
	global	_ft_strdup	;	char	*ft_strdup(const char *s1)
	extern	_ft_strlen
	extern	_ft_strcpy
	extern	_malloc

_ft_strdup:					;	rdi : s1
	call	_ft_strlen		;	rax : ft_strlen(s1)
	add		rax, 1			;	rax++
	push	rdi				;	push rdi in stack
	mov		rdi, rax		;	rdi	: ft_strlen(s1)
	call	_malloc			;	rax : address of allocated memory.
	pop		rsi				;	rsi : s1
	mov		rdi, rax		;	rdi : address of allocated memory
	call	_ft_strcpy		;	copy
	ret						;	return rax(address of allocated memory)
