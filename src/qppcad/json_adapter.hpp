#ifndef QPPCAD_JSON_ADAPTER
#define QPPCAD_JSON_ADAPTER
#include <qppcad/qppcad.hpp>
#include <fifo_map.hpp>
#include <nlohmann/json.hpp>

namespace qpp {

  namespace cad {

    template<class K, class V, class dummy_compare, class A>
    using workaround_fifo_map = nlohmann::fifo_map<K, V, nlohmann::fifo_map_compare<K>, A>;

    using json =
    nlohmann::basic_json<workaround_fifo_map,
    std::vector,
    std::string,
    bool,
    std::int64_t,
    std::uint64_t,
    float>;

    const auto QPP_CAD_JSON_VERSION = "0.2";
    //qjson v0.1
    const auto JSON_QPPCAD_VERSION = "qppcad_file_version";
    const auto JSON_WS_NAME        = "ws_name";
    const auto JSON_BG_CLR         = "bg_clr";
    const auto JSON_OBJECTS        = "objects";
    const auto JSON_WS_ITEM_NAME   = "name";
    const auto JSON_WS_ITEM_TYPE   = "type";
    const auto JSON_IS_VISIBLE     = "is_visible";
    const auto JSON_POS            = "pos";

    const auto JSON_WS_ITEM_CONNECTED_ITEMS = "connected_items";
    const auto JSON_WS_ITEM_LEADER          = "leader";
    const auto JSON_WS_ITEM_FOLLOWERS       = "followers";

    //qjson v0.2
    const auto JSON_ATOMS_LIST_DIM             = "dim";
    const auto JSON_ATOMS_LIST_SHOW_IMG_ATOMS  = "show_img_atoms";
    const auto JSON_ATOMS_LIST_SHOW_IMG_BONDS  = "show_img_bonds";
    const auto JSON_ATOMS_LIST_SHOW_BONDS      = "show_bonds";
    const auto JSON_ATOMS_LIST_SHOW_ATOMS      = "show_atoms";
    const auto JSON_ATOMS_LIST_BT_SHOW_DSBL    = "bt_show_disabled_records";
    const auto JSON_ATOMS_LIST_ATOM_SCALE      = "atom_scale";
    const auto JSON_ATOMS_LIST_BOND_SCALE      = "bond_scale";
    const auto JSON_ATOMS_LIST_CELL_COLOR      = "cell_color";
    const auto JSON_ATOMS_LIST_DRAW_CELL       = "draw_cell";
    const auto JSON_ATOMS_LIST_BONDING_TABLE   = "bonding_table";
    const auto JSON_ATOMS_LIST_ATOMS           = "atoms";
    const auto JSON_ATOMS_LIST_CELL            = "cell";

    const auto JSON_ATOMS_LIST_XFIELD_NAMES     = "xfield_names";
    const auto JSON_ATOMS_LIST_XFIELD_TYPES     = "xfield_types";

    const auto JSON_ATOMS_LIST_RENDER_TYPE      = "render_type";
    const auto JSON_ATOMS_LIST_DRAW_SPECULAR    = "draw_specular";
    const auto JSON_ATOMS_LIST_SPECULAR         = "render_type_specular_power";
    const auto JSON_ATOMS_LIST_ANIMATIONS       = "animations";
    const auto JSON_ATOMS_LIST_ANIMATION_NAME   = "anim_name";
    const auto JSON_ATOMS_LIST_ANIMATION_TYPE   = "anim_type";
    const auto JSON_ATOMS_LIST_ANIMATION_FRAMES = "frames";

    const auto JSON_ATOMS_LIST_MEASURE                   = "measurements";
    const auto JSON_ATOMS_LIST_MEASURE_INTER_ATOMIC_DIST = "inter_atomic";

    const auto JSON_ATOMS_LIST_DRAW_SUBCELLS             = "draw_subcells";
    const auto JSON_ATOMS_LIST_SUBCELLS_RANGE            = "subcells_range";
    const auto JSON_ATOMS_LIST_SEL_VIS                   = "sel_vis";
    const auto JSON_ATOMS_LIST_SEL_VIS_AFFECT_BONDS      = "sel_vis_affect_bonds";

