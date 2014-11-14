#! /bin/bash
# expects the executable that is your C-- compile to be passed in as
# an environment variable
#
# Usage: $ COMPILE=/path/to/my/compile MILESTONE=1 test.sh
#
#          COMPILE should be set to your c-- compiler executable
#          MILESTONE should be 1 | 2 | both, default is 1


if [ -z ${COMPILE+x} ]
then
    echo "expected environment variable COMPILE as your compiler path"
    echo "ex: COMPILE=/my/compiler.exe ./test.sh"
    exit 1
fi

if [ -z ${MILESTONE+x} ]
then
    MILESTONE=1
fi

if [[ $MILESTONE -ne "both" ]]
then
    DIR="./milestone$MILESTONE"
else
    DIR="."
fi

find $DIR -type f -iname "*.c" -print0 | while IFS= read -r -d $'\0' line;
do
    echo "testing : $line"

    make name=$line > /dev/null 2> /dev/null
    cat $line | $COMPILE > mymips
    spim -file mymips | tail -n +2 > myout

    diff <(./a.out) <(cat myout)

    rm -f ./a.out mymips myout
done
