aux_source_directory(. DIR_LIB_SRCS)

add_library(GeometryClass Circle.h Circle.cpp Triangle.h Triangle.cpp Cylinder.h Cylinder.h PlaneGeometry.h Geometry.h ${DIR_LIB_SRCS})