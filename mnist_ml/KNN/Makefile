CC=g++
MNIST_ML_ROOT := /home/akilax0/Documents/Projects/AIinC++/mnist_ml
SRC := $(PWD)/src
CFLAGS := -std=c++17 -DEUCLID
INCLUDE_DIR := $(PWD)/include/

all: main

main : $(SRC)/knn.cc
	$(CC) $(CFLAGS) $(SRC)/knn.cc -o main -L$(MNIST_ML_ROOT)/lib/ -I$(INCLUDE_DIR) -I$(MNIST_ML_ROOT)/include -ldata

clean:
	rm main