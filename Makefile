CC = $(COMPILER)gcc
AR = $(COMPILER)ar

OBJ = main.o zhtao.o yurui.o luoyong.o
TARGET = test

all: $(TARGET)
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $@
	
%.o:%.c
	$(CC) -c -I./ $<

.PHONY:clean
clean:
	rm *.o $(TARGET)
