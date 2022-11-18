// Object: BFUIGetLoadoutUnlockData
// ClassId: 2228
// RuntimeId: 52486
// TypeInfo: 0x0000000144D4C470
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUILoadoutConfiguration.h"
#include "../CasablancaShared/BFUILoadoutData.h"
#include "../CasablancaShared/BFUILoadoutSlotObject.h"
#include "../CasablancaShared/CustomizationSlotType.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetLoadoutUnlockData : public Entity::EntityData {
        CasablancaShared::BFUILoadoutConfiguration LoadoutConfiguration; // 0x20
        CasablancaShared::BFUILoadoutData Loadout; // 0x28
        CasablancaShared::BFUILoadoutSlotObject Slot; // 0x30
        CasablancaShared::CustomizationSlotType StaticSlotType; // 0x38
        char pad_0x3C[0x4];
        CasablancaShared::BFUILoadoutSlotObject Socket; // 0x40
        Boolean GetAccessoryUnlock; // 0x48
        Boolean UpdateAutomatically; // 0x49
        char pad_0x4A[0x6];
    }; // 0x50
    static_assert(sizeof(BFUIGetLoadoutUnlockData) == 0x50);
}
#pragma pack(pop)