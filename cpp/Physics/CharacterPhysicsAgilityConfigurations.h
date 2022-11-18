// Object: CharacterPhysicsAgilityConfigurations
// ClassId: 1313
// RuntimeId: 43401
// TypeInfo: 0x0000000144F0FD80
#include "../Core/DataContainer.h"
#include "../Physics/CharacterPhysicsAgilityConfiguration.h"

#pragma pack(push, 8)
namespace Physics {
    class CharacterPhysicsAgilityConfigurations : public Core::DataContainer {
        Array<Physics::CharacterPhysicsAgilityConfiguration> Configurations; // 0x18
    }; // 0x20
    static_assert(sizeof(CharacterPhysicsAgilityConfigurations) == 0x20);
}
#pragma pack(pop)