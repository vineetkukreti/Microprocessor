LXI H 2500  |2000
MOV C,M     |2003
INX H LOOP  |2004
MOV A,M     |2005
DCR C       |2006
INX H       |2007
CMP H       |2008
JNC COOL    |2009
MOV A,M     |200C
DCR C COOL  |200D
JNZ LOOP    |200E
STA 3000    |2011
HLT         |2014

