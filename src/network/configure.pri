# custom tests

defineTest(qtConfLibrary_openssl) {
    eval(libs = $$getenv("OPENSSL_LIBS"))
    !isEmpty(libs) {
        !qtConfResolveLibs($${1}.libs, $$libs): \
            return(false)
        return(true)
    }
    qtLog("$OPENSSL_LIBS is not set.")
    return(false)
}
defineTest(qtConfLibrary_wolfssl) {
    eval(libs = $$getenv("WOLFSSL_LIBS"))
    !isEmpty(libs) {
        !qtConfResolveLibs($${1}.libs, $$libs): \
            return(false)
        return(true)
    }
    qtLog("$WOLFSSL_LIBS is not set.")
    return(false)
}

