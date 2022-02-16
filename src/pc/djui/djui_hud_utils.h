#ifndef DJUI_HUD_UTILS_H
#define DJUI_HUD_UTILS_H

enum HudUtilsResolution {
    RESOLUTION_DJUI,
    RESOLUTION_N64,
    RESOLUTION_COUNT,
};

enum DjuiFontType {
    FONT_NORMAL,
    FONT_MENU,
    FONT_HUD,
    FONT_COUNT,
};

void djui_hud_set_resolution(enum HudUtilsResolution resolutionType);
void djui_hud_set_font(enum DjuiFontType fontType);
void djui_hud_set_color(u8 r, u8 g, u8 b, u8 a);

u32 djui_hud_get_screen_width(void);
u32 djui_hud_get_screen_height(void);

f32 djui_hud_measure_text(const char* message);
void djui_hud_print_text(const char* message, float x, float y, float scale);
void djui_hud_render_texture(struct TextureInfo* texInfo, f32 x, f32 y, f32 scaleW, f32 scaleH);

#endif