	.code32	
	.text

        .global cmp_gas
_start:
cmp_gas:               
        pushl %ebp
        movl %esp,%ebp
        movl 8(%ebp),%eax     # vai ser o g[i]
        movl 12(%ebp),%ebx    # vai ser o r

        cmpl %eax,%ebx
        jle mover

        popl %ebp
        ret


mover: 
        movl %ebx,%eax

        popl %ebp
        ret
