RASSIGN = 37
RASSIGN = 37
RASSIGN = 37
RASSIGN = 37
RASSIGN = 37
RASSIGN = 37
 THE TABLE OF QUADRUPLES ARE

LABEL	OPER	OP1	OP2	RES

	=	0	-	sum
	=	0	-	idx
L1:	<	idx	nums	t1
	goto	-	-	L3
L2:	+	idx	1	t2
	=	t2	-	idx
	goto	-	-	L1
L3:	If=	t1	0	L4
	*	idx	4	t3
	=	12	-	t4
	=[]	t4	t3	t5
	+	sum	t5	t6
	=	t6	-	sum
	+	idx	1	t7
	*	idx	5	data1
	+	t8		data1
	*	t8	4	t10
	=	92	-	t11
	=[]	t11	t10	t12
	+	sum	t12	t13
	=	t13	-	sum
	+	idx	1	t14
	*	idx	5	data2
	+	t15		data2
	+	idx	3	t17
	*	t15	3	data2
	+	t18		data2
	*	t18	4	t20
	=	492	-	t21
	=[]	t21	t20	t22
	+	sum	t22	t23
	=	t23	-	sum
	goto	-	-	L2
L4:	Nop	-	-	-
	=	0	-	i
L5:	<	i	10	t24
	goto	-	-	L7
L6:	+	i	1	t25
	=	t25	-	i
	goto	-	-	L5
L7:	If=	t24	0	L8
	*	i	4	t26
	=	1692	-	t27
	=[]	t27	t26	t28
	+	sum	t28	t29
	*	i	10	t30
	+	t29	t30	t31
	=	t31	-	sum
	+	i	1	t32
	*	i	5	data1
	+	t33		data1
	*	t33	4	t35
	=	92	-	t36
	=[]	t36	t35	t37
	+	sum	t37	t38
	=	t38	-	sum
	+	i	1	t39
	*	i	5	data2
	+	t40		data2
	+	i	3	t42
	*	t40	3	data2
	+	t43		data2
	*	t43	4	t45
	=	492	-	t46
	=[]	t46	t45	t47
	+	sum	t47	t48
	=	t48	-	sum
	goto	-	-	L6
L8:	Nop	-	-	-
	/	sum	nums	t49
	=	t49	-	sum
..................................
Printing the quadruples Blockwise
..................................
Block No:0
	=	0	-	sum
	=	0	-	idx
Block No:1
L1:	<	idx	nums	t1
	goto	-	-	L3
Block No:2
L2:	+	idx	1	t2
	=	t2	-	idx
	goto	-	-	L1
Block No:3
L3:	If=	t1	0	L4
Block No:4
	*	idx	4	t3
	=	12	-	t4
	=[]	t4	t3	t5
	+	sum	t5	t6
	=	t6	-	sum
	+	idx	1	t7
	*	idx	5	data1
	+	t8		data1
	*	t8	4	t10
	=	92	-	t11
	=[]	t11	t10	t12
	+	sum	t12	t13
	=	t13	-	sum
	+	idx	1	t14
	*	idx	5	data2
	+	t15		data2
	+	idx	3	t17
	*	t15	3	data2
	+	t18		data2
	*	t18	4	t20
	=	492	-	t21
	=[]	t21	t20	t22
	+	sum	t22	t23
	=	t23	-	sum
	goto	-	-	L2
Block No:5
	=	0	-	i
Block No:6
L5:	<	i	10	t24
	goto	-	-	L7
Block No:7
L6:	+	i	1	t25
	=	t25	-	i
	goto	-	-	L5
Block No:8
L7:	If=	t24	0	L8
Block No:9
	*	i	4	t26
	=	1692	-	t27
	=[]	t27	t26	t28
	+	sum	t28	t29
	*	i	10	t30
	+	t29	t30	t31
	=	t31	-	sum
	+	i	1	t32
	*	i	5	data1
	+	t33		data1
	*	t33	4	t35
	=	92	-	t36
	=[]	t36	t35	t37
	+	sum	t37	t38
	=	t38	-	sum
	+	i	1	t39
	*	i	5	data2
	+	t40		data2
	+	i	3	t42
	*	t40	3	data2
	+	t43		data2
	*	t43	4	t45
	=	492	-	t46
	=[]	t46	t45	t47
	+	sum	t47	t48
	=	t48	-	sum
	goto	-	-	L6
Block No:10
	/	sum	nums	t49
	=	t49	-	sum
Construct Flow Graph
Print Flow Graph
B1
B2
B4	
B2	
B6	B5
B3	
B7
B9	
B7	
B11	B10
B8	

Printing Labels
L1	L2	L3	L4	L5	L6	L7	L8	

