
CFLAGS=-g -W -Wall -fPIC 


all:
	g++ ${CFLAGS} -c bcmath.cc -o bcmath.o -I.
	g++ ${CFLAGS} -c bcmath.c -o bcmath_c.o -I.
	g++ -shared -o libbcmath_c.so bcmath.o bcmath_c.o
	ar rc libbcmath_c.a bcmath.o bcmath_c.o 
	gcc -c -g test.c  -o test.o  -I.
	gcc -g -o bctest test.o -I. -L. -lbcmath_c


clean :
	rm -rf *.o lib* bctest









