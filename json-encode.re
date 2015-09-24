jsonEncode(*str) {
    *json = "";
    for(*i=0;*i<strlen(*str);*i=*i+1) {
        *rep = substr(*str, *i, *i+1);
        if(*rep == "\'") {
            *json = *json ++ "\\\'";
        } else if (*rep == "\"") {
            *json = *json ++ "\\\"";
        } else if (*rep == "\\") {
            *json = *json ++ "\\\\";
        } else if (*rep == "\b") {
            *json = *json ++ "\\b";
        } else if (*rep == "\f") {
            *json = *json ++ "\\f";
        } else if (*rep == "\n") {
            *json = *json ++ "\\n";
        } else if (*rep == "\r") {
            *json = *json ++ "\\r";
        } else if (*rep == "\t") {
            *json = *json ++ "\\t";
        } else {
            *json = *json ++ *rep;
        }
    }
    *json;
}
