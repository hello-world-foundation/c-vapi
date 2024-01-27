#include <glib.h>
#include <stdlib.h>
typedef struct _test {
	gint name;
	gchar* txt;
} test;

test * test_new();
void test_unref(test* t);
