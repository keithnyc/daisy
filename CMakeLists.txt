project (com.github.keithnyc.daisy)

cmake_minimum_required (VERSION 2.6)

list (APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)
list (APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/src)

set (DATADIR "${CMAKE_INSTALL_PREFIX}/share")


set (PKGDATADIR "${DATADIR}/com.github.keithnyc.daisy")

set (EXEC_NAME "com.github.keithnyc.daisy")
set (RELEASE_NAME "Alpha 1")
set (VERSION "0.1a")
set (VERSION_INFO "Very first release")

find_package(PkgConfig)
pkg_check_modules(DEPS REQUIRED
        gtk+-3.0>=3.16
        granite>=0.3.0
        glib-2.0>=2.39)

add_definitions(${DEPS_CFLAGS})
link_libraries(${DEPS_LIBRARIES})
link_directories(${DEPS_LIBRARY_DIRS})

# Translation files
set (GETTEXT_PACKAGE "${CMAKE_PROJECT_NAME}")
add_definitions (-DGETTEXT_PACKAGE=\"${GETTEXT_PACKAGE}\")
add_subdirectory (po)

# make sure we have vala
find_package(Vala REQUIRED)
include(ValaVersion)
ensure_vala_version("0.16" MINIMUM)

 # files we want to compile
include(ValaPrecompile)
vala_precompile(VALA_C ${EXEC_NAME}
    src/Daisy.vala
    src/DaisyWindow.vala
    src/StackManager.vala
    src/Constants.vala
    src/EndPoint.vala
    src/ListBox.vala
    src/ListBoxRow.vala
    src/EndPointListManager.vala
    src/Utils.vala
    src/Components/HeaderBar.vala    
    src/Views/EndPointView.vala
    PACKAGES
        gtk+-3.0 
        granite
        glib-2.0       
)

add_executable(${EXEC_NAME} ${VALA_C})
install (TARGETS ${EXEC_NAME} RUNTIME DESTINATION bin)
install (FILES ${CMAKE_CURRENT_SOURCE_DIR}/data/com.github.keithnyc.daisy.desktop DESTINATION ${DATADIR}/applications/)
install (FILES ${CMAKE_CURRENT_SOURCE_DIR}/data/com.github.keithnyc.daisy.appdata.xml DESTINATION ${DATADIR}/metainfo/)

