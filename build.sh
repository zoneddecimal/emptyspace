#!/usr/bin/env bash

mkdir build
cd build
cmake ../
cmake --build .
chmod -R 777 assets
chmod -R 777 Emptyspace
