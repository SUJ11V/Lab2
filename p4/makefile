make_file :lib/libtest.a
	cd ..;
	gcc -g -I./lib -L./lib main.c -ltest -o make_file
add.o : lib/add.c
	cd lib;
	gcc -c lib/add.c
sub.o : lib/sub.c
	gcc -c lib/sub.c
mul.o : lib/mul.c
	gcc -c lib/mul.c
div.o : lib/mul.c
	gcc -c lib/div.c
lib/libtest.a : lib/add.o lib/sub.o lib/mul.o lib/div.o
	ar rcs lib/libtest.a lib/add.o lib/sub.o lib/mul.o lib/div.o
clean :
	rm -f make_file libtest.a lib/add.o lib/sub.o lib/mul.o lib/div.o
