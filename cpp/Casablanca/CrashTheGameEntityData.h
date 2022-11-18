// Object: CrashTheGameEntityData
// ClassId: 2560
// RuntimeId: 27192
// TypeInfo: 0x0000000144C82CC0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../GameShared/InputDevicePadButtons.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CrashTheGameEntityData : public Entity::EntityData {
        Array<GameShared::InputDevicePadButtons> ActionSequence; // 0x20
        Float32 Timeout; // 0x28
        Boolean Enabled; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(CrashTheGameEntityData) == 0x30);
}
#pragma pack(pop)