global _ft_strcpy

section .text
_ft_strcpy:
	xor rax, rax
again:
	cmp byte[rsi + rax], 0
	jz return
	mov bl, byte[rsi + rax]
	mov byte[rdi + rax], bl
	add rax, 1
	jmp short again
return:
	mov byte[rdi + rax], 0
	mov rax, rdi
	ret
