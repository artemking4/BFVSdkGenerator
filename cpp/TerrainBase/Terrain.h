// Object: Terrain
// ClassId: 8352
// RuntimeId: 10155
// TypeInfo: 0x0000000144EAC790
#include "../TerrainBase/ITerrain.h"

namespace TerrainBase {
    class Terrain : public TerrainBase::ITerrain {
        char pad_0x8[0x20];
    }; // 0x28
    static_assert(sizeof(Terrain) == 0x28);
}