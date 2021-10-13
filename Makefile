.PHONY=help clean
.DEFAULT_GOAL=eu07

help:
	@echo "clean - clean build files"
	@echo "eu07 - compile exe"

clean:
	rm -rf build

build:
	mkdir -p build
	cd build && cmake ../

eu07: build
	cd build && make
