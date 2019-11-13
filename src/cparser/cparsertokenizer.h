/*
 * cparsertokenizer.h
 *
 *  Created on: 12/11/2019
 *      Author: blue
 */

#ifndef CPARSERTOKENIZER_H_
#define CPARSERTOKENIZER_H_

namespace cparser {

#define CPARSER_TOKEN_FLAG_PARSE_INCLUDE		1
#define CPARSER_TOKEN_FLAG_PARSE_DEFINE			2

// Token type
enum token_type_e
{
	CPARSER_TOKEN_TYPE_SINGLE_CHAR = 0,
	CPARSER_TOKEN_TYPE_IDENTIFIER,
	CPARSER_TOKEN_TYPE_NUMBER_LITERAL,
	CPARSER_TOKEN_TYPE_STRING_LITERAL,
	CPARSER_TOKEN_TYPE_INCLUDE_LITERAL,
	CPARSER_TOKEN_TYPE_DEFINE_LITERAL,
	CPARSER_TOKEN_TYPE_CHAR_LITERAL,
	CPARSER_TOKEN_TYPE_OPERATOR,
	CPARSER_TOKEN_TYPE_C_COMMENT,
	CPARSER_TOKEN_TYPE_CPP_COMMENT,
	CPARSER_TOKEN_TYPE_INVALID,
};

// Parse token
struct token_s
{
	token_type_e type;
	uint32_t row;
	uint32_t column;
	uint8_t str[MAX_SENTENCE_LENGTH + 1];
};

class cparser_tokenizer {

private:
	static bool CharInSet(uint8_t c, const uint8_t *set);
	static int16_t NextChar(FILE *f, uint32_t &row, uint32_t &column);

public:
	static bool NextToken(FILE *f, token_s *tt, uint32_t flags);

};

} /* namespace cparser */

#endif /* CPARSERTOKENIZER_H_ */
