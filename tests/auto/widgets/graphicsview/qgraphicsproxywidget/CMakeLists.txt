# Generated from qgraphicsproxywidget.pro.

#####################################################################
## tst_qgraphicsproxywidget Test:
#####################################################################

add_qt_test(tst_qgraphicsproxywidget
    SOURCES
        tst_qgraphicsproxywidget.cpp
    DEFINES
        QTEST_QPA_MOUSE_HANDLING
    PUBLIC_LIBRARIES
        Qt::CorePrivate
        Qt::Gui
        Qt::GuiPrivate
        Qt::Widgets
        Qt::WidgetsPrivate
)
