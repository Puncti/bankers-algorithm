# bankers-algorithm
Process	| Allocation |    Max	  | Available
	| A   B   C  | A   B   C  | A   B   C
p0  	| 0   1   0  | 7   5   3  | 3   3   2
p1	| 2   0   0  | 3   2   2  |
p2	| 3   0   2  | 9   0   2  |
p3	| 2   1   1  | 2   2   2  |
p4	| 0   0   2  | 4   3   3  |


max - allocation
check
p0 7 4 3
p1 1 2 2
p2 6 0 0
p3 0 1 1
p4 4 3 1

The algorithm should follow this sequence:
solution = solution + allocation
check <= solution
p0 743 <= 332    no
p1 122 <= 332    yes 332 + 200 = 532
p2 600 <= 532	 no  
p3 011 <= 532    yes 532 + 211 = 743
p4 431 <= 743	 yes 743 + 002 = 745
p0 743 <= 745    yes 745 + 010 = 755
p2 600 <= 755	 yes 755 + 302 = 1057

the safe sequence should be: p1, p3, p4, p0, p2


compile:
gcc -o bankerAlgo bankerAlgo.c
./bankerAlgo
