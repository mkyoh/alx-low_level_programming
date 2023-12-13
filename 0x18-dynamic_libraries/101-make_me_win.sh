#!/bin/bash
wger -P https://github.com/mkyoh/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libtests.so
export LD_PRELOAD="$PWD/../libtests.so"
