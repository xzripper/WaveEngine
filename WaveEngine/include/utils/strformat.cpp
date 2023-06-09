#include "strformat.h"

#include <utility>

std::string StringFormat::format(std::string fstring, std::vector<std::string> flist) {
    std::string out_fstring = std::move(fstring);

    int format_placeholders_amount = static_cast<int>(flist.size());

    for(int placeholder = 0; placeholder < format_placeholders_amount; ++placeholder) {
        out_fstring = std::regex_replace(out_fstring, std::regex("%" + std::to_string(placeholder + 1)), flist[placeholder]);
    }

    return out_fstring;
}
