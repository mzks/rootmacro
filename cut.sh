#!/bin/sh

#cut.sh #################################
# Author Mizukoshi Keita
# 2016 May 26
# Usage:
# ./cut.sh filename 10 20
# 10 is number of lines cutting from Head
# 20 is number of lines cutting from Tail
#########################################

FILE=$1
NLINE=(`wc -l $1`)
HEAD=`expr $NLINE - $2 - $3`
TAIL=`expr $NLINE - $3`
head -$TAIL $FILE|tail -$HEAD

