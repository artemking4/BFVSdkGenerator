// Object: VehicleDestroyedTriggerEntityData
// ClassId: 3471
// RuntimeId: 6849
// TypeInfo: 0x0000000144C314F0
#include "../GameShared/TriggerEntityData.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 16)
namespace Casablanca {
    class VehicleDestroyedTriggerEntityData : public GameShared::TriggerEntityData {
        GameShared::TeamId TeamId; // 0x70
        char pad_0x74[0xC];
    }; // 0x80
    static_assert(sizeof(VehicleDestroyedTriggerEntityData) == 0x80);
}
#pragma pack(pop)