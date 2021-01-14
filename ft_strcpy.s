segment .text
	global	_ft_strcpy		; char	*ft_strcpy(char *dst, const char *src)
	extern	_ft_strlen

_ft_strcpy:					; rdi : dst,  rsi : src
	push	rdi				; push dst in stack
	mov		rdi, rsi		; rdi : src,  rsi : src
	call	_ft_strlen		; rax : ft_strlen(src)
	mov		rcx, rax		; rcx : rax
	pop		rdi				; rdi : dst,  rsi : src
	mov		rax, rdi		; rax : dst
	rep		movsb			; copy rsi to rdi and rcx--    until rcx > 0    
	mov		BYTE [rdi], 0	; terminating '\0' character of dst.
	ret						; return (dst)
