project(VectorHoriVert)

set(VECTOR_SRC main.cpp VectTypes/Vect.cpp VectTypes/VectHori.cpp VectTypes/VectVert.cpp)
set(VECTOR_HDR VectTypes/Vect.hpp VectTypes/VectHori.hpp VectTypes/VectVert.hpp Factory/Fabric.hpp)

#add_executable(${PROJECT_NAME} ${SRC_LIST})
#add_library(vector STATIC ${VECTOR_SRC} ${VECTOR_HDR})
add_executable(${PROJECT_NAME} ${VECTOR_SRC} ${VECTOR_HDR})