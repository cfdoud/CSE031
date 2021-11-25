		.data
x:		.word 5
y:		.word 10
z:		.word 15
p:		.word 0
q:		.word 0
text:  .asciiz "Enter a number: "

		.text
MAIN:	
		la $t0, x
		lw $s0, 0($t0)		# s0 = x
		la $t0, y
		lw $s1, 0($t0)		# s1 = y
		la $t0, z		# s2 = z
		lw $s2, 0($t0)
		
		# Prepare to call sum(x)
		add $a0, $zero, $s0		# Set a0 as input argument for SUM
		add $a1, $zero, $s1
		add $a2, $zero, $s2
		jal FOO
		
		
		
		add $t0, $s1, $s0
		add $t0, $t0, $s2
		add $s1, $t0, $v0
		addi $a0, $s1, 0 
		li $v0, 1		 
		syscall	
		j END

		
FOO: 	
		addi $sp, $sp,-24
		sw $ra, 20($sp)
		sw $a0, 16($sp)
		sw $a1, 12($sp)
		sw $a2, 8($sp)
		sw $s0, 4($sp)
		sw $s1, 0($sp)
		 
		la $t0, p
		lw $s0, 0($t0)	
		la $t0, q
		lw $s1, 0($t0)	
		
	
		add $t0, $a0, $a1
		add $t1, $a1, $a2
		add $t2, $a2, $a0
		sub $t3, $a0, $a2
		sub $t4, $a1, $a0
		mul $t5, $a1, 2
			# Update a0 as new argument for SUB
		add $a0, $0, $t0
		add $a1, $0, $t1
		add $a2, $0, $t2
		jal BAR	
		add $s0, $0, $v0
		
		#first bar set
		add $a0, $0, $t3
		add $a1, $0, $t4
		add $a2, $0, $t5
		jal BAR
		add $s1, $0, $v0
		add $v0, $s0, $s1
		
		
		lw $ra, 20($sp)
		lw $a0, 16($sp)
		lw $a1, 12($sp)
		lw $a2, 8($sp)
		lw $s0, 4($sp)
		lw $s1, 0($sp)
		addi $sp, $sp, 24
		jr $ra		
		
BAR:	
		
		sub $t0, $a2, $a0
		sllv $v0, $t0, $a1
		jr $ra

		
END:
