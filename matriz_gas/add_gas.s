	.code32
        .text

        .global add_gas
_start:
add_gas:               
        pushl %ebp
        movl %esp,%ebp
        movl 8(%ebp),%ebx 	#    ebx = par
        addl 12(%ebp),%ebx 	#   ebx + par2
        movl $5,%eax         	#eax = 5
        mull %ebx            	# *5



        popl %ebp
        ret
