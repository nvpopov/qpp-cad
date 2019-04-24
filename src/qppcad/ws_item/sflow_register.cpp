#include <qppcad/ws_item/sflow_register.hpp>
#include <qppcad/sflow/sflow_base_nodes.hpp>

using namespace qpp;
using namespace qpp::cad;


void sflow_node_reg_helper_t::reg_sflow_info(ws_item_behaviour_manager_t *bhv_mgr) {

  auto int_grp = bhv_mgr->reg_sflow_grp("int nodes");
  auto float_grp = bhv_mgr->reg_sflow_grp("float nodes");

  sflow_node_reg_helper_t::reg_sflow_info_fbr<sf_i_prop_node_t>(
        bhv_mgr, "int", int_grp);

  sflow_node_reg_helper_t::reg_sflow_info_fbr<sf_i_final_node_t>(
        bhv_mgr, "int show", int_grp);

  sflow_node_reg_helper_t::reg_sflow_info_fbr<sf_i_p_const_node_t>(
        bhv_mgr, "int + const", int_grp);

  sflow_node_reg_helper_t::reg_sflow_info_fbr<sf_i_sum_i_node_t>(
        bhv_mgr, "int + int", int_grp);

  sflow_node_reg_helper_t::reg_sflow_info_fbr<sf_ipatb_const_node_t>(
        bhv_mgr, "(int + a)*b", int_grp);

  sflow_node_reg_helper_t::reg_sflow_info_fbr<sf_f_prop_node_t>(
        bhv_mgr, "float", float_grp);

  sflow_node_reg_helper_t::reg_sflow_info_fbr<sf_f_p_const_node_t>(
        bhv_mgr, "float + const", float_grp);

}