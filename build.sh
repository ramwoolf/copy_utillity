#!/usr/bin/sh

if ! [ -d "bin" ]; then
	rm -rf "bin"
	mkdir "bin"
fi

if ! [ -d "build" ]; then
	rm -rf "build"
	mkdir "build"
fi

root_folder=`pwd`
cd build
cmake ../src
make
make install