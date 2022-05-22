.PHONY: compile
default_target: compile


compile:
	cd build && make

docs:
	doxygen
