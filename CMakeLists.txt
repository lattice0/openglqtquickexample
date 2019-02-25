cmake_minimum_required(VERSION 3.1.0)

project(orwell)

find_library(AVCODEC_LIBRARY avcodec)
find_library(AVUTIL_LIBRARY avutil)
find_library(SWSCALE_LIBRARY swscale)


set(CMAKE_INCLUDE_CURRENT_DIR ON) # Find includes in corresponding build directories
set(CMAKE_AUTOMOC ON) # Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOUIC ON) # Create code from a list of Qt designer ui files

find_package(OpenGL REQUIRED)
find_package(Boost COMPONENTS thread system REQUIRED) #todo: erase system, not necessary I guess
find_package(Qt5 COMPONENTS Qml Quick Gui Widgets Multimedia MultimediaWidgets) #OpenGLWidgets) 

#qt5_add_resources(QRCS resources.qrc) #what this does?
qt5_add_resources(qml_QRC qml.qrc)    #what this does?

file(GLOB SRCS "*.cpp")

add_executable(app ${SRCS} ${qml_QRC})

#TODO: decide either qtquick or qt widgets libs
target_link_libraries( app PRIVATE ${AVCODEC_LIBRARY} ${AVUTIL_LIBRARY} ${SWSCALE_LIBRARY} Qt5::Widgets Qt5::Multimedia Qt5::MultimediaWidgets Boost::thread Qt5::Qml Qt5::Quick)
