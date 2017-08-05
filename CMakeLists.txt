cmake_minimum_required(VERSION 3.7)
project(Modeling_ballistic_movement)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOMOC ON)

#For a basic project, you should probably only need to edit these variables
#Base QT directory
set(QT_PATH "E:/QT")
#QT Version used, e.g_. Probably found in ${QT_PATH}
set(QT_VERSION "5.8")
#mingw used. Probably found in ${QT_PATH}/${QT_VERSION/
set(QT_MINGW_VERSION "mingw53_32")
#Libraries to link to
set(QT_LIBRARIES Qt5::Core Qt5::Widgets Qt5::Gui)
#Libraries required. Probably the same as above minus the '::'. find_package() will be called on these
set(QT_LIBRARIES_REQUIRED Qt5Core Qt5Widgets Qt5Gui)
#################################################################

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Gui REQUIRED)

#Build tool paths
set(QT_MINGW "${QT_PATH}/${QT_VERSION}/${QT_MINGW_VERSION}")
set(QT_MINGW_TOOLS "${QT_PATH}/Tools/${QT_MINGW_VERSION}")
set(QT_MINGW_BIN ${QT_MINGW}/bin)

############ Add information about author #################################
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

include(generate_product_version)
generate_product_version(
        ProductVersionFiles
        NAME "Modeling ballistic movement"
        FILE_DESCRIPTION "Modeling ballistic movement using graphs"
        ICON ${PATH_TO_APPLICATION_ICON}
        COMPANY_NAME "Anton Klochkov"
        VERSION_MAJOR 1
        VERSION_MINOR 0
        VERSION_PATCH ${BUILD_COUNTER}
        VERSION_REVISION ${BUILD_REVISION}
)
###########################################################################


set(SOURCE_FILES
        main.cpp
        src/ui_mainwindow.h
        src/mainwindow.h
        src/mainwindow.cpp
        src/Graphic_widget/GraphWidget.h
        src/Graphic_widget/GraphWidget.cpp
        src/Graphic_widget/DeskPainter.h
        src/Graphic_widget/DeskPainter.cpp
        src/Graphic_widget/GraphPainter.cpp
        src/Graphic_widget/GraphPainter.h
        src/Physical_engine/PhysicalEngine.cpp
        src/Physical_engine/PhysicalEngine.h
        src/Queue/QueueWithMax.h
        src/Queue/StackWithMax.h)


add_executable(Modeling_ballistic_movement WIN32 ${SOURCE_FILES} ${ProductVersionFiles})
target_link_libraries(${PROJECT_NAME} ${QT_LIBRARIES} ${QT_QTMAIN_LIBRARY})