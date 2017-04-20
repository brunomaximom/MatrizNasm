
        SECTION .text

        global add_nasm
add_nasm:       	
	push ebp
	mov ebp,esp
	mov ebx,[ebp+8] ;    ; ebx = par
	add ebx,[ebp+12];    ; ebx + par2
	mov eax,5            ;eax = 5
	mul ebx              ; *5
	
	

	pop ebp
	ret 
