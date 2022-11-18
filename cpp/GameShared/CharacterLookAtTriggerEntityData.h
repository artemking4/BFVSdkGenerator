// Object: CharacterLookAtTriggerEntityData
// ClassId: 3466
// RuntimeId: 38265
// TypeInfo: 0x0000000144E8E7E0
#include "../GameShared/TriggerEventEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class CharacterLookAtTriggerEntityData : public GameShared::TriggerEventEntityData {
        Float32 FOV; // 0x70
        Float32 MinDistanceToObject; // 0x74
        Float32 MaxDistanceToObject; // 0x78
        Float32 Radius; // 0x7C
        Boolean StartTriggerLookingAt; // 0x80
        Boolean CheckOcclusion; // 0x81
        Boolean UseEntityDirection; // 0x82
        char pad_0x83[0xD];
    }; // 0x90
    static_assert(sizeof(CharacterLookAtTriggerEntityData) == 0x90);
}
#pragma pack(pop)