CFLAGS=-Wall -pedantic -std=c11 -g

all:	listtest1 listtest2 gettest0 gettest1 gettest2 remove_test1 remove_test2 remove_test3 remove_test4 apply_test1 apply_test2 make_list_test

list.o:	list.c list.h listfun.h
				gcc $(CFLAGS) -c list.c

listfun.o:	listfun.c list.h listfun.h
				gcc $(CFLAGS) -c listfun.c

listtest1.o:	listtest1.c list.h listfun.h
							gcc $(CFLAGS) -c listtest1.c

listtest2.o:	listtest2.c list.h listfun.h
							gcc $(CFLAGS) -c listtest2.c

gettest0.o:	gettest0.c list.h listfun.h
							gcc $(CFLAGS) -c gettest0.c

gettest1.o:	gettest1.c list.h listfun.h
							gcc $(CFLAGS) -c gettest1.c

gettest2.o:	gettest2.c list.h listfun.h
							gcc $(CFLAGS) -c gettest2.c

remove_test1.o:	remove_test1.c list.h listfun.h
								gcc $(CFLAGS) -c remove_test1.c

remove_test2.o:	remove_test2.c list.h listfun.h
								gcc $(CFLAGS) -c remove_test2.c

remove_test3.o: remove_test3.c list.h listfun.h
								gcc $(CFLAGS) -c remove_test3.c

remove_test4.o: remove_test4.c list.h listfun.h
								gcc $(CFLAGS) -c remove_test4.c

apply_test1.o:	apply_test1.c list.h listfun.h
								gcc $(CFLAGS) -c apply_test1.c

apply_test2.o:	apply_test2.c list.h listfun.h
								gcc $(CFLAGS) -c apply_test2.c

make_list_test.o:	make_list_test.c list.h listfun.h
								gcc $(CFLAGS) -c make_list_test.c

listtest1:	listtest1.o	list.o listfun.o
						gcc $(CFLAGS) list.o listfun.o listtest1.o -o listtest1	

listtest2:	listtest2.o list.o listfun.o
						gcc $(CFLAGS) list.o listfun.o listtest2.o -o listtest2

gettest0:		gettest0.o list.o listfun.o
						gcc $(CFLAGS) list.o listfun.o gettest0.o -o gettest0

gettest1:		gettest1.o list.o listfun.o
						gcc $(CFLAGS) list.o listfun.o gettest1.o -o gettest1

gettest2:		gettest2.o list.o listfun.o
						gcc $(CFLAGS) list.o listfun.o gettest2.o -o gettest2

remove_test1:		remove_test1.o list.o listfun.o
								gcc $(CFLAGS) list.o listfun.o remove_test1.o -o remove_test1

remove_test2:		remove_test2.o list.o listfun.o
								gcc $(CFLAGS) list.o listfun.o remove_test2.o -o remove_test2

remove_test3: 		remove_test3.o list.o listfun.o
								gcc $(CFLAGS) list.o listfun.o remove_test3.o -o remove_test3

remove_test4: 		remove_test4.o list.o listfun.o
								gcc $(CFLAGS) list.o listfun.o remove_test4.o -o remove_test4

apply_test1:		apply_test1.o list.o listfun.o
								gcc $(CFLAGS) list.o listfun.o apply_test1.o -o apply_test1

apply_test2:		apply_test2.o list.o listfun.o
								gcc $(CFLAGS) list.o listfun.o apply_test2.o -o apply_test2

make_list_test:		make_list_test.o list.o listfun.o
									gcc $(CFLAGS) list.o listfun.o make_list_test.o -o make_list_test

clean:
				rm -f *.o listtest1 listtest2 gettest0 gettest1 remove_test1 remove_test2 remove_test3 remove_test4 apply_test1 apply_test2 make_list_test
