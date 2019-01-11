#!/bin/bash

echo $USER > dane.dat
echo $SHELL >> dane.dat
echo $OSTYPE >> dane.dat
echo $HOME >> dane.dat
echo `date` >> dane.dat
