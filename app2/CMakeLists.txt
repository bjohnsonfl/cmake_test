project(app2)

add_library(${PROJECT_NAME} OBJECT app2.c)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/)