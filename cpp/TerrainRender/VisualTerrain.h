// Object: VisualTerrain
// ClassId: 8351
// RuntimeId: 31093
// TypeInfo: 0x0000000144EB0ED0
#include "../TerrainRender/IVisualTerrain.h"

namespace TerrainRender {
    class VisualTerrain : public TerrainRender::IVisualTerrain {
        char pad_0x8[0x3118];
    }; // 0x3120
    static_assert(sizeof(VisualTerrain) == 0x3120);
}