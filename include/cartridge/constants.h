#pragma once

const char *ROM_TYPES[] = {
    "ROM ONLY",
    "MBC1",
    "MBC1+RAM",
    "MBC1+RAM+BATTERY",
    "0x04 ???",
    "MBC2",
    "MBC2+BATTERY",
    "0x07 ???",
    "ROM+RAM 1",
    "ROM+RAM+BATTERY 1",
    "0x0A ???",
    "MMM01",
    "MMM01+RAM",
    "MMM01+RAM+BATTERY",
    "0x0E ???",
    "MBC3+TIMER+BATTERY",
    "MBC3+TIMER+RAM+BATTERY 2",
    "MBC3",
    "MBC3+RAM 2",
    "MBC3+RAM+BATTERY 2",
    "0x14 ???",
    "0x15 ???",
    "0x16 ???",
    "0x17 ???",
    "0x18 ???",
    "MBC5",
    "MBC5+RAM",
    "MBC5+RAM+BATTERY",
    "MBC5+RUMBLE",
    "MBC5+RUMBLE+RAM",
    "MBC5+RUMBLE+RAM+BATTERY",
    "0x1F ???",
    "MBC6",
    "0x21 ???",
    "MBC7+SENSOR+RUMBLE+RAM+BATTERY",
};

const char *NEW_LIC_CODE[] = {
    "None",
    "Nintendo R&D1",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "Capcom",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "Electronic Arts",
    "???",
    "???",
    "???",
    "???",
    "Hudson Soft",
    "b-ai",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "kss",
    "???",
    "pow",
    "???",
    "PCM Complete",
    "san-x",
    "???",
    "???",
    "Kemco Japan",
    "seta",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "Viacom",
    "Nintendo",
    "Bandai",
    "Ocean/Acclaim",
    "Konami",
    "Hector",
    "???",
    "Taito",
    "Hudson",
    "Banpresto",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "Ubi Soft",
    "Atlus",
    "???",
    "Malibu",
    "???",
    "angel",
    "Bullet-Proof",
    "???",
    "irem",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "Absolute",
    "Acclaim",
    "Activision",
    "American sammy",
    "Konami",
    "Hi tech entertainment",
    "LJN",
    "Matchbox",
    "Mattel",
    "Milton Bradley",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "Titus",
    "Virgin",
    "???",
    "???",
    "LucasArts",
    "???",
    "???",
    "Ocean",
    "???",
    "Electronic Arts",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "Infogrames",
    "Interplay",
    "Broderbund",
    "sculptured",
    "???",
    "sci",
    "???",
    "???",
    "THQ",
    "Accolade",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "misawa",
    "???",
    "???",
    "lozc",
    "???",
    "???",
    "Tokuma Shoten Intermedia",
    "Tsukuda Original",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "Chunsoft",
    "Video system",
    "Ocean/Acclaim",
    "???",
    "Varie",
    "Yonezawa/s\'pal",
    "Kaneko",
    "???",
    "Pack in soft",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "Konami (Yu-Gi-Oh!)",
};

const char *LIC_CODE[] = {
    "None",
    "Nintendo",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "Capcom",
    "Hot-B",
    "Jaleco",
    "Coconuts Japan",
    "Elite Systems",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "EA (Electronic Arts)",
    "???",
    "???",
    "???",
    "???",
    "Hudsonsoft",
    "ITC Entertainment",
    "Yanoman",
    "???",
    "???",
    "Japan Clary",
    "???",
    "Virgin Interactive",
    "???",
    "???",
    "???",
    "???",
    "PCM Complete",
    "San-X",
    "???",
    "???",
    "Kotobuki Systems",
    "Seta",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "Infogrames",
    "Nintendo",
    "Bandai",
    "Indicates that the New licensee code should be used instead.",
    "Konami",
    "HectorSoft",
    "???",
    "???",
    "Capcom",
    "Banpresto",
    "???",
    "???",
    ".Entertainment i",
    "???",
    "Gremlin",
    "???",
    "???",
    "Ubisoft",
    "Atlus",
    "???",
    "Malibu",
    "???",
    "Angel",
    "Spectrum Holoby",
    "???",
    "Irem",
    "Virgin Interactive",
    "???",
    "???",
    "Malibu",
    "???",
    "U.S. Gold",
    "Absolute",
    "Acclaim",
    "Activision",
    "American Sammy",
    "GameTek",
    "Park Place",
    "LJN",
    "Matchbox",
    "???",
    "Milton Bradley",
    "Mindscape",
    "Romstar",
    "Naxat Soft",
    "Tradewest",
    "???",
    "???",
    "Titus",
    "Virgin Interactive",
    "???",
    "???",
    "???",
    "???",
    "???",
    "Ocean Interactive",
    "???",
    "EA (Electronic Arts)",
    "???",
    "???",
    "???",
    "???",
    "Elite Systems",
    "Electro Brain",
    "Infogrames",
    "Interplay",
    "Broderbund",
    "Sculptered Soft",
    "???",
    "The Sales Curve",
    "???",
    "???",
    "t.hq",
    "Accolade",
    "Triffix Entertainment",
    "???",
    "Microprose",
    "???",
    "???",
    "Kemco",
    "Misawa Entertainment",
    "???",
    "???",
    "Lozc",
    "???",
    "???",
    "Tokuma Shoten Intermedia",
    "???",
    "???",
    "???",
    "???",
    "Bullet-Proof Software",
    "Vic Tokai",
    "???",
    "Ape",
    "I'Max",
    "???",
    "Chunsoft Co.",
    "Video System",
    "Tsubaraya Productions Co.",
    "???",
    "Varie Corporation",
    "Yonezawa/S'Pal",
    "Kaneko",
    "???",
    "Arc",
    "Nihon Bussan",
    "Tecmo",
    "Imagineer",
    "Banpresto",
    "???",
    "Nova",
    "???",
    "Hori Electric",
    "Bandai",
    "???",
    "Konami",
    "???",
    "Kawada",
    "Takara",
    "???",
    "Technos Japan",
    "Broderbund",
    "???",
    "Toei Animation",
    "Toho",
    "???",
    "Namco",
    "acclaim",
    "ASCII or Nexsoft",
    "Bandai",
    "???",
    "Square Enix",
    "???",
    "HAL Laboratory",
    "SNK",
    "???",
    "Pony Canyon",
    "Culture Brain",
    "Sunsoft",
    "???",
    "Sony Imagesoft",
    "???",
    "Sammy",
    "Taito",
    "???",
    "Kemco",
    "Squaresoft",
    "Tokuma Shoten Intermedia",
    "Data East",
    "Tonkinhouse",
    "???",
    "Koei",
    "UFL",
    "Ultra",
    "Vap",
    "Use Corporation",
    "Meldac",
    "Pony Canyon or",
    "Angel",
    "Taito",
    "Sofel",
    "Quest",
    "Sigma Enterprises",
    "ASK Kodansha Co.",
    "???",
    "Naxat Soft",
    "Copya System",
    "???",
    "Banpresto",
    "Tomy",
    "LJN",
    "???",
    "NCS",
    "Human",
    "Altron",
    "Jaleco",
    "Towa Chiki",
    "Yutaka",
    "Varie",
    "???",
    "Epcoh",
    "???",
    "Athena",
    "Asmik ACE Entertainment",
    "Natsume",
    "King Records",
    "Atlus",
    "Epic/Sony Records",
    "???",
    "IGS",
    "???",
    "A Wave",
    "???",
    "???",
    "Extreme Entertainment",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "???",
    "LJN",
};
