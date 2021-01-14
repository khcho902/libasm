segment .text
	global _ft_strcmp		; int ft_strcmp(const char *s1, const char *s2)

_ft_strcmp:
	jmp		compare

compare:
	mov		al, BYTE [rdi]
	mov		bl, BYTE [rsi]
	cmp		al, 0
	je		exit
	cmp		bl, 0
	je		exit
	cmp		al, bl
	jne		exit
	jmp		increment

increment:
	inc		rdi
	inc		rsi
	jmp		compare

exit:
	movzx	rax, al
	movzx	rbx, bl
	sub		rax, rbx
	ret
