# Corre los casos de prueba para el programa
test: a.out
	./a.out < ./tests/TestCases.txt


# Corre el programa en modo interactivo
run: a.out
	./a.out

a.out: DriverMiniP.c lex.yy.c
	gcc ./DriverMiniP.c lex.yy.c

lex.yy.c:
	flex LexSpec.txt

clean:
	rm -rf ./lex.yy.c ./a.out