####################################################################
#  SuperLU make include file.                                      #
#  SuperLU Version 3.0                                             #
#  September 16, 2004                                              #
####################################################################
#
#
#  The machine (platform) identifier to append to the library names
#
HALFPLAT = linux_athlon-sse1_gnu
PLAT     = $(HALFPLAT)_acml
#  
include $(MATH_DIR)/GNUmakefile_include/gnu.options.inc
#
include $(MATH_DIR)/GNUmakefile_include/linux.options.inc
#
#-------------------------------------------------------------------
#  The location of the libraries to which you will link.
#  NB Optimized BLAS library should be used whenever possible.
#-------------------------------------------------------------------
ACMLDIR     := $(ACML_HOME)/gnu32_nosse2
BLASLIB      = /opt/blas/src/$(HALFPLAT)/xerbla.o $(ACMLDIR)/lib/libacml.a
#
#-------------------------------------------------------------------
#  The location of the libraries to create
#-------------------------------------------------------------------
TMGLIB       = lib/libtmglib_$(PLAT).a
SUPERLULIB   = lib/libsuperlu_$(PLAT).a
#
#-------------------------------------------------------------------
#  The location of the libraries to which you will link.
#  NB Optimized BLAS library should be used whenever possible.
#-------------------------------------------------------------------
#
CDEFS        = -DAdd__
CONFIG       =  -DLONGBLAS -DGETRUSAGE -DLP64
LIB          = $(BLASLIB) -lfrtbegin -lg2c -lm
#
#-------------------------------------------------------------------
#  The directory in which Matlab is installed
#-------------------------------------------------------------------
##MATLAB       = /opt/matlab
