aux_source_directory(. DIR_LIB_SRCS)

include_directories(Date Time)

add_library(DateTimeClass Date Time DateTime.cpp DateTime.h ${DIR_LIB_SRCS})