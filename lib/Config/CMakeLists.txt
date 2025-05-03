aux_source_directory(. DIR_Config_SRCS)

# Generate the link library
add_library(Config ${DIR_Config_SRCS})
target_link_libraries(Config PUBLIC pico_stdlib hardware_spi)