#ifndef ENCODE_H_
#define ENCODE_H_

#include "instruction.h"
#include "token_stream.h"

Instr encode_instr(Token_Stream *instr);

instr_type get_instr_type_from_tok(Token *tok);

uint32_t encode_immediate(char *immediate);

#endif /* ENCODE_H_ */