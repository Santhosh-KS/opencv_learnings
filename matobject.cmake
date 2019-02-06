PROJECT(MATOBJ)

SET(bin_src src/main.cpp)

SET(bin_name MatOject)

#############  Common Instructions for all Users  ############
ADD_EXECUTABLE(${bin_name} ${bin_src}) 
TARGET_COMPILE_FEATURES(${bin_name} PUBLIC  cxx_lambda_init_captures)
TARGET_INCLUDE_DIRECTORIES(${bin_name} PUBLIC inc)
TARGET_LINK_LIBRARIES(${bin_name} ${OpenCV_LIBS} )
