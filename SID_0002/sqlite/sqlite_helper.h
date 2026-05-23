#pragma once
#include "sqlite3.h"

/*
 * ArtC-friendly SQLite wrapper
 * 将 sqlite3* / sqlite3** / char** 等不透明指针统一包装为 void*，
 * 便于 ArtC FFI 通过 void* 类型安全调用 SQLite API。
 */

int   artc_sqlite_open(const char* filename, void** ppDb);
int   artc_sqlite_exec(void* db, const char* sql, void** errmsg);
void  artc_sqlite_close(void* db);
void  artc_sqlite_free(void* ptr);
const char* artc_sqlite_errmsg(void* db);
