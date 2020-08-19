cflag = -w

current_dir = $(shell pwd)
src = $(wildcard *.c module/*.c module/*/*.c library/*/*.c)
obj = $(patsubst %.c, %.o, $(src))
target = graceful-linux-command-tools

libs = \
	-Imodule/					\
	-Ilibrary/					\

all:$(target)

$(target):$(obj)
	cc -o $@ $^ $(cflag) $(libs) `pkg-config --cflags --libs glib-2.0`

%.o:%.c
	cc -o $@ -c $^ $(cflag) $(libs) `pkg-config --cflags --libs glib-2.0`

.PHONY:clean all

clean:
	@rm -fr $(target)
	@rm -fr `find . -name "*.o"`
