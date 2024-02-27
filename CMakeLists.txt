cmake_minimum_required(VERSION 3.14)

project(Crm LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(GUEST_WIDGET
    include/guestObjectPrototype.hpp src/guestObjectPrototype.cpp
    include/guestObjectModelPrototype.hpp   src/guestObjectModelPrototype.cpp
    include/guestObjectWidgetPrototype.hpp  src/guestObjectWidgetPrototype.cpp
    include/guestObjectDelegate.hpp src/guestObjectDelegate.cpp
)


set(HEADERS
    include/logindialog.hpp
    include/mainwidget.hpp
    include/mainButtons.hpp
    include/secondButtonLayer.hpp
    include/addGuestDialog.hpp

)

set(SOURCES
    main.cpp
    src/logindialog.cpp
    src/mainwidget.cpp
    src/mainButtons.cpp
    src/secondButtonLayer.cpp
    src/addGuestDialog.cpp

)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

add_executable(Crm
  ${HEADERS}
  ${SOURCES}
  ${GUEST_WIDGET}
  resources/resources.qrc
)
target_link_libraries(Crm Qt6::Core Qt6::Gui Qt6::Widgets)

