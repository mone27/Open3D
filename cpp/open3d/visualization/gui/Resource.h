// ----------------------------------------------------------------------------
// -                        Open3D: www.open3d.org                            -
// ----------------------------------------------------------------------------
// The MIT License (MIT)
//
// Copyright (c) 2018-2021 www.open3d.org
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
// ----------------------------------------------------------------------------

#include <functional>
#include <string>
#include <unordered_map>
#include <vector>

#include "open3d/visualization/gui/CompiledResources/RobotoMono_Medium_ttf.h"
#include "open3d/visualization/gui/CompiledResources/Roboto_BoldItalic_ttf.h"
#include "open3d/visualization/gui/CompiledResources/Roboto_Bold_ttf.h"
#include "open3d/visualization/gui/CompiledResources/Roboto_MediumItalic_ttf.h"
#include "open3d/visualization/gui/CompiledResources/Roboto_Medium_ttf.h"
#include "open3d/visualization/gui/CompiledResources/brightday_ibl_ktx.h"
#include "open3d/visualization/gui/CompiledResources/brightday_skybox_ktx.h"
#include "open3d/visualization/gui/CompiledResources/colorMap_filamat.h"
#include "open3d/visualization/gui/CompiledResources/crossroads_ibl_ktx.h"
#include "open3d/visualization/gui/CompiledResources/crossroads_skybox_ktx.h"
#include "open3d/visualization/gui/CompiledResources/defaultGradient_png.h"
#include "open3d/visualization/gui/CompiledResources/defaultLitSSR_filamat.h"
#include "open3d/visualization/gui/CompiledResources/defaultLitTransparency_filamat.h"
#include "open3d/visualization/gui/CompiledResources/defaultLit_filamat.h"
#include "open3d/visualization/gui/CompiledResources/defaultTexture_png.h"
#include "open3d/visualization/gui/CompiledResources/defaultUnlitTransparency_filamat.h"
#include "open3d/visualization/gui/CompiledResources/defaultUnlit_filamat.h"
#include "open3d/visualization/gui/CompiledResources/default_ibl_ktx.h"
#include "open3d/visualization/gui/CompiledResources/default_skybox_ktx.h"
#include "open3d/visualization/gui/CompiledResources/depth_filamat.h"
#include "open3d/visualization/gui/CompiledResources/depth_value_filamat.h"
#include "open3d/visualization/gui/CompiledResources/hall_ibl_ktx.h"
#include "open3d/visualization/gui/CompiledResources/hall_skybox_ktx.h"
#include "open3d/visualization/gui/CompiledResources/img_blit_filamat.h"
#include "open3d/visualization/gui/CompiledResources/infiniteGroundPlane_filamat.h"
#include "open3d/visualization/gui/CompiledResources/konzerthaus_ibl_ktx.h"
#include "open3d/visualization/gui/CompiledResources/konzerthaus_skybox_ktx.h"
#include "open3d/visualization/gui/CompiledResources/nightlights_ibl_ktx.h"
#include "open3d/visualization/gui/CompiledResources/nightlights_skybox_ktx.h"
#include "open3d/visualization/gui/CompiledResources/normals_filamat.h"
#include "open3d/visualization/gui/CompiledResources/park2_ibl_ktx.h"
#include "open3d/visualization/gui/CompiledResources/park2_skybox_ktx.h"
#include "open3d/visualization/gui/CompiledResources/park_ibl_ktx.h"
#include "open3d/visualization/gui/CompiledResources/park_skybox_ktx.h"
#include "open3d/visualization/gui/CompiledResources/pillars_ibl_ktx.h"
#include "open3d/visualization/gui/CompiledResources/pillars_skybox_ktx.h"
#include "open3d/visualization/gui/CompiledResources/pointcloud_filamat.h"
#include "open3d/visualization/gui/CompiledResources/streetlamp_ibl_ktx.h"
#include "open3d/visualization/gui/CompiledResources/streetlamp_skybox_ktx.h"
#include "open3d/visualization/gui/CompiledResources/ui_blit_filamat.h"
#include "open3d/visualization/gui/CompiledResources/unlitBackground_filamat.h"
#include "open3d/visualization/gui/CompiledResources/unlitGradient_filamat.h"
#include "open3d/visualization/gui/CompiledResources/unlitLine_filamat.h"
#include "open3d/visualization/gui/CompiledResources/unlitPolygonOffset_filamat.h"
#include "open3d/visualization/gui/CompiledResources/unlitSolidColor_filamat.h"

std::vector<char> brightday_ibl_ktx();
std::vector<char> brightday_skybox_ktx();
std::vector<char> colorMap_filamat();
std::vector<char> crossroads_ibl_ktx();
std::vector<char> crossroads_skybox_ktx();
std::vector<char> defaultGradient_png();
std::vector<char> default_ibl_ktx();
std::vector<char> defaultLit_filamat();
std::vector<char> defaultLitSSR_filamat();
std::vector<char> defaultLitTransparency_filamat();
std::vector<char> default_skybox_ktx();
std::vector<char> defaultTexture_png();
std::vector<char> defaultUnlit_filamat();
std::vector<char> defaultUnlitTransparency_filamat();
std::vector<char> depth_filamat();
std::vector<char> depth_value_filamat();
std::vector<char> hall_ibl_ktx();
std::vector<char> hall_skybox_ktx();
std::vector<char> img_blit_filamat();
std::vector<char> infiniteGroundPlane_filamat();
std::vector<char> konzerthaus_ibl_ktx();
std::vector<char> konzerthaus_skybox_ktx();
std::vector<char> nightlights_ibl_ktx();
std::vector<char> nightlights_skybox_ktx();
std::vector<char> normals_filamat();
std::vector<char> park2_ibl_ktx();
std::vector<char> park2_skybox_ktx();
std::vector<char> park_ibl_ktx();
std::vector<char> park_skybox_ktx();
std::vector<char> pillars_ibl_ktx();
std::vector<char> pillars_skybox_ktx();
std::vector<char> pointcloud_filamat();
std::vector<char> Roboto_Bold_ttf();
std::vector<char> Roboto_BoldItalic_ttf();
std::vector<char> Roboto_Medium_ttf();
std::vector<char> Roboto_MediumItalic_ttf();
std::vector<char> RobotoMono_Medium_ttf();
std::vector<char> streetlamp_ibl_ktx();
std::vector<char> streetlamp_skybox_ktx();
std::vector<char> ui_blit_filamat();
std::vector<char> unlitBackground_filamat();
std::vector<char> unlitGradient_filamat();
std::vector<char> unlitLine_filamat();
std::vector<char> unlitPolygonOffset_filamat();
std::vector<char> unlitSolidColor_filamat();
struct IBL {
    std::function<std::vector<char>()> ibl;
    std::function<std::vector<char>()> skybox;
};
const std::unordered_map<std::string, IBL> GetListOfIBLs();
