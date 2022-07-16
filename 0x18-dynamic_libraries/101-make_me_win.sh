#!/bin/bash
wget -P /tmp/ https://raw.github.com/CaptainAril/alx-low_level_programming/master/0x18-dynamic_libraries/libwin.so 
LD_PRELOAD=$PWD/libwin.so
