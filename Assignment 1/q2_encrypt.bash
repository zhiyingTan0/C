# !/bin/bash
codebook1=$(grep a $1)
codebook2=$(grep A $1)
input=$2
cat $input | tr a-z $codebook1 | tr A-Z $codebook2
