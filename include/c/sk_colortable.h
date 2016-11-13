/*
 * Copyright 2016 Xamarin Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// EXPERIMENTAL EXPERIMENTAL EXPERIMENTAL EXPERIMENTAL
// DO NOT USE -- FOR INTERNAL TESTING ONLY

#ifndef sk_colortable_DEFINED
#define sk_colortable_DEFINED

#include "sk_types.h"

SK_C_PLUS_PLUS_BEGIN_GUARD

SK_API_C void sk_colortable_unref(sk_colortable_t* ctable);
SK_API_C sk_colortable_t* sk_colortable_new(const sk_color_t* colors, int count);
SK_API_C int sk_colortable_count(const sk_colortable_t* ctable);
SK_API_C void sk_colortable_read_colors(const sk_colortable_t* ctable, sk_color_t** colors);

SK_C_PLUS_PLUS_END_GUARD

#endif
