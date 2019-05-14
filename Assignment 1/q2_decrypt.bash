# !/bin/bash
codebook1=$(grep a $1)
codebook2=$(grep A $1)
input=$2
cat $input | tr $codebook1 a-z | tr $codebook2 A-Z

