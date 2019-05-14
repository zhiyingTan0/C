# !/bin/bash
file_name=$(echo $1 | tr '/' '_' )
a=$(ls -R -tr $( find $1 -name *.jpg))
convert -append $a $file_name.jpg

 


