#ifndef QPPCAD_GEOM_VIEW_TOOLS
#define QPPCAD_GEOM_VIEW_TOOLS

#include <qppcad/core/qppcad.hpp>
#include <qppcad/ws_item/geom_view/geom_view.hpp>

namespace qpp {

  namespace cad {

    struct geom_view_tools_t {

        /* shake tools */
        static void shake_atoms(geom_view_t *gv,
                                std::set<size_t> atoms_to_shake,
                                float magn);
        static void py_shake_atoms(geom_view_t *gv,
                                   py::list atoms_to_shake,
                                   float magn);

        /* charge, multipole moment tools */
        static vector3<float> dipole_moment(geom_view_t *gv);
        static float total_charge(geom_view_t *gv);
        static std::vector<scalar_partition_per_type_t<> > get_charge_partition(geom_view_t *gv);
        static py::list py_get_charge_partition(geom_view_t *gv);

        /* vibrational related tools */
        static void pertrub_via_normal_mode(geom_view_t *gv,
                                            generic_array_t<vector3<float>, float> &disp);

        /* printing tools */
        static std::string pretty_print_selected_atoms(geom_view_t *gv,
                                                       vector3<float> new_frame);

        /* periodic cell related tools */
        static void flip_atom_in_cell(geom_view_t *gv,
                                      size_t at_id,
                                      size_t dim_id,
                                      float flip_magn = 1,
                                      bool rebuild_tree = false);
        static void flip_sel_atoms_in_cell(geom_view_t *gv,
                                           size_t dim_id,
                                           float flip_magn = 1);
        static void align_atoms_to_point(geom_view_t *gv,
                                         vector3<float> fpoint);
        static void change_cell_keep_atoms(geom_view_t *gv,
                                           vector3<float> new_a,
                                           vector3<float> new_b,
                                           vector3<float> new_c);
        static void purify_boundary_atoms(geom_view_t *dst,
                                          geom_view_t *src);
        static void clamp_atoms_to_cell(geom_view_t *gv,
                                        bool ignore_selection = true);

        static vector3<float> center_cell_on(geom_view_t *gv,
                                             vector3<float> new_cnt,
                                             bool clamp_atoms = true);

        /* sublattices, atoms clustering */
        static std::vector<size_t> get_atoms_cn(geom_view_t *gv);
        static std::vector<size_t> get_atoms_sublattices(geom_view_t *gv,
                                                         float score_eps = 0.1f);

        /* structure aligning */
        static void tr_align_geoms(geom_view_t *what_gv,
                                   geom_view_t *to_gv,
                                   vector3<float> start_offset,
                                   vector3<float> axis_steps,
                                   size_t total_steps);

        /* composing */
        static void compose_gv_from_images(py::list gvs);

    };

  } // namespace cad

} // namespace qpp

#endif