/*
 * blogc: A blog compiler.
 * Copyright (C) 2014-2019 Rafael G. Martins <rafael@rafaelmartins.eng.br>
 *
 * This program can be distributed under the terms of the BSD License.
 * See the file LICENSE.
 */

#ifndef _MAKE_EXEC_H
#define _MAKE_EXEC_H

#include <stdbool.h>
#include "../common/error.h"
#include "../common/utils.h"
#include "ctx.h"
#include "settings.h"

char* bm_exec_find_binary(const char *argv0, const char *bin, const char *env);
int bm_exec_command(const char *cmd, const char *input, char **output,
    char **error, bc_error_t **err);
char* bm_exec_build_blogc_cmd(const char *blogc_bin, bm_settings_t *settings,
    bc_trie_t *global_variables, bc_trie_t *local_variables, bool listing,
    const char *listing_entry, const char *template, const char *output, bool dev,
    bool sources_stdin);
int bm_exec_blogc(bm_ctx_t *ctx, bc_trie_t *global_variables, bc_trie_t *local_variables,
    bool listing, bm_filectx_t *listing_entry, bm_filectx_t *template,
    bm_filectx_t *output, bc_slist_t *sources, bool only_first_source);
int bm_exec_blogc_runserver(bm_ctx_t *ctx, const char *host, const char *port,
    const char *threads);

#endif /* _MAKE_EXEC_H */
