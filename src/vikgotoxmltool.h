/*
 * viking -- GPS Data and Topo Analyzer, Explorer, and Manager
 *
 * Copyright (C) 2003-2005, Evan Battaglia <gtoevan@gmx.net>
 * Copyright (C) 2009, Guilhem Bonnefille <guilhem.bonnefille@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */
#ifndef __VIK_GOTO_XML_TOOL_H
#define __VIK_GOTO_XML_TOOL_H

#include <glib.h>

#include "vikgototool.h"

G_BEGIN_DECLS

#define VIK_GOTO_XML_TOOL_TYPE            (vik_goto_xml_tool_get_type ())
#define VIK_GOTO_XML_TOOL(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), VIK_GOTO_XML_TOOL_TYPE, VikGotoXmlTool))
#define VIK_GOTO_XML_TOOL_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), VIK_GOTO_XML_TOOL_TYPE, VikGotoXmlToolClass))
#define IS_VIK_GOTO_XML_TOOL(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VIK_GOTO_XML_TOOL_TYPE))
#define IS_VIK_GOTO_XML_TOOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VIK_GOTO_XML_TOOL_TYPE))
#define VIK_GOTO_XML_TOOL_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), VIK_GOTO_XML_TOOL_TYPE, VikGotoXmlToolClass))


typedef struct _VikGotoXmlTool VikGotoXmlTool;
typedef struct _VikGotoXmlToolClass VikGotoXmlToolClass;

struct _VikGotoXmlToolClass
{
  VikGotoToolClass object_class;
};

GType vik_goto_xml_tool_get_type ();

struct _VikGotoXmlTool {
  VikGotoTool obj;
};

G_END_DECLS

#endif
