#!/bin/bash
c_files=$(find . -type f -name "*.c")
ar rc liball.a $c_files
ranlib liball.a
