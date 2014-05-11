############################################################################
#
#  Program:         SuperLU
#
#  Module:          Makefile
#
#  Purpose:         Top-level Makefile
#
#  Creation date:   October 2, 1995
#
#  Modified:        February 4, 1997  Version 1.0
#		    November 15, 1997 Version 1.1
#		    September 1, 1999 Version 2.0
#		    October 15, 2003 Version 3.0
#
############################################################################

include GNUmakefile.inc

## Modifications by Emanuele Cannizzaro on 27th August 2004
## Options for gnu and Intel compilers
## Options to link to Non-Optimized System and Vanilla Blas and 
##  Optimized Goto, AMD ACML and Intel MKL implementations.

.PHONY: gnu intel \
	gnu_blas-system \
	gnu_blas \
	gnu_atlas \
	gnu_goto \
	gnu_acml \
	gnu_mkl \
	intel_blas-system \
	intel_blas \
	intel_atlas \
	intel_goto \
	intel_acml \
	intel_mkl \
	install \
	lib \
	testing \
	example \
	fortran \
	clean \
	cleanlib \
	cleantesting

default: none

none:
	@echo ""
	@echo ""
	@echo "  Select one of the following options :"
	@echo ""
	@echo "    -  lib"
	@echo "    -  testing"
	@echo "    -  clean"
	@echo ""

everything: gnu_all intel_all

everything_all: everything

everything_clean: gnu_clean_all intel_clean_all
	$(RM) -rf testing/output
	
gnu_all: 
	( $(MAKE) gnu_blas-system  )
	( $(MAKE) gnu_blas         )
	( $(MAKE) gnu_atlas        )
	( $(MAKE) gnu_goto         )
	##( $(MAKE) gnu_acml         )
	( $(MAKE) gnu_mkl          )

gnu_blas-system: 
	( $(MAKE) set_gnu_blas-system  ; $(MAKE) all )

gnu_blas:
	( $(MAKE) set_gnu_blas         ; $(MAKE) all )

gnu_atlas:
	( $(MAKE) set_gnu_atlas        ; $(MAKE) all )

gnu_goto:
	( $(MAKE) set_gnu_goto         ; $(MAKE) all )

gnu_acml:
	( $(MAKE) set_gnu_acml         ; $(MAKE) all )

gnu_mkl:
	( $(MAKE) set_gnu_mkl          ; $(MAKE) all )

intel_all: 
	( $(MAKE) intel_blas-system  )
	( $(MAKE) intel_blas         )
	( $(MAKE) intel_atlas        )
	( $(MAKE) intel_goto         )
	##( $(MAKE) intel_acml         )
	( $(MAKE) intel_mkl          )

intel_blas-system:	  
	( $(MAKE) set_intel_blas-system  ; $(MAKE) all )

intel_blas:
	( $(MAKE) set_intel_blas         ; $(MAKE) all )

intel_atlas:
	( $(MAKE) set_intel_atlas        ; $(MAKE) all )

intel_goto:
	( $(MAKE) set_intel_goto         ; $(MAKE) all )

intel_acml:
	( $(MAKE) set_intel_acml         ; $(MAKE) all )

intel_mkl:
	( $(MAKE) set_intel_mkl          ; $(MAKE) all ) 
	
gnu_clean_all: 
	( $(MAKE) gnu_clean_blas-system  )
	( $(MAKE) gnu_clean_blas         )
	( $(MAKE) gnu_clean_atlas        )
	( $(MAKE) gnu_clean_goto         )
	( $(MAKE) gnu_clean_acm l        )
	( $(MAKE) gnu_clean_mkl          )

gnu_clean_blas-system: 
	( $(MAKE) set_gnu_blas-system  ; $(MAKE) clean )

gnu_clean_blas: 
	( $(MAKE) set_gnu_blas         ; $(MAKE) clean )

gnu_clean_atlas: 
	( $(MAKE) set_gnu_atlas        ; $(MAKE) clean )

gnu_clean_goto: 
	( $(MAKE) set_gnu_goto         ; $(MAKE) clean )

gnu_clean_acml: 
	( $(MAKE) set_gnu_acml         ; $(MAKE) clean )

gnu_clean_mkl: 
	( $(MAKE) set_gnu_mkl          ; $(MAKE) clean )

