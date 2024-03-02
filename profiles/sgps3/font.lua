-- WARNING, 0-INDEXED ARRAYS AHEAD

root.Fonts = {
    ["Default"] = {
        Type = FontType.Basic,
        Sheet = "Font",
        Columns = 64,
        Rows = 14,
        Widths = {},
        DesignColWidth = 32,
        LineSpacing = 22,
    }
};

local westernWidths = {
    [0]=0x20, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
        0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
        0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
        0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
        0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
        0x11, 0x11, 0x11, 0x0C, 0x11, 0x11, 0x0F, 0x11, 0x11, 0x11, 0x11, 0x11,
        0x11, 0x11, 0x13, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
        0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
        0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
        0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
        0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x14, 0x10, 0x14, 0x14,
        0x15, 0x14, 0x14, 0x14, 0x14, 0x14, 0x1A, 0x15, 0x17, 0x18, 0x15, 0x14,
        0x19, 0x17, 0x0B, 0x14, 0x17, 0x15, 0x1E, 0x18, 0x1A, 0x16, 0x1B, 0x15,
        0x14, 0x16, 0x17, 0x1A, 0x1F, 0x19, 0x1A, 0x14, 0x13, 0x14, 0x13, 0x15,
        0x13, 0x11, 0x14, 0x14, 0x0A, 0x0C, 0x14, 0x0A, 0x1E, 0x14, 0x15, 0x14,
        0x15, 0x0E, 0x12, 0x10, 0x14, 0x15, 0x1F, 0x15, 0x15, 0x11, 0x11, 0x11,
        0x09, 0x09, 0x0A, 0x0A, 0x12, 0x0A, 0x0A, 0x09, 0x07, 0x07, 0x0E, 0x0E,
        0x0B, 0x0B, 0x0C, 0x0C, 0x0C, 0x0C, 0x0B, 0x0B, 0x0E, 0x0D, 0x11, 0x10,
        0x0C, 0x0E, 0x0C, 0x0E, 0x0A, 0x0C, 0x18, 0x17, 0x0A, 0x0A, 0x0E, 0x1E,
        0x1C, 0x1C, 0x16, 0x1E, 0x19, 0x18, 0x14, 0x18, 0x1B, 0x1B, 0x1C, 0x1A,
        0x18, 0x1B, 0x1A, 0x16, 0x18, 0x1C, 0x1C, 0x19, 0x1B, 0x1C, 0x16, 0x18,
        0x19, 0x1A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x10, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
};

for i = 0, (64 * 14) - 1 do
    if i < #westernWidths - 1 then
        root.Fonts["Default"].Widths[i] = westernWidths[i];
    else
        root.Fonts["Default"].Widths[i] = root.Fonts["Default"].DesignColWidth;
    end
end