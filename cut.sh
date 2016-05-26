# /bin/sh
file=$1
head -8208 $file | tail -8192  > $file.dat
echo "input file:" $file
echo "output file:" $file.dat
