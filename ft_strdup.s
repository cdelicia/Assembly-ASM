global _ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_strcpy

section .text
_ft_strdup:
	cmp rdi, 0
	jz return
	push rdi
	call _ft_strlen
	inc rax
	mov rdi, rax
	call _malloc
	cmp rax, 0
	jz return
	pop rdi
	mov rsi, rdi
	mov rdi, rax
	call _ft_strcpy
	ret
return:
	mov rax, 0
	ret
