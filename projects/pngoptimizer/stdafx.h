/////////////////////////////////////////////////////////////////////////////////////
// This file is part of the PngOptimizer application
// Copyright (C) Hadrien Nilsson - psydk.org
// For conditions of distribution and use, see copyright notice in PngOptimizer.h
/////////////////////////////////////////////////////////////////////////////////////
#ifndef PO_STDAFX_H
#define PO_STDAFX_H

#include <chustd/chustd.h>
#include <poeng/poeng.h>

#ifdef _WIN32

#include <chuwin32/chuwin32.h>
#include <chui/chui.h>

using namespace chuwin32;
using namespace chui;

#else

#include <gtk/gtk.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <glib/gi18n.h>
#include <gdk/gdk.h>

#endif

using namespace chustd;

#endif // ndef PO_STDAFX_H_INCLUDED
