FILES=./build/hello.o
STDLIB=../stdlib/stdlib.elf
INCLUDES= -I../stdlib/src
FLAGS= -g -ffreestanding -falign-jumps -falign-functions -falign-labels -falign-loops -fstrength-reduce -fomit-frame-pointer -finline-functions -Wno-unused-function -fno-builtin -Werror -Wno-unused-label -Wno-cpp -Wno-unused-parameter -nostdlib -nostartfiles -nodefaultlibs -Wall -O0 -Iinc
all: ${FILES}
	i686-elf-gcc -g -T ./linker.ld -o ./hello.elf -ffreestanding -O0 -nostdlib -fpic -g ${FILES} ${STDLIB}

./build/hello.o: ./hello.c
	i686-elf-gcc ${INCLUDES} -I./ $(FLAGS) -std=gnu99 -c ./hello.c -o ./build/hello.o

clean:
	rm -rf ${FILES}
	rm ./hello.elf
