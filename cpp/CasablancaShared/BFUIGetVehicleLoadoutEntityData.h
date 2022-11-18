// Object: BFUIGetVehicleLoadoutEntityData
// ClassId: 2268
// RuntimeId: 3000
// TypeInfo: 0x0000000144D82B20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UIVehicleAppearanceSlot.h"
#include "../CasablancaShared/BFUIVehicleAppearanceObject.h"
#include "../CasablancaShared/BFUISpecTreeItemInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetVehicleLoadoutEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIVehicleInstanceObject Vehicle; // 0x28
        CasablancaShared::UIVehicleAppearanceSlot PreviewAppearanceSlot; // 0x30
        char pad_0x34[0x4];
        CasablancaShared::BFUIVehicleAppearanceObject PreviewAppearanceObject; // 0x38
        CasablancaShared::BFUISpecTreeItemInstanceObject PreviewSpecTreeItem; // 0x40
        Boolean PreviewAppearance; // 0x48
        Boolean PreviewSpecTreeItemEnabled; // 0x49
        char pad_0x4A[0x6];
    }; // 0x50
    static_assert(sizeof(BFUIGetVehicleLoadoutEntityData) == 0x50);
}
#pragma pack(pop)