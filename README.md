# first\_node\_cxx\_module

This shows how to build a simple node C++ addon. The file
addon.cc exposes a single Javascript function equivalent to:

    function add(x:number, y:number) { return x+y; }

It's based on the tutorial at:

https://github.com/nodejs/node-gyp#installation

## Building (libmylib.a)

    cd /path/to/first_node_cxx_module/mylib
    gcc -c -o silly_add.o silly_add.cpp
    ar rcs libmylib.a silly_add.o

## Building

    cd /path/to/first_node_cxx_module
    npm install -g node-gyp
    node-gyp configure
    node-gyp build

## Test

    node test.js
