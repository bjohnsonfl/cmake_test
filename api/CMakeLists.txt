project(api)

add_library(${PROJECT_NAME} SHARED api.c)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/)

set_property(TARGET ${PROJECT_NAME} PROPERTY POSITION_INDEPENDENT_CODE ON)


include_directories(${PROJECT_SOURCE_DIR})