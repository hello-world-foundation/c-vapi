build:
	valac main.vala library.c --pkg=library --vapidir=. -X -I.

clean:
	rm -f main