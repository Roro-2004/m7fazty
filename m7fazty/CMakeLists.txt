cmake_minimum_required(VERSION 3.5)

project(m7fazty VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(m7fazty
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        user.h user.cpp user.ui


        sign_up.h sign_up.cpp sign_up.ui
        login.h login.cpp login.ui
        admin_c.h admin_c.cpp
        user_c.h user_c.cpp
        transiction.h transiction.cpp
        account.h account.cpp
        requestmoney_dialog.h requestmoney_dialog.cpp requestmoney_dialog.ui
        sendmoney_dialog.h sendmoney_dialog.cpp sendmoney_dialog.ui
        viewbalance_dialog.h viewbalance_dialog.cpp viewbalance_dialog.ui
        viewtranshistory_dialog.h viewtranshistory_dialog.cpp viewtranshistory_dialog.ui
        editprofile_dialog.h editprofile_dialog.cpp editprofile_dialog.ui
        files.h files.cpp
        matrial.qrc
        admin.h admin.cpp admin.ui


        adjust_balance_dialog.h adjust_balance_dialog.cpp adjust_balance_dialog.ui
        view_users_dialog.h view_users_dialog.cpp view_users_dialog.ui
        view_trans_dialog.h view_trans_dialog.cpp view_trans_dialog.ui




        add_edit_delete.h add_edit_delete.cpp add_edit_delete.ui
        suspend_activate.h suspend_activate.cpp suspend_activate.ui
        confirm_pass_dialog.h confirm_pass_dialog.cpp confirm_pass_dialog.ui





    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET m7fazty APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(m7fazty SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(m7fazty
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(m7fazty PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.m7fazty)
endif()
set_target_properties(m7fazty PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS m7fazty
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(m7fazty)
endif()
