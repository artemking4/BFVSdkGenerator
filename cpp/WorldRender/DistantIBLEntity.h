// Object: DistantIBLEntity
// ClassId: 7216
// RuntimeId: 34459
// TypeInfo: 0x0000000144EB6AD0
#include "../WorldRender/LocalIBLEntity.h"

namespace WorldRender {
    class DistantIBLEntity : public WorldRender::LocalIBLEntity {
        char pad_0xE0[0x20];
    }; // 0x100
    static_assert(sizeof(DistantIBLEntity) == 0x100);
}