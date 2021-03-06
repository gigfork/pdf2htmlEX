/*
 * Parameters
 *
 * Wang Lu
 * 2012.08.03
 */


#ifndef PARAM_H__
#define PARAM_H__

#include <string>

namespace pdf2htmlEX {

struct Param
{
    // pages
    int first_page, last_page;
    
    // dimensions
    double zoom;
    double fit_width, fit_height;
    int use_cropbox;
    double h_dpi, v_dpi;
    
    // output 
    int single_html;
    int split_pages;
    std::string dest_dir;
    std::string css_filename;
    std::string page_filename;
    std::string outline_filename;
    int process_nontext;
    int process_outline;
    int printing;
    int fallback;
    
    // fonts
    int embed_base_font;
    int embed_external_font;
    std::string font_suffix;
    int decompose_ligature;
    int remove_unused_glyph;
    int auto_hint;
    std::string external_hint_tool;
    int stretch_narrow_glyph;
    int squeeze_wide_glyph;
    
    // text
    double h_eps, v_eps;
    double space_threshold;
    double font_size_multiplier;
    int space_as_offset;
    int tounicode;
    int optimize_text;
    
    // encryption
    std::string owner_password, user_password;
    int no_drm;
    
    // misc.
    int clean_tmp;
    std::string data_dir;
    int css_draw;
    int debug;
    
    // non-optional
    std::string input_filename, output_filename;

    // not a paramater
    std::string tmp_dir;
};

} // namespace pdf2htmlEX

#endif //PARAM_h__
