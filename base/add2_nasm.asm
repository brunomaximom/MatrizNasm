        SECTION .text

        global add2_nasm
add2_nasm:       	
	push ebp
	mov ebp,esp
	mov ebx,[ebp+8] ;    ; ebx = par
	add ebx,[ebp+12];    ; ebx + par2
	mov eax,ebx
	

	pop ebp
	ret 
