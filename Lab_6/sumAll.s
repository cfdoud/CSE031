.data
n:  .word 0
str: .asciiz "Please enter a number\n"
str1:	.asciiz "Sum of even numbers\n"
str2:	.asciiz "\nSum of odd numbers\n"

.text
main:
	lw $t0, n #load n 
	li $v0, 1 #gives a temporary value
LOOP:
	beq $v0 ,$0 ,END
	li $v0, 4
	la $a0, str
	syscall #prints string
	li $v0, 5 #read integer
	syscall #does the thing 
	add $s0, $v0, $0
	rem $t1, $s0, 2 #checks id remainders is 0 or 1
	beq $t1, $0, EVEN_SUMS #if remainder equals to 1 then it is even sums and jumps there
	bne $t1, $0, ODD_SUMS #if remainder equals to 2 then it is odd and jumps there
	j LOOP

EVEN_SUMS:
	add $t5, $t5, $s0
	j LOOP
ODD_SUMS:
	add $t6,$t6,$s0
	j LOOP

END:	
	li $v0, 4
	la $a0, str1	
	syscall	#prints the string 1
	li $v0, 1
	la $a0, ($t5)
	syscall #prints the integer that is stored in even 
	
	li $v0, 4
	la $a0, str2	
	syscall	# prints the string 2
	li $v0, 1
	la $a0, ($t6)
	syscall  #prints the integer that is stored in odd
	
	
	        
	li   $v0, 10           # exit
        syscall