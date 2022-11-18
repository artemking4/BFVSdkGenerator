// Object: VoiceOverContextAreaEntityData
// ClassId: 3884
// RuntimeId: 41678
// TypeInfo: 0x0000000144DC1F00
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class VoiceOverContextAreaEntityData : public Entity::EntityData {
        Int32 ContextId; // 0x20
        Boolean EnableOnCreation; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(VoiceOverContextAreaEntityData) == 0x28);
}
#pragma pack(pop)