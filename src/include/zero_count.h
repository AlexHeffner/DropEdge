#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/complex.h>
#include <pybind11/functional.h>
#include <pybind11/chrono.h>
#include <vector>

long zero_count(std::vector<std::vector<double>> a);

namespace py = pybind11;

PYBIND11_MODULE(pybind_11_example, mod) {
    mod.def("zero_count_cpp", &zero_count, "counts 0s in matrix");
}