#ifndef QPPCAD_SFLOW_PARAMETER
#define QPPCAD_SFLOW_PARAMETER

#include <qppcad/qppcad.hpp>
#include <geom/xgeom.hpp>
#include <qppcad/qpp_object.hpp>

namespace qpp {

  namespace cad {

    enum sflow_parameter_e : int {
      sfpar_none,
      sfpar_int,
      sfpar_bool,
      sfpar_float,
      sfpar_v3f,
      sfpar_string,
      sfpar_xgeom
    };

    class sflow_parameter_t : public qpp_object_t {

        QPP_OBJECT(sflow_parameter_t, qpp_object_t)

      public:

        virtual sflow_parameter_e get_param_meta();
        virtual std::shared_ptr<sflow_parameter_t> clone() = 0;
        explicit sflow_parameter_t();

    };

    class sflow_parameter_int_t : public sflow_parameter_t {

        QPP_OBJECT(sflow_parameter_int_t, sflow_parameter_t)

      public:

        int m_value;
        sflow_parameter_e get_param_meta() override ;
        std::shared_ptr<sflow_parameter_t> clone() override;

    };

    class sflow_parameter_float_t : public sflow_parameter_t {

        QPP_OBJECT(sflow_parameter_float_t, sflow_parameter_t)

      public:

        float m_value;
        sflow_parameter_e get_param_meta() override ;
        std::shared_ptr<sflow_parameter_t> clone() override;

    };

    class sflow_parameter_xgeom_t : public sflow_parameter_t {

        QPP_OBJECT(sflow_parameter_xgeom_t, sflow_parameter_t)

      public:

        xgeometry<float, periodic_cell<float> > m_value{3};
        sflow_parameter_e get_param_meta() override ;
        std::shared_ptr<sflow_parameter_t> clone() override;

    };

  } // namespace cad

} // namespace qpp

#endif
