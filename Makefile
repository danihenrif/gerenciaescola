# Compila todos os arquivos e gera o executável
all: create_dir main

# Cria pasta para armazenar os arquivos objetos
create_dir:
	mkdir -p bin

# Compila o arquivo data.cpp e gera o arquivo objeto data.o
bin/data.o: src/data.cpp
	g++ src/data.cpp -Iinclude -O0 -g -Wall  -pedantic -o bin/data.o

# Compila o arquivo node.cpp e gera o arquivo objeto node.o
bin/node.o: src/node.cpp bin/data.o
	g++ src/node.cpp -Iinclude -O0 -g -Wall  -pedantic -o bin/node.o

# Compila o arquivo list.cpp e gera o arquivo objeto list.o
bin/list.o: src/list.cpp bin/node.o
	g++ src/list.cpp -Iinclude -O0 -g -Wall  -pedantic -o bin/list.o

# Compila o arquivo sistema.cpp e gera o arquivo objeto sistema.o
bin/sistema.o: src/sistema.cpp bin/list.o
	g++ src/sistema.cpp -Iinclude -O0 -g -Wall  -pedantic -o bin/sistema.o

# Compila o arquivo main.cpp, gera o arquivo objeto main.o e o executável
bin/main.o: src/main.cpp bin/sistema.o
	g++ src/main.cpp -Iinclude -O0 -g -Wall  -pedantic -o bin/main.o

# Cria o arquivo executável
main: bin/main.o
	g++ bin/*.o -Iinclude -O0 -g -Wall  -pedantic  -o main

# Executa o programa
run: all
	./main

# Apaga a pasta de arquivos objetos e o executável
clean:
	rm -rf bin main