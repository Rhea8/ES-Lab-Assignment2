	AREA LARGE, CODE, READONLY
	ENTRY
START
		MOV R0,#0X40000000
		MOV R0,#04
		MOV R1,#0X40000004
		LDR R1, =value
		LDR R2,[R1]



		MOV R0,#04
		LDR R1, =value
		LDR R2,[R1]

LOOP2 
		
		ADD R1,R1,#4
		LDR R3,[R1]
		CMP R2,R3	
		BHI RESULT
		MOV R2,R3		
RESULT
		SUB R0,#01
		CMP R0,#00
		BNE LOOP2
		MOV R6, R2




		
		MOV R0,#04
		LDR R1, =value
		LDR R2,[R1]
LOOP3 		
		ADD R1,R1,#4
		LDR R3,[R1]
		CMP R2,R3	
		BLS RESULT1
		MOV R2,R3

RESULT1
		SUB R0,#01
		CMP R0,#00
		BNE LOOP3
		MOV R7, R2

		
value DCD &09,&02,&08,&01,&05

		END