// Object: BFUISpawnPointObject
// ClassId: 1247
// RuntimeId: 55234
// TypeInfo: 0x0000000144D432D0
#include "../Core/DataContainer.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUISpawnPointObject : public Core::DataContainer {
        char pad_0x18[0x8];
        Core::LinearTransform SpawnTargetTransform; // 0x20
        char pad_0x60[0x40];
    }; // 0xA0
    static_assert(sizeof(BFUISpawnPointObject) == 0xA0);
}
#pragma pack(pop)