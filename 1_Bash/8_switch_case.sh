#!/bin/bash

name=$1

case "$name" in 
    "Vasya" )
        nameString="Vasiliy"
        greetString="Whatsup"
        ;;
    "Masha" )
        nameString="Maria"
        greetString="Hey"
        ;;
    * )
        greetString="Hello"
        nameString="stranger"
        ;;
esac

echo "$greetString, $nameString!"