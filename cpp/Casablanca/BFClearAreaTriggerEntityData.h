// Object: BFClearAreaTriggerEntityData
// ClassId: 3460
// RuntimeId: 23450
// TypeInfo: 0x0000000144C83540
#include "../GameShared/ClearAreaTriggerEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Casablanca {
    class BFClearAreaTriggerEntityData : public GameShared::ClearAreaTriggerEntityData {
        Boolean RemoveExplosionPacks; // 0x80
        Boolean RemoveSupplySpheres; // 0x81
        Boolean RemoveGrenades; // 0x82
        char pad_0x83[0xD];
    }; // 0x90
    static_assert(sizeof(BFClearAreaTriggerEntityData) == 0x90);
}
#pragma pack(pop)