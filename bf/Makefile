OUT = luke millie delan
all: $(OUT)
test: all
	for i in $(OUT); do ./test.sh $$i; done
golf:
	dos2unix *.c
	wc -c *.c
clean:
	rm -f $(OUT) *.stackdump
