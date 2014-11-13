name="milestone1/test.c"

default:
	echo "#include \"externs.h\"" | cat - $(name) | gcc -xc -

.PHONY: clean

clean:
	rm -f a.out
