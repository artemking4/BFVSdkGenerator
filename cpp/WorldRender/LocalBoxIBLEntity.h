// Object: LocalBoxIBLEntity
// ClassId: 7217
// RuntimeId: 53630
// TypeInfo: 0x0000000144EB7B40
#include "../WorldRender/LocalIBLEntity.h"

namespace WorldRender {
    class LocalBoxIBLEntity : public WorldRender::LocalIBLEntity {
        char pad_0xE0[0x40];
    }; // 0x120
    static_assert(sizeof(LocalBoxIBLEntity) == 0x120);
}