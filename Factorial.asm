	AREA FACTORIAL, CODE, READONLY
	ENTRY
START
	MOV R5, #0X40000000
	LDR R0,[R5]
	MOV R1,R0
	CMP R0,#02
	MOV R2,#01
	BLT RESULT
REPEAT
	SUBS R1,R1,#01
	CMP R1,#01
	BEQ STOP
	MUL R2,R0,R1
	MOV R0,R2
	B REPEAT
RESULT MOV R0,R2
STOP B STOP
	END
	  