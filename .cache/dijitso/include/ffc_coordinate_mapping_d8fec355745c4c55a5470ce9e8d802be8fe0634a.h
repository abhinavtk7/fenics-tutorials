// This code conforms with the UFC specification version 2018.1.0
// and was automatically generated by FFC version 2019.1.0.post0.
//
// This code was generated with the following parameters:
//

//  add_tabulate_tensor_timing:     False
//  convert_exceptions_to_warnings: False
//  cpp_optimize:                   True
//  cpp_optimize_flags:             '-O2'
//  epsilon:                        1e-14
//  error_control:                  False
//  external_include_dirs:          ''
//  external_includes:              ''
//  external_libraries:             ''
//  external_library_dirs:          ''
//  form_postfix:                   False
//  format:                         'ufc'
//  generate_dummy_tabulate_tensor: False
//  max_signature_length:           0
//  no-evaluate_basis_derivatives:  True
//  optimize:                       True
//  precision:                      None
//  quadrature_degree:              None
//  quadrature_rule:                None
//  representation:                 'auto'
//  split:                          False

#ifndef __FFC_COORDINATE_MAPPING_D8FEC355745C4C55A5470CE9E8D802BE8FE0634A_H
#define __FFC_COORDINATE_MAPPING_D8FEC355745C4C55A5470CE9E8D802BE8FE0634A_H
#include "ffc_element_7c574859bd7964e3220f792626cee42fd613981e.h"
#include "ffc_element_f63836c7c64462ec628c4cd975fee759ae494282.h"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <ufc.h>

class ffc_coordinate_mapping_d8fec355745c4c55a5470ce9e8d802be8fe0634a_coordinate_mapping_main: public ufc::coordinate_mapping
{
public:

  ffc_coordinate_mapping_d8fec355745c4c55a5470ce9e8d802be8fe0634a_coordinate_mapping_main();

  ~ffc_coordinate_mapping_d8fec355745c4c55a5470ce9e8d802be8fe0634a_coordinate_mapping_main() override;

  const char * signature() const final override;

  ufc::coordinate_mapping * create() const final override;

  std::size_t geometric_dimension() const final override;

  std::size_t topological_dimension() const final override;

  ufc::shape cell_shape() const final override;

  ufc::finite_element * create_coordinate_finite_element() const final override;

  ufc::dofmap * create_coordinate_dofmap() const final override;

  void compute_physical_coordinates(
      double * x, std::size_t num_points,
      const double * X,
      const double * coordinate_dofs) const final override;

  void compute_reference_coordinates(
      double * X, std::size_t num_points,
      const double * x,
      const double * coordinate_dofs, int cell_orientation) const final override;

  void compute_reference_geometry(
      double * X, double * J, double * detJ, double * K, std::size_t num_points,
      const double * x,
      const double * coordinate_dofs, int cell_orientation) const final override;

  void compute_jacobians(
      double * J, std::size_t num_points,
      const double * X,
      const double * coordinate_dofs) const final override;

  void compute_jacobian_determinants(
      double * detJ, std::size_t num_points,
      const double * J,
      int cell_orientation) const final override;

  void compute_jacobian_inverses(
      double * K, std::size_t num_points,
      const double * J, const double * detJ) const final override;

  void compute_geometry(
      double * x, double * J, double * detJ, double * K, std::size_t num_points,
      const double * X,
      const double * coordinate_dofs, int cell_orientation) const final override;

  void compute_midpoint_geometry(
      double * x, double * J,
      const double * coordinate_dofs) const final override;

};

extern "C" ufc::coordinate_mapping * create_ffc_coordinate_mapping_d8fec355745c4c55a5470ce9e8d802be8fe0634a_coordinate_mapping_main();

#endif
