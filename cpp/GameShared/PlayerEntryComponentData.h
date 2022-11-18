// Object: PlayerEntryComponentData
// ClassId: 1773
// RuntimeId: 56302
// TypeInfo: 0x0000000144E826C0
#include "../GameShared/EntryComponentData.h"
#include "../GameShared/AntEntryIdEnum.h"
#include "../GameShared/AntEnumeration.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../GameShared/CharacterPhysicsCollisionBehavior.h"

#pragma pack(push, 16)
namespace GameShared {
    class PlayerEntryComponentData : public GameShared::EntryComponentData {
        Core::Vec3 AnimationAccelerationMultiplier; // 0x120
        GameShared::AntEntryIdEnum AntEntryId; // 0x130
        char pad_0x134[0x4];
        GameShared::AntEnumeration AntEntryEnumeration; // 0x138
        GameShared::AntEnumeration AntVehicleEnumeration; // 0x140
        GameShared::AntEnumeration AntSeatEnumeration; // 0x148
        GameShared::CharacterPhysicsCollisionBehavior CharacterCollisionBehavior; // 0x150
        Boolean FilterVehicleInput; // 0x154
        Boolean EnableCharacterPhysicsPhantom; // 0x155
        char pad_0x156[0xA];
    }; // 0x160
    static_assert(sizeof(PlayerEntryComponentData) == 0x160);
}
#pragma pack(pop)