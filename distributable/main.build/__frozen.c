// This provides the frozen (compiled bytecode) files that are included if
// any.
#include <Python.h>

#include "nuitka/constants_blob.h"

// Blob from which modules are unstreamed.
#define stream_data constant_bin

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    ssize_t start;
    int size;
};

void copyFrozenModulesTo( struct _frozen *destination )
{
    struct frozen_desc frozen_modules[] = {
        { "base64", 6858115, 11505 },
        { "codecs", 6869620, 37965 },
        { "copy_reg", 6907585, 5218 },
        { "encodings", 6912803, -4418 },
        { "encodings.aliases", 6917221, 8774 },
        { "encodings.ascii", 6925995, 2393 },
        { "encodings.base64_codec", 6928388, 4011 },
        { "encodings.big5", 6932399, 1846 },
        { "encodings.big5hkscs", 6934245, 1886 },
        { "encodings.bz2_codec", 6936131, 4959 },
        { "encodings.charmap", 6941090, 3675 },
        { "encodings.cp037", 6944765, 2983 },
        { "encodings.cp1006", 6947748, 3069 },
        { "encodings.cp1026", 6950817, 2997 },
        { "encodings.cp1140", 6953814, 2983 },
        { "encodings.cp1250", 6956797, 3020 },
        { "encodings.cp1251", 6959817, 3017 },
        { "encodings.cp1252", 6962834, 3020 },
        { "encodings.cp1253", 6965854, 3033 },
        { "encodings.cp1254", 6968887, 3022 },
        { "encodings.cp1255", 6971909, 3041 },
        { "encodings.cp1256", 6974950, 3019 },
        { "encodings.cp1257", 6977969, 3027 },
        { "encodings.cp1258", 6980996, 3025 },
        { "encodings.cp424", 6984021, 3013 },
        { "encodings.cp437", 6987034, 8218 },
        { "encodings.cp500", 6995252, 2983 },
        { "encodings.cp720", 6998235, 3080 },
        { "encodings.cp737", 7001315, 8446 },
        { "encodings.cp775", 7009761, 8232 },
        { "encodings.cp850", 7017993, 7965 },
        { "encodings.cp852", 7025958, 8234 },
        { "encodings.cp855", 7034192, 8415 },
        { "encodings.cp856", 7042607, 3045 },
        { "encodings.cp857", 7045652, 7955 },
        { "encodings.cp858", 7053607, 7935 },
        { "encodings.cp860", 7061542, 8201 },
        { "encodings.cp861", 7069743, 8212 },
        { "encodings.cp862", 7077955, 8347 },
        { "encodings.cp863", 7086302, 8212 },
        { "encodings.cp864", 7094514, 8343 },
        { "encodings.cp865", 7102857, 8212 },
        { "encodings.cp866", 7111069, 8447 },
        { "encodings.cp869", 7119516, 8259 },
        { "encodings.cp874", 7127775, 3111 },
        { "encodings.cp875", 7130886, 2980 },
        { "encodings.cp932", 7133866, 1854 },
        { "encodings.cp949", 7135720, 1854 },
        { "encodings.cp950", 7137574, 1854 },
        { "encodings.euc_jis_2004", 7139428, 1910 },
        { "encodings.euc_jisx0213", 7141338, 1910 },
        { "encodings.euc_jp", 7143248, 1862 },
        { "encodings.euc_kr", 7145110, 1862 },
        { "encodings.gb18030", 7146972, 1870 },
        { "encodings.gb2312", 7148842, 1862 },
        { "encodings.gbk", 7150704, 1838 },
        { "encodings.hex_codec", 7152542, 3963 },
        { "encodings.hp_roman8", 7156505, 4266 },
        { "encodings.hz", 7160771, 1830 },
        { "encodings.idna", 7162601, 6564 },
        { "encodings.iso2022_jp", 7169165, 1899 },
        { "encodings.iso2022_jp_1", 7171064, 1915 },
        { "encodings.iso2022_jp_2", 7172979, 1915 },
        { "encodings.iso2022_jp_2004", 7174894, 1939 },
        { "encodings.iso2022_jp_3", 7176833, 1915 },
        { "encodings.iso2022_jp_ext", 7178748, 1931 },
        { "encodings.iso2022_kr", 7180679, 1899 },
        { "encodings.iso8859_1", 7182578, 3022 },
        { "encodings.iso8859_10", 7185600, 3037 },
        { "encodings.iso8859_11", 7188637, 3131 },
        { "encodings.iso8859_13", 7191768, 3040 },
        { "encodings.iso8859_14", 7194808, 3058 },
        { "encodings.iso8859_15", 7197866, 3037 },
        { "encodings.iso8859_16", 7200903, 3039 },
        { "encodings.iso8859_2", 7203942, 3022 },
        { "encodings.iso8859_3", 7206964, 3029 },
        { "encodings.iso8859_4", 7209993, 3022 },
        { "encodings.iso8859_5", 7213015, 3023 },
        { "encodings.iso8859_6", 7216038, 3067 },
        { "encodings.iso8859_7", 7219105, 3030 },
        { "encodings.iso8859_8", 7222135, 3061 },
        { "encodings.iso8859_9", 7225196, 3022 },
        { "encodings.johab", 7228218, 1854 },
        { "encodings.koi8_r", 7230072, 3044 },
        { "encodings.koi8_u", 7233116, 3030 },
        { "encodings.latin_1", 7236146, 2423 },
        { "encodings.mac_arabic", 7238569, 8168 },
        { "encodings.mac_centeuro", 7246737, 3091 },
        { "encodings.mac_croatian", 7249828, 3099 },
        { "encodings.mac_cyrillic", 7252927, 3089 },
        { "encodings.mac_farsi", 7256016, 3003 },
        { "encodings.mac_greek", 7259019, 3043 },
        { "encodings.mac_iceland", 7262062, 3082 },
        { "encodings.mac_latin2", 7265144, 5061 },
        { "encodings.mac_roman", 7270205, 3060 },
        { "encodings.mac_romanian", 7273265, 3100 },
        { "encodings.mac_turkish", 7276365, 3083 },
        { "encodings.mbcs", 7279448, 2131 },
        { "encodings.palmos", 7281579, 3220 },
        { "encodings.ptcp154", 7284799, 5044 },
        { "encodings.punycode", 7289843, 8264 },
        { "encodings.quopri_codec", 7298107, 3829 },
        { "encodings.raw_unicode_escape", 7301936, 2328 },
        { "encodings.rot_13", 7304264, 3824 },
        { "encodings.shift_jis", 7308088, 1886 },
        { "encodings.shift_jis_2004", 7309974, 1926 },
        { "encodings.shift_jisx0213", 7311900, 1926 },
        { "encodings.string_escape", 7313826, 2187 },
        { "encodings.tis_620", 7316013, 3092 },
        { "encodings.undefined", 7319105, 2743 },
        { "encodings.unicode_escape", 7321848, 2276 },
        { "encodings.unicode_internal", 7324124, 2302 },
        { "encodings.utf_16", 7326426, 5440 },
        { "encodings.utf_16_be", 7331866, 2102 },
        { "encodings.utf_16_le", 7333968, 2102 },
        { "encodings.utf_32", 7336070, 6032 },
        { "encodings.utf_32_be", 7342102, 1995 },
        { "encodings.utf_32_le", 7344097, 1995 },
        { "encodings.utf_7", 7346092, 1995 },
        { "encodings.utf_8", 7348087, 2054 },
        { "encodings.utf_8_sig", 7350141, 5257 },
        { "encodings.uu_codec", 7355398, 5091 },
        { "encodings.zlib_codec", 7360489, 4879 },
        { "functools", 7365368, 6360 },
        { "locale", 7371728, 55430 },
        { "quopri", 7427158, 6698 },
        { "re", 7433856, 13657 },
        { "sre_compile", 7447513, 12731 },
        { "sre_constants", 7460244, 6247 },
        { "sre_parse", 7466491, 20441 },
        { "string", 7486932, 21063 },
        { "stringprep", 7507995, 14719 },
        { "struct", 7522714, 243 },
        { "types", 7522957, 2801 },
        { NULL, 0, 0 }
    };

    struct frozen_desc *current = frozen_modules;

    for(;;)
    {
        destination->name = (char *)current->name;
        destination->code = (unsigned char *)&constant_bin[ current->start ];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}
