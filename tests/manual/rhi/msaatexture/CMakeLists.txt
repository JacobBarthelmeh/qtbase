# Generated from msaatexture.pro.

#####################################################################
## msaatexture Binary:
#####################################################################

add_qt_manual_test(msaatexture
    GUI
    SOURCES
        msaatexture.cpp
    PUBLIC_LIBRARIES
        Qt::Gui
        Qt::GuiPrivate
)

# Resources:
set_source_files_properties("../shared/color.frag.qsb"
    PROPERTIES QT_RESOURCE_ALIAS "color.frag.qsb"
)
set_source_files_properties("../shared/color.vert.qsb"
    PROPERTIES QT_RESOURCE_ALIAS "color.vert.qsb"
)
set_source_files_properties("../shared/texture.frag.qsb"
    PROPERTIES QT_RESOURCE_ALIAS "texture.frag.qsb"
)
set_source_files_properties("../shared/texture.vert.qsb"
    PROPERTIES QT_RESOURCE_ALIAS "texture.vert.qsb"
)
set_source_files_properties("../shared/texture_ms4.frag.qsb"
    PROPERTIES QT_RESOURCE_ALIAS "texture_ms4.frag.qsb"
)
set(msaatexture_resource_files
    "../shared/color.frag.qsb"
    "../shared/color.vert.qsb"
    "../shared/texture.frag.qsb"
    "../shared/texture.vert.qsb"
    "../shared/texture_ms4.frag.qsb"
)

add_qt_resource(msaatexture "msaatexture"
    PREFIX
        "/"
    FILES
        ${msaatexture_resource_files}
)


#### Keys ignored in scope 1:.:.:msaatexture.pro:<TRUE>:
# TEMPLATE = "app"
