/*
 * Copyright (c) 2014-2016, NVIDIA CORPORATION. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef GST_NVCAMERA_PUBLIC_H_
#define GST_NVCAMERA_PUBLIC_H_

#include <gst/gst.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct GstNvCamControls {

  //TODO: Add other features
  gboolean AeLock;

}GstNvCamControls;

/*
 * set_controls: Callback to change capture settings per frame.
 * get_controls: Callback to receive the current settings after any change.
 * user_data   : user_data argument for the callbacks. Could be NULL.
 * notify      : destroy notify function to free user_data. Could be NULL.
 *
 */

typedef struct {
  void (*set_controls) (GstNvCamControls *controls, gpointer user_data);
  void (*get_controls) (GstNvCamControls *controls, gpointer user_data);
  GDestroyNotify notify;
  void *user_data;
} GstNvCamSrcCallbacks;

#ifdef __cplusplus
}
#endif

#endif /* GST_NVCAMERA_PUBLIC_H_ */
