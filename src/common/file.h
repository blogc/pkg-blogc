/*
 * blogc: A blog compiler.
 * Copyright (C) 2014-2019 Rafael G. Martins <rafael@rafaelmartins.eng.br>
 *
 * This program can be distributed under the terms of the BSD License.
 * See the file LICENSE.
 */

#ifndef _FILE_H
#define _FILE_H

#include <stddef.h>
#include <stdbool.h>
#include "error.h"

#define BC_FILE_CHUNK_SIZE 1024

char* bc_file_get_contents(const char *path, bool utf8, size_t *len, bc_error_t **err);

#endif /* _FILE_H */
