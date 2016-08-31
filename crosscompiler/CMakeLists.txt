set(SOURCES crosscompiler.cpp)

add_executable(crosscompiler ${SOURCES})
set_property(TARGET crosscompiler PROPERTY FOLDER tools)

set(LIBRARIES
    glslang
    OGLCompiler
    OSDependent
    HLSL
    SPIRV
    SPVRemapper
    glslang-default-resource-limits)

target_link_libraries(crosscompiler ${LIBRARIES})

if(WIN32)
    source_group("Source" FILES ${SOURCES})
endif(WIN32)

install(TARGETS crosscompiler
        RUNTIME DESTINATION bin)
