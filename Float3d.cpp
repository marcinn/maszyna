/*
This Source Code Form is subject to the
terms of the Mozilla Public License, v.
2.0. If a copy of the MPL was not
distributed with this file, You can
obtain one at
http://mozilla.org/MPL/2.0/.
*/

#include "Float3d.h"

#include "sn_utils.h"
#include "stdafx.h"

//---------------------------------------------------------------------------

void float4x4::deserialize_float32(std::istream &s) {
    for (size_t i = 0; i < 16; i++) e[i] = sn_utils::ld_float32(s);
}

void float4x4::deserialize_float64(std::istream &s) {
    for (size_t i = 0; i < 16; i++) e[i] = (float)sn_utils::ld_float64(s);
}

void float4x4::serialize_float32(std::ostream &s) {
    for (size_t i = 0; i < 16; i++) sn_utils::ls_float32(s, e[i]);
}

void float4x4::Quaternion(
    float4 *q) {  // konwersja kwaternionu obrotu na macierz obrotu
    float xx = q->x * q->x, yy = q->y * q->y, zz = q->z * q->z;
    float xy = q->x * q->y, xz = q->x * q->z, yz = q->y * q->z;
    float wx = q->w * q->x, wy = q->w * q->y, wz = q->w * q->z;
    e[0] = 1.0f - yy - yy - zz - zz;
    e[1] = xy + xy + wz + wz;
    e[2] = xz + xz - wy - wy;
    e[4] = xy + xy - wz - wz;
    e[5] = 1.0f - xx - xx - zz - zz;
    e[6] = yz + yz + wx + wx;
    e[8] = xz + xz + wy + wy;
    e[9] = yz + yz - wx - wx;
    e[10] = 1.0f - xx - xx - yy - yy;
    // czwartej kolumny i czwartego wiersza nie ruszamy
};
