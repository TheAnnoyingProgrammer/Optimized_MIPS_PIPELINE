#!/bin/bash

rm -rf obj_dir

verilator -Wall --cc \
01_Fetch.v \
02_Decode.v \
03_Execute.v \
04_Writeback.v \
ALU.v \
Data_Memory.v \
Instruction_Memory.v \
Register_Memory.v \
CPU.v \
--exe tb_cpu.cpp \
--top-module CPU

make -C obj_dir -f VCPU.mk VCPU

./obj_dir/VCPU