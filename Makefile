# Corre los casos de prueba para el programa
test: a.out
	./a.out < ./tests/TestCases.txt

testPrograma: a.out
	./a.out < ./tests/Caso_de_Prueba_programa_Mini_P.TXT

testBadLiteral: a.out
	./a.out < ./tests/Caso_de_Prueba_Constante_De_Cadena_Ilimitada.txt

testBadComment: a.out
	./a.out < ./tests/Caso_de_Prueba_Comentario_Ilimitado.txt

# Corre el programa en modo interactivo
run: a.out
	./a.out

a.out: DriverMiniP.c lex.yy.c
	gcc ./DriverMiniP.c lex.yy.c

lex.yy.c:
	flex LexSpec.txt

clean:
	rm -rf ./lex.yy.c ./a.out