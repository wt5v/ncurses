GCC=gcc
CFLAGS=-g -ansi -pedantic -Wall -no-pie -pg
INCLUDE=-I/usr/lib/ncursesw
LDFLAGS=-lncurses

goodbye: goodbye.c
	$(GCC) $(CFLAGS) -o goodbye goodbye.c $(LDFLAGS)

add1: add1.c
	$(GCC) $(CFLAGS) -o add1 add1.c $(LDFLAGS)

add2: add2.c
	$(GCC) $(CFLAGS) -o add2 add2.c $(LDFLAGS)

add3: add3.c
	$(GCC) $(CFLAGS) -o add3 add3.c $(LDFLAGS)

yoda: yoda.c
	$(GCC) $(CFLAGS) -o yoda yoda.c $(LDFLAGS)

typewriter: typewriter.c
	$(GCC) $(CFLAGS) -o typewriter typewriter.c $(LDFLAGS)

yourname: yourname.c
	$(GCC) $(CFLAGS) -o yourname yourname.c $(LDFLAGS)

twinkle: twinkle.c
	$(GCC) $(CFLAGS) -o twinkle twinkle.c $(LDFLAGS)

annoy: annoy.c
	$(GCC) $(CFLAGS) -o annoy annoy.c $(LDFLAGS)

colortest: colortest.c
	$(GCC) $(CFLAGS) -o colortest colortest.c $(LDFLAGS)

yellowred: yellowred.c
	$(GCC) $(CFLAGS) -o yellowred yellowred.c $(LDFLAGS)

colorful: colorful.c
	$(GCC) $(CFLAGS) -o colorful colorful.c $(LDFLAGS)

pink: pink.c
	$(GCC) $(CFLAGS) -o pink pink.c $(LDFLAGS)

bgcolor1: bgcolor1.c
	$(GCC) $(CFLAGS) -o bgcolor1 bgcolor1.c $(LDFLAGS)

bgcolor2: bgcolor2.c
	$(GCC) $(CFLAGS) -o bgcolor2 bgcolor2.c $(LDFLAGS)

attrtest: attrtest.c
	$(GCC) $(CFLAGS) -o attrtest attrtest.c $(LDFLAGS)

pi: pi.c
	$(GCC) $(CFLAGS) -o pi pi.c $(LDFLAGS)

acslist: acslist.c
	$(GCC) $(CFLAGS) -o acslist acslist.c $(LDFLAGS)

unicode: unicode.c
	$(GCC) $(CFLAGS) $(INCLUDE) -o unicode unicode.c -lncursesw

ustring: ustring.c
	$(GCC) $(CFLAGS) $(INCLUDE) -o ustring ustring.c -lncursew

screensize: screensize.c
	$(GCC) $(CFLAGS) $(INCLUDE) -o screensize screensize.c $(LDFLAGS)

ctitle: ctitle.c
	$(GCC) $(CFLAGS) $(INCLUDE) -o ctitle ctitle.c $(LDFLAGS)

ncurses_chars: ncurses_chars.c
	$(GCC) $(CFLAGS) $(INCLUDE) -o ncurses_chars ncurses_chars.c $(LDFLAGS)

clean:
	$(RM) *.o *.out add1 add2 add3 goodbye yoda typewriter
	$(RM) yourname twinkle annoy colortest yellowred colorful
	$(RM) pink bgcolor1 bgcolor2 attrtest pi acslist unicode
	$(RM) ustring screensize ctitle ncurses_chars
