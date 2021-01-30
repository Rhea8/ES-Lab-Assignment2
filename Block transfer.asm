	AREA program,CODE,READONLY
	ENTRY
Start
      LDR R0,=0x40000000    
      LDR R1,=0x50001000   
      MOV R2,#0x0A         
loop LDR R3,[R0],#4       
      STR R3,[R0],#4       
      SUB R2,R2,#1
      CMP R2,#00
      BNE loop
      END