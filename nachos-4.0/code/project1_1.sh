#/bin/bash
rm userprog/nachos
make clean all
./userprog/nachos -e test/test1 -e test/test2
