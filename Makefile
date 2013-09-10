all: luke millie delan
luke: luke.c
millie: millie.c
delan: delan.c
test: all
	./test.sh luke
	./test.sh millie
	./test.sh delan
golf:
	dos2unix *.c
	wc -c *.c
clean:
	rm -f luke millie delan *.stackdump
