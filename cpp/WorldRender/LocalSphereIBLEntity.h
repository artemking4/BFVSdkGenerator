// Object: LocalSphereIBLEntity
// ClassId: 7218
// RuntimeId: 51040
// TypeInfo: 0x0000000144EB7C50
#include "../WorldRender/LocalIBLEntity.h"

namespace WorldRender {
    class LocalSphereIBLEntity : public WorldRender::LocalIBLEntity {
        char pad_0xE0[0x10];
    }; // 0xF0
    static_assert(sizeof(LocalSphereIBLEntity) == 0xF0);
}