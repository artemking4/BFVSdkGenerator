// Object: BFUIEquipVehicleAppearanceEntityData
// ClassId: 2187
// RuntimeId: 19082
// TypeInfo: 0x0000000144D826A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"
#include "../CasablancaShared/UIVehicleAppearanceSlot.h"
#include "../CasablancaShared/BFUIVehicleAppearanceInstanceObject.h"
#include "../CasablancaShared/BFUIVehicleAppearanceObjectList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIEquipVehicleAppearanceEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIVehicleInstanceObject Vehicle; // 0x28
        CasablancaShared::UIVehicleAppearanceSlot Slot; // 0x30
        char pad_0x34[0x4];
        CasablancaShared::BFUIVehicleAppearanceInstanceObject Appearance; // 0x38
        CasablancaShared::BFUIVehicleAppearanceObjectList AppearancesList; // 0x40
        Boolean SaveAutomatically; // 0x48
        Boolean SaveOnDeinit; // 0x49
        char pad_0x4A[0x6];
    }; // 0x50
    static_assert(sizeof(BFUIEquipVehicleAppearanceEntityData) == 0x50);
}
#pragma pack(pop)