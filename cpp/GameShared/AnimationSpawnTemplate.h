// Object: AnimationSpawnTemplate
// ClassId: 105
// RuntimeId: 30311
// TypeInfo: 0x0000000144E90AE0
#include "../Core/DataContainer.h"
#include "../GameShared/AntEnumeration.h"

#pragma pack(push, 8)
namespace GameShared {
    class AnimationSpawnTemplate : public Core::DataContainer {
        GameShared::AntEnumeration RunStyle; // 0x18
    }; // 0x20
    static_assert(sizeof(AnimationSpawnTemplate) == 0x20);
}
#pragma pack(pop)