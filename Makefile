current_dir = $(shell pwd)

all:command_line

all_clean:command_line_clean

command_line:
	cd $(current_dir)/app && make

command_line_clean:
	cd $(current_dir)/app && make clean


.PHONY:clean 

clean: all_clean
