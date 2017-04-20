
        SECTION .text

        global cmp_nasm
cmp_nasm:       	
	push ebp
	mov ebp,esp
	mov eax,[ebp+8] ; vai ser o d[i]
	mov ebx,[ebp+12]; vai ser o r

	cmp ebx,eax
	jle mover

	pop ebp
	ret 

	
mover:
	mov eax,ebx
	
	pop ebp
	ret
