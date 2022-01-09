CC = gcc
CFLAGS = -g -Wall

DIR_SRC = src
DIR_OBJ = obj
DIR_OUT = out

SRC := $(wildcard $(DIR_SRC)/*.c)
OBJ := $(patsubst $(DIR_SRC)/%.c, $(DIR_OBJ)/%.o, $(SRC))
OUT := $(DIR_OUT)/tarot

all: $(OUT)

$(OUT): $(OBJ) | $(DIR_OUT)
	$(CC) $(LDFLAGS) $^ $(LDLIBS) -o $@

$(OBJ): $(SRC) | $(DIR_OBJ)
	$(CC) $(CFLAGS) -c $^ -o $@

$(DIR_OUT):
	mkdir -p $@

$(DIR_OBJ):
	mkdir -p $@

clean:
	rm $(OUT) $(OBJ)