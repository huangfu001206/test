file(GLOB source_file *.cpp)
message("message : " ${source_file})
add_executable(Reflection ${source_file})
#add_executable(main.cpp A.cpp Obj.cpp RegistUtils.cpp ClassFactory.cpp main.cpp)