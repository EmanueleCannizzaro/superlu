####################################################################
#  SuperLU make include file.                                      #
#  SuperLU Version 3.0                                             #
#  Emanuele Cannizzaro                                             #
#  May 16, 2005                                                    #
####################################################################
#
#
#  The machine (platform) identifier to append to the library names
#
HALFPLAT = linux_athlon-sse1_gnu
PLAT     = $(HALFPLAT)_blas-system
#  
include $(MATH_DIR)/GNUmakefile_include/gnu.options.inc
#
include $(MATH_DIR)/GNUmakefile_include/linux.options.inc
#
#-------------------------------------------------------------------
#  The location of the libraries to which you will link.
#  NB Optimized BLAS library should be used whenever possible.
#-------------------------------------------------------------------
BLASLIB      = $(BLAS_SYSTEM_HOME)/lib/libblas.a
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
CDEFS        = -DAdd__
CONFIG       =  -DLONGBLAS -DGETRUSAGE -DLP64
LIB          = $(BLASLIB) -lfrtbegin -lg2c -lm
#
#-------------------------------------------------------------------
#  The directory in which Matlab is installed
#-------------------------------------------------------------------
##MATLAB       = /opt/matlab
