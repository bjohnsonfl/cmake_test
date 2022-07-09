project(app1)

add_library(${PROJECT_NAME} OBJECT app1.c)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/)

target_link_libraries( ${PROJECT_NAME}  api)