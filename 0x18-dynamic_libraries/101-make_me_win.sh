#!/bin/bash
wget -P /tmp https://github.com/CaptainAril/alx-low_level_programming/blob/ecbdaa19eda93a2769923ef46aec1916be0763f2/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD=/tmp/libmask.so
