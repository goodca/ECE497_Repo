# --------------------------------
# ------ user-defined vars -------
# --------------------------------
CC := /usr/bin/gcc
CFLAGS := 
LINKER_FLAGS := 


# -----------------------
# ------ make all -------
# -----------------------

# The "all" rule commonly specifies all executable targets to
# be built. Note, the user has full control over what the "all"
# rule builds. In this solution, we only have one target.
# However, in the final Beagle makefile, you'll see more
# targets listed. 
.PHONY : all
all : executable




# -----------------------------------
# ------ executable rule (.x) -------
# -----------------------------------
executable : SoftPot.o
	$(CC) $(CFLAGS) SoftPot.o -o executable

#@echo; echo $@ successfully created; echo



# ---------------------------------------------------
# ------ intermeditate object files rule (.o) -------
# ---------------------------------------------------
SoftPot.o : mini2.c
	$(CC) $(CFLAGS) $(LINKER_FLAGS) -g -c mini2.c -o SoftPot.o


# ----------------------
# ----- clean all ------
# ----------------------

# The "clean" rule should remove all files created by
# the makefile (e.g. the executables and intermediate
# files).
.PHONY : clean
clean :
	rm -rf executable
	rm -rf SoftPot.o
	


