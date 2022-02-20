/* Generated by wayland-scanner 1.20.0 */

/*
 * Copyright © 2021-2022 Andri Yngvason
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

#ifndef __has_attribute
# define __has_attribute(x) 0  /* Compatibility with non-clang compilers. */
#endif

#if (__has_attribute(visibility) || defined(__GNUC__) && __GNUC__ >= 4)
#define WL_PRIVATE __attribute__ ((visibility("hidden")))
#else
#define WL_PRIVATE
#endif

extern const struct wl_interface wl_buffer_interface;
extern const struct wl_interface wl_output_interface;
extern const struct wl_interface zext_screencopy_surface_v1_interface;

static const struct wl_interface *screencopy_unstable_v1_types[] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	&zext_screencopy_surface_v1_interface,
	&wl_output_interface,
	NULL,
	&wl_buffer_interface,
	&wl_buffer_interface,
	NULL,
};

static const struct wl_message zext_screencopy_manager_v1_requests[] = {
	{ "capture_output", "nou", screencopy_unstable_v1_types + 8 },
};

WL_PRIVATE const struct wl_interface zext_screencopy_manager_v1_interface = {
	"zext_screencopy_manager_v1", 1,
	1, zext_screencopy_manager_v1_requests,
	0, NULL,
};

static const struct wl_message zext_screencopy_surface_v1_requests[] = {
	{ "attach_buffer", "o", screencopy_unstable_v1_types + 11 },
	{ "damage_buffer", "uuuu", screencopy_unstable_v1_types + 0 },
	{ "attach_cursor_buffer", "os", screencopy_unstable_v1_types + 12 },
	{ "damage_cursor_buffer", "s", screencopy_unstable_v1_types + 0 },
	{ "commit", "u", screencopy_unstable_v1_types + 0 },
	{ "destroy", "", screencopy_unstable_v1_types + 0 },
};

static const struct wl_message zext_screencopy_surface_v1_events[] = {
	{ "buffer_info", "uuuuu", screencopy_unstable_v1_types + 0 },
	{ "cursor_buffer_info", "suuuuu", screencopy_unstable_v1_types + 0 },
	{ "init_done", "", screencopy_unstable_v1_types + 0 },
	{ "transform", "i", screencopy_unstable_v1_types + 0 },
	{ "damage", "uuuu", screencopy_unstable_v1_types + 0 },
	{ "cursor_enter", "s", screencopy_unstable_v1_types + 0 },
	{ "cursor_leave", "s", screencopy_unstable_v1_types + 0 },
	{ "cursor_info", "siiiiiii", screencopy_unstable_v1_types + 0 },
	{ "failed", "u", screencopy_unstable_v1_types + 0 },
	{ "commit_time", "uuu", screencopy_unstable_v1_types + 0 },
	{ "ready", "", screencopy_unstable_v1_types + 0 },
};

WL_PRIVATE const struct wl_interface zext_screencopy_surface_v1_interface = {
	"zext_screencopy_surface_v1", 1,
	6, zext_screencopy_surface_v1_requests,
	11, zext_screencopy_surface_v1_events,
};

