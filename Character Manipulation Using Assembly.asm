.MODEL SMALL
.STACK 100H
.DATA
    C1 DB ?
    C2 DB ?
    CR EQU 0DH
    LF EQU 0AH
.CODE 

PN PROC
    MOV DL,CR
    MOV AH,2H
    INT 21H
    MOV DL,LF
    INT 21H 
    RET
PN ENDP 

MAIN PROC
    MOV AX,@DATA
    MOV DS,AX 
    
    MOV BL,'5'	    
    MOV CX,4 
TOP:
    MOV AH,2H
    MOV DL,BL
    INT 21H
    INC BL
    
    INT 21H
    CALL PN
    LOOP TOP
	MOV AL,'0'
	 
    ADD AL,7 
    MOV AH,2H
    MOV DL,AL 
    
    INT 21H
    CALL PN
    MOV C1,'A'
    ADD C1,3
    MOV C2,'9' 
    
    SUB C2,5	    
    MOV AH,2H
    MOV DL,C1
    INT 21H
    INT 21H
    CALL PN 
    
    MOV AH,2H
    MOV DL,C2
    INT 21H
    CALL PN
    MOV DL,'N' 
    
    INT 21H
    OR DL,32   
    MOV AH,2H
    
    INT 21H 
    AND DL,0DFH
    INT 21H 
    MOV AH,4CH
    INT 21H
MAIN ENDP
END MAIN
