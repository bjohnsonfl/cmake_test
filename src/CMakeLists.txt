project(main)

add_executable(${PROJECT_NAME} main.c)

target_link_libraries(${PROJECT_NAME} 
                        api
                        app1
                        app2)