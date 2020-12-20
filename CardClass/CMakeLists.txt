aux_source_directory(. DIR_LIB_SRCS)

add_library(CardClass Card.cpp Card.h Cards.cpp Cards.h ${DIR_LIB_SRCS})