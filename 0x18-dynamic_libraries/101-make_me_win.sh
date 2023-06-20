#!/bin/bash
wget -q --output-document=$HOME/lib_inject.so https://github.com/khaoula-berrah/alx-low_level_programming/master/0x18-dynamic_libraries/lib_inject.so?raw=true
export LD_PRELOAD=$HOME/lib_inject.so
