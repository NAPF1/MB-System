#
# Gets variables from root CMakeLists
#

message("in mbgrdviz")

add_executable(mbgrdviz
               mbgrdviz_callbacks.c  mbgrdviz_creation.c  mbgrdviz_main.c)

target_include_directories(mbgrdviz
                           PUBLIC
                           .
                           ${GMT_INCLUDE_DIRS}
                           ${GDAL_INCLUDE_DIRS}
                           ${CMAKE_SOURCE_DIR}/src/mbio
                           ${CMAKE_SOURCE_DIR}/src/mbaux
                           ${CMAKE_SOURCE_DIR}/src/mbview
                           ${CMAKE_SOURCE_DIR}/src/bsio
                           ${CMAKE_SOURCE_DIR}/src/surf
                           ${CMAKE_SOURCE_DIR}/src/gsf)                        

# link_directories($GMT_LIBRARIES)
target_link_libraries(mbgrdviz
                      PRIVATE
                      mbio
                      mbaux
                      mbview
                      mbbsio
                      mbsapi
                      ${GSF_LIB}
		      ${R7KR_LIB}
		      ${MFRAME_LIB}
		      ${GMT_LIBRARIES}
		      ${NETCDF_LIBRARIES}
		      ${MOTIF_LIBRARIES}
		      ${X11_LIBRARIES}
		      ${X11_XT_LIBRARIES}		      
		      ${OPENGL_LIBRARIES}
		      ${GDAL_LIBRARIES}
		      ${PROJ_LIBRARIES}
                      m
                      pthread)
                           
                           
install(TARGETS mbgrdviz
	DESTINATION ${CMAKE_INSTALL_BINDIR})

