CFLAGS=-Wall -pedantic -std=c11 -g

all:	listtest1 listtest2

list.o:	list.c list.h listfun.h
				gcc $(CFLAGS) -c list.c

listtest1.o:	listtest1.c list.h listfun.h
							gcc $(CFLAGS) -c listtest1.c

listtest2.o:	listtest2.c list.h listfun.h
							gcc $(CFLAGS) -c listtest2.c

listtest1:	listtest1.o	list.o listfun.o
						gcc $(CFLAGS) list.o listfun.o listtest1.o -o listtest1	

listtest2:	listtest2.o list.o listfun.o
						gcc $(CFLAGS) list.o listfun.o listtest2.o -o listtest2
						
clean:
				rm -f *.o listtest1 listtest2
