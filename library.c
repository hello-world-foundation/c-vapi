#include <glib.h>
#include <library.h>
test * test_new(){
	test* t = calloc(1,sizeof(test*));
	t->txt = (gchar*)"Hello";
	return t;
}

void test_unref(test* t){
    free(t);
}