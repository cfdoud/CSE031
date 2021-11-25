
.data
n:  .word 25
str1:	.asciiz "Less than\n"
str2:	.asciiz "Less than or equal to\n"
str3:	.asciiz "Greater than\n"
str4:	.asciiz "Greater than of equal to\n"
.text

main:           
	li $v0, 5 #read integer
	syscall #does the thing 
	add $t1, $v0, $0 #setting value and adding 0
	lw $t0, n #loading 
	slt $t2, $t1, $t0 #if less than would equal user input is less than n then t1 = 1
	bne $t2,$0, LESS
	beq $t1, $t0, EQUAL
	beq $t2, $0, GREATER
   
           j END
LESS: 
	li, $v0, 4
        la $a0,str1
        syscall
        j END
EQUAL: 
	li $v0, 4
	la $a0, str2
	syscall
	j END
GREATER: 	
	li $v0, 4
	la $a0, str3
	syscall
	j END
LESS_EQUAL:
	li $v0, 4
	la $a0, str2
	syscall
	j END

GREATER_EQUAL:
	li $v0, 4
	la $a0, str4
	syscall
	j END

END:           
	li   $v0, 10           # exit
               syscall
