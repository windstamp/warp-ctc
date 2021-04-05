#pragma once

#include "type_defs.h"

template <typename T>
ctcStatus_t reduce_negate(const T* input, T* output, int rows, int cols, bool axis, gpuStream_t stream);
template <typename T>
ctcStatus_t reduce_exp(const T* input, T* output, int rows, int cols, bool axis, gpuStream_t stream);
template <typename T>
ctcStatus_t reduce_max(const T* input, T* output, int rows, int cols, bool axis, gpuStream_t stream);
