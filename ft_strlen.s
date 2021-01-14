segment .text
	global	_ft_strlen				; size_t ft_strlen(const char *s)

_ft_strlen:
	mov		rax, 0					; i = 0
	jmp		compare

compare:
	cmp		BYTE [rdi + rax], 0		; s[i] == 0
	je		exit
	jmp		increment

increment:
	inc		rax						; i++
	jmp		compare

exit:
	ret								; return (i)
