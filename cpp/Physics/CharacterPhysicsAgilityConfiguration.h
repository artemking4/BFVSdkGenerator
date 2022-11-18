// Object: CharacterPhysicsAgilityConfiguration
// ClassId: 1312
// RuntimeId: 24146
// TypeInfo: 0x0000000144F0FE00
#include "../Core/DataContainer.h"
#include "../Physics/CharacterStateData.h"
#include "../Physics/CharacterPoseData.h"

#pragma pack(push, 8)
namespace Physics {
    class CharacterPhysicsAgilityConfiguration : public Core::DataContainer {
        Array<Physics::CharacterStateData> States; // 0x18
        Array<Physics::CharacterPoseData> PoseData; // 0x20
    }; // 0x28
    static_assert(sizeof(CharacterPhysicsAgilityConfiguration) == 0x28);
}
#pragma pack(pop)