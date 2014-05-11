#!/bin/tcsh

echo "Single-precision testing output"

set MATRICES     = (LAPACK g10)
set NVAL         = (9 19)
set NRHS         = (5)
set LWORK        = (0 10000000)

#
# Loop through all matrices ...
#
foreach m ($MATRICES)

  #--------------------------------------------
  # Test matrix types generated in LAPACK-style
  #--------------------------------------------
  if  ($m == 'LAPACK') then
      echo '== LAPACK test matrices'
      foreach n ($NVAL)
        foreach s ($NRHS)
          foreach l ($LWORK)
	    echo ''
            echo 'n='$n 'nrhs='$s 'lwork='$l
            ./stest -t "LA" -l $l -n $n -s $s
          end
        end
      end
  #--------------------------------------------
  # Test a specified sparse matrix
  #--------------------------------------------
  else
    echo '' >> $ofile
    echo '== sparse matrix:' $m
    foreach s ($NRHS)
        foreach l ($LWORK)
	    echo '' >> $ofile
            echo 'nrhs='$s 'lwork='$l
            ./stest -t "SP" -s $s -l $l < ../../example/data/$m
        end
    end
  endif

end
