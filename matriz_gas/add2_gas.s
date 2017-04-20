	.code32   
	.text

        .global add2_gas
_start:
add2_gas:              
        pushl %ebp
        movl %esp,%ebp
        movl 8(%ebp),%ebx #    ; ebx = par
        addl 12(%ebp),%ebx #    ; ebx + par2
        movl %ebx,%eax


        popl %ebp
        ret
