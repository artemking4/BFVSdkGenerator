// Object: DebugWeaponLoaderIteratorEntityData
// ClassId: 2616
// RuntimeId: 31959
// TypeInfo: 0x0000000144D01620
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DebugWeaponLoaderIteratorEntityData : public Entity::EntityData {
        Int32 QueryWeaponClass; // 0x20
        char pad_0x24[0x4];
        CString QueryWeaponName; // 0x28
        Boolean FilterWeapons; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(DebugWeaponLoaderIteratorEntityData) == 0x38);
}
#pragma pack(pop)