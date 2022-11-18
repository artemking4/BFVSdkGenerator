// Object: ActorCustomizationComponentData
// ClassId: 1705
// RuntimeId: 8063
// TypeInfo: 0x0000000144DBE6B0
#include "../Entity/GameComponentData.h"
#include "../DiceCommonsShared/ActorCustomizationData.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class ActorCustomizationComponentData : public Entity::GameComponentData {
        DiceCommonsShared::ActorCustomizationData Customization; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(ActorCustomizationComponentData) == 0x90);
}
#pragma pack(pop)