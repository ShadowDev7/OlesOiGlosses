CC=gcc
CXX=g++
ALL=paradeigma_c paradeigma_cpp

all: $(ALL)

paradeigma_c: paradeigma.c
	$(CC) -o paradeigma_c $^

paradeigma_cc: paradeigma.cpp
	$(CXX) -o paradeigma_cpp $^

clean:
	rm -f paradeigma_c paradeigma_cpp

run: paradeigma_c paradeigma_cc
	@echo Πρόγραμμα σε C
	./paradeigma_c
	@echo
	@echo Πρόγραμμα σε C++
	./paradeigma_cpp
	@echo
	@echo Πρόγραμμα σε Perl
	./paradeigma.pl
	@echo
	@echo Πρόγραμμα σε Bash
	./paradeigma.sh
	@echo
	@echo Πρόγραμμα σε Awk
	./paradeigma.awk
	@echo
