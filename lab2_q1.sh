#!/bin/bash
echo "what is ur name?"
read name
mkdir $name
cd $name
touch "$name.cpp"

