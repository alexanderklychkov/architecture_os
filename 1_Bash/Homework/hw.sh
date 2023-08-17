#!/bin/bash

DIR=./attachments/

if ! [ -d "$DIR" ]; then
    mkdir $DIR
fi

cd $DIR || exit

for (( i=1; i <= 20; i++ ))
do
    curl https://loremflickr.com/800/400 -L > image_$i
done