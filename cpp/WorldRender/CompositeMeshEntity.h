// Object: CompositeMeshEntity
// ClassId: 8377
// RuntimeId: 27739
// TypeInfo: 0x0000000144EBA1F0
#include "../WorldRender/MeshEntityBase.h"

namespace WorldRender {
    class CompositeMeshEntity : public WorldRender::MeshEntityBase {
        char pad_0xB0[0x20];
    }; // 0xD0
    static_assert(sizeof(CompositeMeshEntity) == 0xD0);
}