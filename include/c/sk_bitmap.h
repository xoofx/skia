/*
 * Copyright 2016 Xamarin Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// EXPERIMENTAL EXPERIMENTAL EXPERIMENTAL EXPERIMENTAL
// DO NOT USE -- FOR INTERNAL TESTING ONLY

#ifndef sk_bitmap_DEFINED
#define sk_bitmap_DEFINED

#include "sk_types.h"

SK_C_PLUS_PLUS_BEGIN_GUARD

SK_API_C void sk_bitmap_destructor(sk_bitmap_t* cbitmap);
SK_API_C sk_bitmap_t* sk_bitmap_new();
SK_API_C void sk_bitmap_get_info(sk_bitmap_t* cbitmap, sk_imageinfo_t* info);
SK_API_C void* sk_bitmap_get_pixels(sk_bitmap_t* cbitmap, size_t* length);
SK_API_C size_t sk_bitmap_get_row_bytes(sk_bitmap_t* cbitmap);
SK_API_C size_t sk_bitmap_get_byte_count(sk_bitmap_t* cbitmap);
SK_API_C void sk_bitmap_reset(sk_bitmap_t* cbitmap);
SK_API_C bool sk_bitmap_is_null(sk_bitmap_t* cbitmap);
SK_API_C bool sk_bitmap_is_immutable(sk_bitmap_t* cbitmap);
SK_API_C void sk_bitmap_set_immutable(sk_bitmap_t* cbitmap);
SK_API_C bool sk_bitmap_is_volatile(sk_bitmap_t* cbitmap);
SK_API_C void sk_bitmap_set_volatile(sk_bitmap_t* cbitmap, bool value);
SK_API_C void sk_bitmap_erase(sk_bitmap_t* cbitmap, sk_color_t color);
SK_API_C void sk_bitmap_erase_rect(sk_bitmap_t* cbitmap, sk_color_t color, sk_irect_t* rect);
SK_API_C sk_color_t sk_bitmap_get_pixel_color(sk_bitmap_t* cbitmap, int x, int y);
SK_API_C sk_color_t sk_bitmap_get_index8_color(sk_bitmap_t* cbitmap, int x, int y);
SK_API_C void sk_bitmap_set_pixel_color(sk_bitmap_t* cbitmap, int x, int y, sk_color_t color);
SK_API_C bool sk_bitmap_copy(sk_bitmap_t* cbitmap, sk_bitmap_t* dst, sk_colortype_t ct);
SK_API_C bool sk_bitmap_can_copy_to(sk_bitmap_t* cbitmap, sk_colortype_t ct);
SK_API_C void sk_bitmap_lock_pixels(sk_bitmap_t* cbitmap);
SK_API_C void sk_bitmap_unlock_pixels(sk_bitmap_t* cbitmap);
SK_API_C void sk_bitmap_get_pixel_colors(sk_bitmap_t* cbitmap, sk_color_t* colors);
SK_API_C void sk_bitmap_set_pixel_colors(sk_bitmap_t* cbitmap, const sk_color_t* colors);
SK_API_C bool sk_bitmap_try_alloc_pixels(sk_bitmap_t* cbitmap, const sk_imageinfo_t* requestedInfo, size_t rowBytes);
SK_API_C bool sk_bitmap_try_alloc_pixels_with_color_table(sk_bitmap_t* cbitmap, const sk_imageinfo_t* requestedInfo, sk_pixelref_factory_t* factory, sk_colortable_t* ctable);
SK_API_C sk_colortable_t* sk_bitmap_get_colortable(sk_bitmap_t* cbitmap);

SK_C_PLUS_PLUS_END_GUARD

#endif