    const auto JSON_ATOMS_LIST_LABELS_TYPE               = "labels";
    const auto JSON_ATOMS_LIST_LABELS_SIZE               = "labels_size";
    const auto JSON_ATOMS_LIST_LABELS_DRAW_OUTLINE       = "labels_draw_outline";
    const auto JSON_ATOMS_LIST_LABELS_INPLACE            = "labels_inplace";
    const auto JSON_ATOMS_LIST_LABELS_SEL_VIS            = "labels_sel_vis";
    const auto JSON_ATOMS_LIST_LABELS_SCREEN_SPC_SCALE   = "labels_scrn_spc_scale";

    const auto JSON_ATOMS_LIST_MSR              = "measurements";
    const auto JSON_ATOMS_LIST_MSR_SHOW_DIST    = "show_dist";
    const auto JSON_ATOMS_LIST_MSR_SHOW_ANGLE   = "show_angle";
    const auto JSON_ATOMS_LIST_MSR_SHOW_LDIST   = "show_dist_legend";
    const auto JSON_ATOMS_LIST_MSR_SHOW_LANGLE  = "show_angle_legend";
    const auto JSON_ATOMS_LIST_MSR_DIST         = "dists";
    const auto JSON_ATOMS_LIST_MSR_DIST_AT1     = "at1";
    const auto JSON_ATOMS_LIST_MSR_DIST_IDX1    = "idx1";
    const auto JSON_ATOMS_LIST_MSR_DIST_AT2     = "at2";
    const auto JSON_ATOMS_LIST_MSR_DIST_IDX2    = "idx2";
    const auto JSON_ATOMS_LIST_MSR_DIST_SHOW    = "show";
    const auto JSON_ATOMS_LIST_MSR_DIST_SH_LBL  = "show_lbl";
    const auto JSON_ATOMS_LIST_MSR_DIST_COLOR   = "color";
    const auto JSON_ATOMS_LIST_MSR_DIST_LSIZE   = "line_size";
    const auto JSON_ATOMS_LIST_MSR_DIST_FSIZE   = "font_size";
    const auto JSON_ATOMS_LIST_MSR_DIST_LSTYLE  = "line_style";
    const auto JSON_ATOMS_LIST_MSR_DIST_FSTYLE  = "font_style";
    const auto JSON_ATOMS_LIST_MSR_SHOW_CL      = "show_custom_label";
    const auto JSON_ATOMS_LIST_MSR_CL_TEXT      = "custom_label_text";

    const auto JSON_ATOMS_LIST_MSR_ANGLE         = "angles";
    const auto JSON_ATOMS_LIST_MSR_ANGLE_AT1     = "at1";
    const auto JSON_ATOMS_LIST_MSR_ANGLE_IDX1    = "idx1";
    const auto JSON_ATOMS_LIST_MSR_ANGLE_AT2     = "at2";
    const auto JSON_ATOMS_LIST_MSR_ANGLE_IDX2    = "idx2";
    const auto JSON_ATOMS_LIST_MSR_ANGLE_AT3     = "at3";
    const auto JSON_ATOMS_LIST_MSR_ANGLE_IDX3    = "idx3";
    const auto JSON_ATOMS_LIST_MSR_ANGLE_SHOW    = "show";
    const auto JSON_ATOMS_LIST_MSR_ANGLE_ORDER   = "order";

    const auto JSON_ATOMS_LIST_TYPE_COLOR_OVERRIDE       = "type_color_override";
    const auto JSON_ATOMS_LIST_ROLE = "role";

    const auto JSON_WS_CUBE_P_COLOR = "cube_color";
    const auto JSON_WS_CUBE_P_STYLE = "cube_style";
    const auto JSON_WS_CUBE_P_SCALE = "cube_scale";

    const auto JSON_WS_CAMERA             = "ws_camera";
    const auto JSON_WS_CAMERA_VIEW_POINT  = "view_point";
    const auto JSON_WS_CAMERA_LOOK_AT     = "look_at";
    const auto JSON_WS_CAMERA_LOOK_UP     = "look_up";
    const auto JSON_WS_CAMERA_ORTHO_SCALE = "ortho_scale";

    const auto JSON_ARROW_PR_ARROW_TO     = "arrow_to";
    const auto JSON_ARROW_PR_COLOR        = "arrow_color";
    const auto JSON_ARROW_PR_CAP_LEN      = "cap_len";
    const auto JSON_ARROW_PR_ARROW_SCALE  = "arrow_scale";
    const auto JSON_ARROW_PR_CAP_SCALE    = "cap_scale";

  } // namespace qpp::cad

} // namespace qpp

#endif
