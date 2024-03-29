CC = gcc
CFLAGS = -Wall -O2
SRC = basicClassification.c  advancedClassificationLoop.c advancedClassificationRecursion.c
OBJ = $(SRC:.c=.o)

LIB_OBJ_LOOP = basicClassification.o  advancedClassificationLoop.o
LIB_OBJ_REC = basicClassification.o  advancedClassificationRecursion.o

loops: libclassloops.a

recursives: libclassrec.a

recursived: libclassrec.so

loopd: libclassloops.so

mains: libclassrec.a main.o
	$(CC) $(CFLAGS) -o mains main.o  libclassrec.a

maindloop: main.o
	$(CC) $(CFLAGS) -o maindloop main.o ./libclassloops.so

maindrec: main.o
	$(CC) $(CFLAGS) -o maindrec main.o ./libclassrec.so

all: loops recursives recursived loopd mains maindloop maindrec

clean:
	rm -f $(OBJ) maindloop maindrec mains advancedClassificationRecursion *.o libclassloops.a libclassrec.a libclassrec.so libclassloops.so

.PHONY: all clean loops recursives recursived loopd

libclassloops.a: $(LIB_OBJ_LOOP)
	ar rcs libclassloops.a $(LIB_OBJ_LOOP)

libclassrec.a: $(LIB_OBJ_REC)
	ar rcs libclassrec.a $(LIB_OBJ_REC)

libclassrec.so: $(LIB_OBJ_REC)
	$(CC) -shared -o libclassrec.so $(LIB_OBJ_REC)

libclassloops.so: $(LIB_OBJ_LOOP)
	$(CC) -shared -o libclassloops.so $(LIB_OBJ_LOOP)
