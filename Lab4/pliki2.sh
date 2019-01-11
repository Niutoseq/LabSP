#!/bin/bash
rm -r ~/Dane
mkdir ~/Dane
find ~ -type f -name "*.txt" -o -name "*.sh" -exec cp -a {} ~/Dane \;
cd ~
chmod ugo+r -R Dane