intel_clean_all: 
	( $(MAKE) intel_clean_blas-system  )
	( $(MAKE) intel_clean_blas         )
	( $(MAKE) intel_clean_atlas        )
	( $(MAKE) intel_clean_goto         )
	( $(MAKE) intel_clean_acml         )
	( $(MAKE) intel_clean_mkl          )

intel_clean_blas-system:
	( $(MAKE) set_intel_blas-system  ; $(MAKE) clean )

intel_clean_blas:
	( $(MAKE) set_intel_blas         ; $(MAKE) clean )

intel_clean_atlas:
	( $(MAKE) set_intel_atlas        ; $(MAKE) clean )

intel_clean_goto:
	( $(MAKE) set_intel_goto         ; $(MAKE) clean )

intel_clean_acml:
	( $(MAKE) set_intel_acml         ; $(MAKE) clean )

intel_clean_mkl:
	( $(MAKE) set_intel_mkl          ; $(MAKE) clean ) 
	
set_gnu_blas-system:
	( rm -f GNUmakefile.inc; \
	  ln -s GNUmakefile_include/GNUmakefile.linux_athlon-sse1_gnu_blas-system.inc GNUmakefile.inc )

set_gnu_blas:
	( rm -f GNUmakefile.inc; \
	  ln -s GNUmakefile_include/GNUmakefile.linux_athlon-sse1_gnu_blas.inc GNUmakefile.inc )

set_gnu_atlas:
	( rm -f GNUmakefile.inc; \
	  ln -s GNUmakefile_include/GNUmakefile.linux_athlon-sse1_gnu_atlas.inc GNUmakefile.inc )

set_gnu_goto:
	( rm -f GNUmakefile.inc; \
	  ln -s GNUmakefile_include/GNUmakefile.linux_athlon-sse1_gnu_goto.inc GNUmakefile.inc )

set_gnu_acml:
	( rm -f GNUmakefile.inc; \
	  ln -s GNUmakefile_include/GNUmakefile.linux_athlon-sse1_gnu_acml.inc GNUmakefile.inc )

set_gnu_mkl:
	( rm -f GNUmakefile.inc; \
	  ln -s GNUmakefile_include/GNUmakefile.linux_athlon-sse1_gnu_mkl.inc GNUmakefile.inc )
	
set_intel_blas-system:
	( rm -f GNUmakefile.inc; \
	  ln -s GNUmakefile_include/GNUmakefile.linux_athlon-sse1_intel_system.inc GNUmakefile.inc )

set_intel_blas:
	( rm -f GNUmakefile.inc; \
	  ln -s GNUmakefile_include/GNUmakefile.linux_athlon-sse1_intel_blas.inc GNUmakefile.inc )

set_intel_atlas:
	( rm -f GNUmakefile.inc; \
	  ln -s GNUmakefile_include/GNUmakefile.linux_athlon-sse1_intel_atlas.inc GNUmakefile.inc )

set_intel_goto:
	( rm -f GNUmakefile.inc; \
	  ln -s GNUmakefile_include/GNUmakefile.linux_athlon-sse1_intel_goto.inc GNUmakefile.inc )

set_intel_acml:
	( rm -f GNUmakefile.inc; \
	  ln -s GNUmakefile_include/GNUmakefile.linux_athlon-sse1_intel_acml.inc GNUmakefile.inc )

set_intel_mkl:
	( rm -f GNUmakefile.inc; \
	  ln -s GNUmakefile_include/GNUmakefile.linux_athlon-sse1_intel_mkl.inc GNUmakefile.inc )

all: install lib testing fortran example
##all: install lib testing example fortran

lib: superlulib tmglib

clean: cleanlib cleantesting

install:
	( cd install; $(MAKE) )

superlulib:
	( cd src; $(MAKE) )

tmglib:
	( cd testing/matgen; $(MAKE) )

matlab:
	( cd matlab; $(MAKE) )

testing:
	( cd testing ; $(MAKE) )

fortran:
	( cd src/fortran; $(MAKE) )

example:
	( cd example ; $(MAKE) all )

cleanlib:
	( cd src; $(MAKE) clean )
	( cd testing/matgen; $(MAKE) clean )

cleantesting:
	( cd install; $(MAKE) clean )
	( cd testing; $(MAKE) clean )
	( cd matlab;  $(MAKE) clean )
	( cd example; $(MAKE) clean )
	( cd src/fortran; $(MAKE) clean )
