# CS1550-lab0

Simple calculator program to test if you can use git and compile C code. Also showcases different ways a makefile can be used.

## Commands

**Default Makefile:**

- `make` / `make calculator` - Build calculator
- `make clean` - Remove generated files

**Advanced Makefile:**

- `make -f adv-mk`- Build calculator
- `make -f adv-mk run` - Build and run with default args (15 5)
- `make -f adv-mk run ARGS="10 3"` - Build and run with custom args
- `make -f adv-mk debug` - Build and debug with GDB
- `make -f adv-mk debug ARGS="10 3"` - Build and debug with GDB and custom args
- `make -f adv-mk clean` - Remove generated files
