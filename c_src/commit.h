#ifndef GEEF_COMMIT_H
#define GEEF_COMMIT_H

ERL_NIF_TERM geef_commit_tree_id(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);
ERL_NIF_TERM geef_commit_tree(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);
ERL_NIF_TERM geef_commit_create(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);
ERL_NIF_TERM geef_commit_message(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]);
#endif
