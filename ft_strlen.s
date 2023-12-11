global _ft_strlen

section .text
_ft_strlen:
	xor	rax, rax
	test rdi, rdi
	jz return
again:
	cmp byte[rdi + rax], 0
	je	return
	add rax, 1
	jmp short again
return:
	ret
