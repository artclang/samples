#include <stddef.h>
#include "sqlite_helper.h"

int artc_sqlite_open(const char* filename, void** ppDb) {
	return sqlite3_open(filename, (sqlite3**)ppDb);
}

int artc_sqlite_exec(void* db, const char* sql, void** errmsg) {
	return sqlite3_exec((sqlite3*)db, sql, NULL, NULL, (char**)errmsg);
}

void artc_sqlite_close(void* db) {
	sqlite3_close((sqlite3*)db);
}

void artc_sqlite_free(void* ptr) {
	sqlite3_free(ptr);
}

const char* artc_sqlite_errmsg(void* db) {
	return sqlite3_errmsg((sqlite3*)db);
}
