find_package(PkgConfig)

pkg_check_modules(Tslib tslib IMPORTED_TARGET)

if (NOT TARGET PkgConfig::Tslib)
    set(Tslib_FOUND 0)
endif()
