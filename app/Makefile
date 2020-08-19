cflag = -w

src = $(wildcard *.c library/*/*.c)
obj = $(patsubst %.c, %.o, $(src))
target = graceful-linux-command-tools

all:$(target)

$(target):$(obj)
	cc -o $@ $^ $(cflag) `pkg-config --cflags --libs glib-2.0`

%.o:%.c
	cc -o $@ -c $^ $(cflag) `pkg-config --cflags --libs glib-2.0`

.PHONY:clean all

clean:
	@rm -fr $(target)
	@rm -fr `find . -name "*.o"`
