global _ft_strcmp

section .text
_ft_strcmp:
	xor rax, rax
	xor rdx, rdx
again:
	mov al, byte[rdi]
	mov dl, byte[rsi]
	sub rax, rdx
	jnz choise
	cmp dl, 0
	jz choise
	add rdi, 1
	add rsi, 1
	jmp short again
choise:
	cmp rax, 0
	jl lower
	jg greater
	ret
lower:
	mov rax, -1
	ret
greater:
	mov rax, 1
	ret
