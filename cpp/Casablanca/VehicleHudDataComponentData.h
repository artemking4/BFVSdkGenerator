// Object: VehicleHudDataComponentData
// ClassId: 1873
// RuntimeId: 41017
// TypeInfo: 0x0000000144C7CB00
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Casablanca {
    class VehicleHudDataComponentData : public Entity::GameComponentData {
        Core::Vec3 InteractionOffset; // 0x80
        UIIncubatorShared::LocalizedStringId InteractionPromptSid; // 0x90
        Boolean Enabled; // 0x98
        char pad_0x99[0x7];
    }; // 0xA0
    static_assert(sizeof(VehicleHudDataComponentData) == 0xA0);
}
#pragma pack(pop)