// Object: UINPXTooltipEntityData
// ClassId: 3736
// RuntimeId: 49020
// TypeInfo: 0x0000000144C7F280
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Casablanca/UINPXLine.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class UINPXTooltipEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString TooltipTitle; // 0x28
        Array<Casablanca::UINPXLine> NPXLines; // 0x30
        Float32 Timer; // 0x38
        Uint32 LayoutIndex; // 0x3C
        CString SharedID; // 0x40
        Boolean RunOnce; // 0x48
        Boolean ShowCloseButton; // 0x49
        Boolean SaveWhenClosed; // 0x4A
        Boolean UsePresetLayout; // 0x4B
        Boolean EatAllInput; // 0x4C
        char pad_0x4D[0x3];
    }; // 0x50
    static_assert(sizeof(UINPXTooltipEntityData) == 0x50);
}
#pragma pack(pop)