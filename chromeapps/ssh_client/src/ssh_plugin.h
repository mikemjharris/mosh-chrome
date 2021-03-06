// Copyright (c) 2012 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SSH_PLUGIN_H
#define SSH_PLUGIN_H

#include "plugin.h"

class SshPluginInstance : public PluginInstance {
 public:
  explicit SshPluginInstance(PP_Instance instance);
  virtual ~SshPluginInstance();

 protected:
  // Implements PluginInstance.
  virtual void SessionThreadImpl();

 private:
  DISALLOW_COPY_AND_ASSIGN(SshPluginInstance);
};

#endif  // SSH_PLUGIN_H
